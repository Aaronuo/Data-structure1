#include<stdio.h>
#include<malloc.h>
#include<stdbool.h>
#define MaxSize 50
typedef int ElemType;

typedef struct
{
    ElemType data[MaxSize];
    int length;
} SqList;

typedef struct LNode
{
    ElemType data;
    struct LNode *next;     
}LNode,*LinkList;

// typedef struct
// {
//     /* data */
//     ElemType data[MaxSize];
//     struct Node *next;
// } LinkList;
typedef struct
{
    /* data */
    ElemType data[MaxSize];
    struct Node *prev;
    struct Node *back;
};

typedef struct
{
    ElemType *data;
    int Maxsize, length;

} SeqList;

void InitList(SqList *&L);
int Length(SqList *L);
bool ListInsert(SqList &L,int i,ElemType e);

bool ListDelete(SqList &L,int i ,ElemType &e);