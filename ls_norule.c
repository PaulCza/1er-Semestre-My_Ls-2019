/*
** EPITECH PROJECT, 2020
** zadfda
** File description:
** dazzndaz
*/

#include "my.h"

int delete(node *head)
{
    node *temp = head;
    node *t;

    while(temp->next != NULL){
        t = temp;
        temp = temp->next;
    }
    free(t->next);
    t->next=NULL;
}

void print_ll(node *head)
{
    node* cur = head;

    while (cur != NULL){
        if (cur->str[0] != '.'){
            my_putstr(cur->str);
            my_putchar('\n');
        }
        cur = cur->next;
    }
}

void no_rule(node *head)
{
    delete(head);
    sort_ll(head);
    print_ll(head);
    free(head);
}

int my_prepare_ls_no_rule_dir(char *str)
{
    DIR *rep = NULL;
    struct dirent* lecture = NULL;
    node* head = malloc(sizeof(node));
    node* cur = head;

    rep = opendir(str);
    if (rep == NULL && errno == ENOTDIR){
        my_putstr(str);
        my_putchar('\n');
        return 0;
    }else if (rep == NULL && errno != ENOTDIR)
        return 84;
    while((lecture = readdir(rep)) != NULL){
        cur->str = lecture->d_name;
        cur->next = malloc(sizeof(node));
        cur = cur->next;
    }
    no_rule(head);
    closedir(rep);
    return 0;
}

int my_prepare_ls_no_rule(void)
{
    DIR *rep = NULL;
    struct dirent* lecture = NULL;
    node* head = malloc(sizeof(node));
    node* cur = head;

    rep = opendir("./");
    if (rep == NULL)
        return(-1);
    while((lecture = readdir(rep)) != NULL){
        cur->str = lecture->d_name;
        cur->next = malloc(sizeof(node));
        cur = cur->next;
    }
    delete(head);
    print_ll(head);
    closedir(rep);
    return 0;
}
