#include<stdio.h>
int main()
{
    char str[100];
    scanf("%[^
]s",str);
    int len=0,i;
    for(i=0;str[i]!=NULL;i++)
    {
        len++;
    }
    for(i=len-1;i>=0;i--)
    {
        printf("%c",str[i]);
    }
}