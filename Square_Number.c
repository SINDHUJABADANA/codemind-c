#include<stdio.h>
int main()
{
    int a,i;
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        if(a==i*i)
        {
            printf("True");
            break;
        }
    }
     if(a!=i*i)
      {
        printf("False");
      }
    return 0;
}