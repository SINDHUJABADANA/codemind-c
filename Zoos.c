#include<stdio.h>
int main()
{
    char str[100];
    scanf("%[^
]s",&str);
    int x,y,i;
    x=0,y=0;
    for(i=0;str[i]!=NULL;i++)
    {
        if(str[i]=='z')
        {
            x++;
        }
        if(str[i]=='o')
        {
            y++;
        }
    }
    if(2*x==y)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
}