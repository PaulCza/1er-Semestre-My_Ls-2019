/*
** EPITECH PROJECT, 2020
** azda
** File description:
** da
*/

#include "my.h"

void swap(struct Node *a, struct Node *b) 
{ 
    char temp[50];

    my_strcpy(temp, a->str);
    my_strcpy(a->str, b->str);
    my_strcpy(b->str, temp);
} 
void sort_ll(node *head)
{
    int swapped, i; 
    node *ptr1; 
    node *lptr = NULL; 
  
    do{ 
        swapped = 0; 
        ptr1 = head;
        while (ptr1->next != lptr) 
        { 
            if (my_strcmp(ptr1->str, ptr1->next->str) > 0) 
            {  
                swap(ptr1, ptr1->next); 
                swapped = 1; 
            } 
            ptr1 = ptr1->next; 
        } 
        lptr = ptr1; 
    } 
    while (swapped); 
} 
