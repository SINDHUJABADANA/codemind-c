#include<stdio.h>
int search(int *arr,int n,int a)
{
int i;
	for(i=0;i<n;i++)
	{
		if(arr[i]==a)
		{
			return 1;
		}
	}
	return 0;
}
int main()
{
	int n;
	scanf("%d",&n);
	int arr[n],i;
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	int a;
	scanf("%d",&a);
	if(search(arr,n,a))
	{
		printf("True");
	}
	else
	{
		printf("False");
	}
}