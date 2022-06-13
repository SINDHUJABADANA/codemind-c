#include<stdio.h>
int main()
{
    int n,max,A,B,arr[100],i,v=0;
    scanf("%d",&n);
    //int arr[100],i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d%d",&A,&B);
    max=arr[0];
    for(i=0;i<n;i++)
    {
        if(arr[i]<A || arr[i]>B)
        {
            if(max<arr[i])
            {
                max=arr[i];
                v++;
            }
        }
    }
    if(v==0)
    {
        printf("-1");
    }
    else
    {
        printf("%d",max);
    }
}