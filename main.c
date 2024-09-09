/*
** EPITECH PROJECT, 2020
** main.c
** File description:
** dazdaz
*/

#include "my.h"


int main(int argc, char *argv[])
{
    int a = 0;

    if (argc == 1)
        a = my_prepare_ls_no_rule();
    else if (argv[1][1] != 'l')
        a = my_prepare_ls_no_rule_dir(argv[1]);
    return a;
}
