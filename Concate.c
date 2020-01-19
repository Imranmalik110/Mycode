#include<stdio.h>
#include<string.h>
int main()
{
	char str1[100],str2[100];
	int i,j;
	printf("Enter the First String:\n");
	gets(str1);
	printf("Enter the Second String:\n");
	gets(str2);
	for(i=0;str1[i]!='\0';++i);
	{	
		for(j=0;str2[j]!='\0';++j,++i)
		{
			str1[i]=str2[j];
		}
		str1[i]='\0';
		printf("\nString after concatenate:%s\n",str1);
		printf("\nLoop will be executed is:%d\t",i);
	}
	return 0;
}
