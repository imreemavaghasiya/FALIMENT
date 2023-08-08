#include<stdio.h>
#include<string.h>

main()
{
	char a[50],r[50];
	
	printf(" Enter Name = ");
	gets(a);
	strcpy(r,a);
	
	printf("%s",strrev(a));
	
	
	if(strcmp(a,r) == 0)
	{
		printf("\nPalindrom");
	}
	else
	{
		printf("\nNot Palindrom");
	}
}
