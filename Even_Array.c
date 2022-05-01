#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i,count=0,count1=0,count2;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            count++;
        }
        if(a[i]==0)
        {
            count1++;
        }
    }
    count2=count+count1;
    if(count2==n)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}