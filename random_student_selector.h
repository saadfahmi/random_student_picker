
#ifndef RANDOM_STUDENT_SELECTOR_H
#define RANDOM_STUDENT_SELECTOR_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#define MAX_NAME_LENGTH 100
#define MAX_STUDENTS 100
void load_names(const char *filename, char names[MAX_STUDENTS][MAX_NAME_LENGTH], int *count);
char *choose_random_name(char names[MAX_STUDENTS][MAX_NAME_LENGTH], int count);

#endif 
