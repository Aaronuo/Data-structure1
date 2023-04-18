#include<stdio.h>
//定长顺序存储
#define MAXSTRLEN 255
typedef unsigned char SString[MAXSTRLEN+1];
//堆分配存储表示
typedef struct 
{
    char *ch;
    int length;
}HString;
//串的块链存储
#define CHUNKSIZE 80 //用户定义
typedef struct
{
    char ch[CHUNKSIZE];
    struct Chunk *next;
}Chunk;
typedef struct
{
    Chunk *head,*tail;
    int curlen; 
}LString;


char build_next(SString patt[10]);
char Kmp_search(SString string1,SString patt);