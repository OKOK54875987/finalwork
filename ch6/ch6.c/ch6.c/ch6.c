#include <stdio.h> 
#include <stdlib.h>

void main(void)
{
	typedef struct _sPerson
	{
		char name[8];
		int gender;
		int age;
	} Person;
	Person P;

	printf("Please input your name: ");
	scanf_s("%s", &P.name);
	printf("Please input your gender (0 for woman, 1 for man): ");
	scanf_s("%d", &P.gender);
	printf("Please input your age: ");
	scanf_s("%d", &P.age);
	printf("\nHi! %s.", P.name);
	if (P.gender == 0)
		printf("You are a %d-yaer-old woman. \n", P.age);
	else
		printf("you are a %d -year-old man. \n", P.age);

	system("pause");


}
