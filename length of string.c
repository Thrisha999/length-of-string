#include<stdio.h>
#include<string.h>
void main()
{
	char c[100];
	int i,count=0;
	printf("enter something:\n");
	scanf("%[^\n]*s",c);
	printf("%s\n",c);
	for(i=0;c[i]!='\0';i++)
	{
		count++;
	}
	printf("length of the string is %d",count);
}
