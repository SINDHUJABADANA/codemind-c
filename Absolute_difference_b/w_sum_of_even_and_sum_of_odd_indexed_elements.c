#include<stdio.h>
int main()
{
    int n,es=0,os=0,sub=0;
    scanf("%d",&n);
    int arr[n],i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(i%2==0)
        {
            es=es+arr[i];
        }
        if(i%2!=0)
        {
            os=os+arr[i];
        }
    }
    if(es>os)
    {
        sub=sub+es-os;
    }
    else
    {
        sub=sub+os-es;
    }
    printf("%d",sub);
}