#include<stdio.h>
#include<list.h>
typedef struct
{
    ElemType data[MaxSize];
    int length;
} SqList;
typedef struct 
{
    /* data */
    ElemType data[MaxSize];
    struct Node *next;
}LinkList;
typedef struct 
{
    /* data */
    ElemType data[MaxSize];
    struct Node *prev;
    struct Node *back;
    
};

