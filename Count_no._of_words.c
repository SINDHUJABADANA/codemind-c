#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    scanf("%[^
]s",str);
    int i,j,c=0,len=0;
    for(i=0;str[i]!=NULL;i++)
    {
      len++;
    }
    for(j=0;j<len;j++)
    {
      if(str[j]==' ')
      {
          c++;
      }
    }
    printf("%d",c+1);
}