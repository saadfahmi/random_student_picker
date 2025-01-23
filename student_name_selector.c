#include "header.h"


void load_names(const char *filename, char names[MAX_STUDENTS][MAX_NAME_LENGTH], int *count) {
    FILE *file = fopen(filename, "r");
    if(!file)
    {
                printf("Error: Could not open file");
                exit(1);

    }

    char buffer[MAX_NAME_LENGTH];
    *count=0;

    while(fgets(buffer, sizeof(buffer), file))
    {
            buffer[strcspn(buffer,"\n")] = '\0';
            strcpy(names[*count], buffer);
            (*count)++;
            if(*count >= MAX_STUDENTS)
            {
                        printf("Warning: Maximum student limit reached (%d). Some names may be ignored.\n", MAX_STUDENTS);
                        break;
            }

    }
    fclose(file);
}
char *choose_random_name(char names[MAX_STUDENTS][MAX_NAME_LENGTH], int count)
{
    if(count==0)
    {
                printf("No names loaded to choose from!\n");
                        return NULL;
    }

    int random_index = rand() % count;
    return names[random_index];


} 

int main()
{
                char filename[MAX_NAME_LENGTH];
                char names[MAX_STUDENTS][MAX_NAME_LENGTH];
                int count;

                srand(time(NULL));

                printf("Enter the name of the file containing the student names (e.g., students.txt): ");
                scanf("%s", filename);
                char *selected_name = choose_random_name(names,count);
                if(selected_name)
                {
                        printf("\n The selected student is: %s\n", selected_name);
                }


            return 0;

}
