#include "string.h"
char build_next(SString patt[10])
{
    int next[10]=0;
    int prefix_len=0;
    int i=1;
    while(i<len(patt))
    {
        if (patt[prefix_len]==patt[i])
        {
            /* code */
            prefix_len+=1;
            next[i-1]=prefix_len;
            i+=1;
        }
        else
        {
            if (prefix_len==0)
            {
                /* code */
                next[i-1]=0;
            }
            else
            {
                prefix_len=next[prefix_len-1];
            }
        }
        return next;
        
    }
}


char Kmp_search(SString string1,SString patt)
{
    int next[MAXSTRLEN-1] =build_next(patt);
    int i,j=0;
    while (i<len(string1))
    {
        /* code */
        if (string1[i]==patt[j])
        {
            /* code */
            i+=1;
            j+=1;
        }
        else if (j>0)
        {
            /* code */
            j=next[j-1];
        }
        else 
        {
            /* code */
            i+=1;
        }
        if (j==len(patt))
        {
            return i-j;
        }
    }
    
}