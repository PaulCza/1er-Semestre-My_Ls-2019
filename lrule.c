/*
** EPITECH PROJECT, 2020
** zda
** File description:
** daznd
*/

#include "my.h"

void user(int uid, int gid)
{
    struct passwd *pws;
    struct group *pgs;

    pgs = getgrgid(gid);
    pws = getpwuid(uid);
    my_printf("%s ", pws->pw_name);
    my_printf("%s", pgs->gr_name);
}

char *better_time(char *str)
{
    int a = my_strlen(str);
    int b = 4;
    int c = 0;
    char str2[20];

    str[1] = 2;
    str[0] = 2;
    str[2] = 2;
    str[3] = 2;
    str[16] = ' ';
    str[17] = ' ';
    str[18] = '\0';
    while (str[b] != '\0'){
        str2[c] = str[b];
        b = b + 1;
        c = c + 1;
    }
    my_printf("%s", str2);
    my_putchar(' ');
    return str;
}

void date(const time_t *mode)
{
    char *str;

    str = ctime(mode);
    str = better_time(str);
}

void size(int size)
{
    if (size < 10)
        my_printf("     ");
    else if (size < 100)
        my_printf("    ");
    else if (size < 1000)
        my_printf("   ");
    else if (size < 10000)
        my_printf("  ");
    else if (size < 100000)
        my_printf(" ");
    else 
        my_printf("4096");
}
