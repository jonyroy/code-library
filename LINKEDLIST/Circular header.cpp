#include <list>
#include <map>
#include <set>
#include <deque>
#include <queue>
#include <stack>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <algorithm>
#include <iostream>
#include <cstring>
#include <vector>
#include <string>
#include <cassert>
#include <ctime>
#include <stdlib.h>
#include <stdio.h>

#define snapd(expr) printf(#expr " = %d\n", expr);
#define snapf(expr) printf(#expr " = %f\n", expr);

struct cell
{
    int data;
    struct cell *next;
};

struct cell *insert(struct cell *list, int value)
{
    struct cell *newcell, *first = list;

    if (list == NULL)
        {
        newcell = (struct cell *)malloc(sizeof(struct cell));
        newcell->data = value;
        newcell->next = newcell;
        return newcell;
        }

    while (list->next != first)
        {
        list = list->next;
        }


    newcell = (struct cell *)malloc(sizeof(struct cell));
    list->next = newcell;
    newcell->data = value;
    newcell->next = first;

    return first;






}

void printlist(struct cell *list)
{
    struct cell *first = list;


    if (list == NULL)
        {
        printf("The circularly linked list is empty!\n");
        return;
        }


        do
        {

        printf("%d\n", list->data);

        list = list->next;
        } while(list != first);

}

struct cell *removecell(struct cell *list, int value)
{
    struct cell *first = list, *last = list, *previous = list;

    if (list == NULL)
        {
        printf("The circularly linked list is already empty!\n");
        return;
        }

    //handle the first element of the list
    if (list->data == value)
        {

        //handle only one element in the list
        if (list->next == list)
            {
            free(list);
            return NULL;
            }

        //get the last element of the list
        while(last->next != first) last = last->next;

        //connect last element with 2nd element
        first = first->next;
        last->next = first;
        free(list);
        return first;

        }

    //handle the middle elements

    while (list->next != first)
        {
        if (list->data == value)
            {
            previous->next = list->next;
            free(list);
            return first;

            }

        previous = list;
        list = list->next;
        }

    //handle the last element
    if (list->data == value)
        {
        previous->next = first;
        free(list);
        return first;
        }
    else
        {
        //if the element is not found
        printf("The element %d has not been found in the list!\n", value);
        return first;
        }



}

void find(struct cell *list, int value)
{
    struct cell *first = list, *previous = list;

    if (list == NULL)
    {
    printf("The circularly linked list is empty!\n");
    return;
    }

    //handle the first element
    if (list->data == value)
        {
        printf("The %d is found at the beginning of the list before %d!\n", value, list->next->data);
        return;
        }

    while (list->next != first)
        {
        if (list->data == value)
            {
            printf("%d has been found between %d and %d\n", value, previous->data, list->next->data);
            return;
            }

        previous = list;
        list = list->next;
        }


    //handle the last element
    if (list->data == value)
        {
        printf("The %d is found at the end of the list after %d!\n", value, previous->data);
        return;
        }

    printf("The element %d is not found in the list!\n");
    return;
}

void main (int argc, char *argv[])
{

    struct cell *mylist = NULL;
    int command, val;

    printf("CIRCULARLY LINKED LIST\n");
    printf("Control commands:\n");
    printf("1 - insert cell\n");
    printf("2 - delete cell\n");
    printf("3 - print list\n");
    printf("4 - find value in the list\n");
    printf("0 - exit program\n");
    printf("Enter your command: ");

    for (;;)
        {
        scanf("%d", &command);

        switch (command)
            {

            case 1:
                printf("Enter the value to be inserted: ");
                scanf("%d", &val);
                mylist = insert(mylist, val);
                printf("Enter the next command: ");
                break;

            case 2:
                printf("Enter the value to be deleted: ");
                scanf("%d", &val);
                mylist = removecell(mylist, val);
                printf("Enter the next command: ");
                break;

            case 3:
                printf("Contents of the circularly linked list: \n");
                printf("=======================================\n");
                printlist(mylist);
                printf("=======================================\n");
                printf("Enter the next command: ");
                break;

            case 4:
                printf("Enter the value to be searched for: ");
                scanf("%d", &val);
                find(mylist, val);
                printf("Enter the next command: ");
                break;

            case 0:
                //exit program
                break;

            default:
                printf("Wrong command!\n");
                printf("Control commands:\n");
                printf("1 - insert cell\n");
                printf("2 - delete cell\n");
                printf("3 - print list\n");
                printf("4 - find value in the list\n");
                printf("0 - exit program\n");
                printf("Enter your command: ");
                break;
            }
        }


}
