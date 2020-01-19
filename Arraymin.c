#include<stdio.h>
int main()
{
	int i,n,arr[100],min,max,count=1,c=1;
	printf("Enter the Size of Array:\t");
	scanf("%d",&n);
	printf("Enter %d Element:\n",n);
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
	min=arr[0];
	max=arr[0];
	for(i=0;i<n;i++)
	{
		if(arr[i]<min)
		{
			min=arr[i];
			c=c+1;
		}
	}
	for(i=0;i<n;i++)
	{
		if(arr[i]>max)
		{
			max=arr[i];
			count=count+1;
		}
	}
	printf("\nLoop Executed:%d",i);
	printf("\nMinimum element is:%d\t",min);
	printf("\nNo of Comparsion :%d\t",c);
	printf("\nMaximum element is:%d\t",max);
	printf("\nNo of Comparsion %d:\t",count);
	return 0;
}
