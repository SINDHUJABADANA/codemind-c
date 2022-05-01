#include<stdio.h>
int main()
{
    int n,temp,rem,i,j,k,flag=0,arr[100];
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {
        rem=n%10;
        arr[k]=rem;
        n=n/10;
        k++;
    }
    for(i=0;i<k;i++)
    {
        for(j=i+1;j<k;j++)
        {
            if(arr[i]==arr[j])
            {
                flag=1;
            }
        }
    }
    if(flag==0)
    {
        printf("Unique Number");
    }
    else
    {
        printf("Not Unique Number");
    }
}