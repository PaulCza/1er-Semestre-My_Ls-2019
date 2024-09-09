/*
** EPITECH PROJECT, 2020
** s	
** File description:
** dad
*/

#include <sys/types.h>
#include <dirent.h>
#include <stdio.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <time.h>
#include <pwd.h>
#include <grp.h>
#include <string.h>
#include <errno.h>
typedef struct Node {
    struct dirent* lecture;
    char *str;
    struct Node* next;
} node;
int my_prepare_ls_no_rule_dir(char *str);
