#include <stdio.h> 
#include <stdlib.h>

int main(void)
{
	int age;
	char name[8], phone[12];
	FILE *stream; 
	stream=fopen("C://Users/user/OneDrive/�ୱ/�����{���y��/�ɱϧ@�~/�s�W��Ƨ�/ch7/addbook.txt", "r");
	if (stream == NULL)
	{
		printf("�ɮ׶}�ҥ���!\n");
	}
	else
	{
		printf("�m�W	�q��		�~��\n");
		printf(" ---------------------\n");
		while ((fscanf(stream, "%s %s %d", name, phone, &age)) != EOF)
			printf("%s %-11s %4d\n", name, phone, age);
		fclose(stream);

	}

	system("pause");
	return 0;
}