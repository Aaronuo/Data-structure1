#include <stdio.h>
#include <list.h>

void InitList(SqList *&L)
{
    L = (SqList *)malloc(sizeof(SqList)); // 分配存放线性表的空间
    L->length = 0;
}
int Length(SqList *L)
{
    return (L->length);
}

LinkList List_HeadInsert(LinkList &L)
{
    LNode *s;int x;
    L=(LinkList)malloc(sizeof(LNode));
    L->next=NULL;
    scanf("%d",&x);
    while (x!=9999)
    {
        s=(LNode*)malloc(sizeof(LNode));
        s->data=x;
        s->next=L->next;
        L->next=s;
        scanf("%d",&x);
    }
    return L;
}
LinkList List_TailInsert(LinkList &L)
{
    int x;
    L=(LinkList)malloc(sizeof(LNode));
    LNode *s,*r=L;
    scanf("%d",&x);
    while (x!=9999)
    {
        s=(LNode*)malloc(sizeof(LNode));
        s->data=x;
        r->next=s;
        r=s;
        scanf("%d",&x);
    }
    r->next=NULL;
    return L;
}

bool ListInsert(SqList &L, int i, ElemType e)
{
    if (i < 1 || i > L.length + 1)
        return false;
    if (L.length >= MaxSize)
        return false;
    for (int j = L.length; j >= i; j--)
        L.data[j] = L.data[j - 1];
    L.data[i - 1] = e;
    L.length++;
    return true;
}

bool ListDelete(SqList &L, int i, ElemType &e)
{
    if (i < 1 || i > L.length)
        return false;
    e = L.data[i - 1]; //将被删除的元素赋给e
    for (int j = i; j < L.length; j++) //将第i个位置后的元素前移
        L.data[j - 1] = L.data[j]; 
    L.length--;
    return true;
}

int LocateElem(SqList L, ElemType e)
{
    int i;
    for (i = 0; i < L.length; i++)
        if (L.data[i] == 0)
            return i + 1;
    return 0;
}
int GetElem(SqList L,int i){

}