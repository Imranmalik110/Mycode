#include<stdio.h>
int main()
{
	long i,n,fact=1,mul=0;
	printf("Enter the limit:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
		mul=i-1;
	}
	printf("\nLoop Exectued is %d:\t",i);
	printf("\nMultiplication operation is :%d\t",mul);
	printf("\nFactorial of %d =%d\n",n,fact);
	return 0;
}
