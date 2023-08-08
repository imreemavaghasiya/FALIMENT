#include<stdio.h>
#include<string.h>

main()
{
	char usarname[100];
	int password[100];
	printf("Enter Usarname = ");
	gets(usarname);
	printf("Enter Password = ");
	gets(password);
	
	if(strcmp(usarname,"REEMA") == 0)
	{
		if(strcmp(password,"88888") == 0)
		{
			printf("\n Successfully Log in....");
		}
		else
		{
			printf("\nPassword Wrong");
		}
	}
	else
	{
		printf("\n Usarname and Password Wrong");
	}
	
}
