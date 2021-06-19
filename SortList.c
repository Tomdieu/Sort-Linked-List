#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
}node;

void InsertAtBegin(node **list,int data);

void BubbleSort(node *start);

void swap(node *a,node *b);

void print(node *start);

int main(int argc, char const *argv[])
{
    int arr[] = {12,45,6,0,8,12};
    int list_size,i;

    node *start = NULL;

    for(i=0;i<6;i++)
        InsertAtBegin(&start,arr[i]);

    print(start);

    BubbleSort(start);

    print(start);    
    return 0;
}

void InsertAtBegin(node **list,int data)
{
    node *ptr = (node*)malloc(sizeof(node));

    ptr->data = data;
    ptr->next = *list;
    *list = ptr;
}

void print(node *start)
{
    for(node *n = start;n != NULL;n = n->next)
    {
        printf("%d ",n->data);
    }
    printf("\n");
}


void BubbleSort(node *start)
{
    int swapped,i;
    node *ptr,*lptr = NULL;
    if(start == NULL)
        return;
    do
    {
        swapped = 0;
        ptr = start;
        while (ptr->next != lptr)
        {#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
}node;

void InsertAtBegin(node **list,int data);

void BubbleSort(node *start);

void swap(node *a,node *b);

void print(node *start);

int main(int argc, char const *argv[])
{
    int arr[] = {12,45,6,0,8,12};
    int list_size,i;

    node *start = NULL;

    for(i=0;i<6;i++)
        InsertAtBegin(&start,arr[i]);

    print(start);

    BubbleSort(start);

    print(start);    
    return 0;
}

void InsertAtBegin(node **list,int data)
{
    node *ptr = (node*)malloc(sizeof(node));

    ptr->data = data;
    ptr->next = *list;
    *list = ptr;
}

void print(node *start)
{
    for(node *n = start;n != NULL;n = n->next)
    {
        printf("%d ",n->data);
    }
    printf("\n");
}


void BubbleSort(node *start)
{
    int swapped,i;
    node *ptr,*lptr = NULL;
    if(start == NULL)
        return;
    do
    {
        swapped = 0;
        ptr = start;
        while (ptr->next != lptr)
        {
            if(ptr->data > ptr->next->data)
            {
                swap(ptr,ptr->next);
                swapped = 1; 
            }
            ptr = ptr->next;
        }
        lptr = ptr;
    }while(swapped);
}


void swap(node *a,node *b)
{
    int tmp = a->data;
    a->data = b->data;
    b->data = tmp;
}
            if(ptr->data > ptr->next->data)
            {
                swap(ptr,ptr->next);
                swapped = 1; 
            }
            ptr = ptr->next;
        }
        lptr = ptr;
    }while(swapped);
}


void swap(node *a,node *b)
{
    int tmp = a->data;
    a->data = b->data;
    b->data = tmp;
}
