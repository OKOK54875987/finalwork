#include <stdio.h>
#include <stdlib.h>

int main(void)

{

	int month;
	printf("�п�J���:");
	scanf_s("%d", &month);

	switch (month)
	{

	case 3:

	case 4:

	case 5:

		puts("�o�Ӥ���O�K��");

		break;

	case 6:

	case 7:

	case 8:

		puts("�o�Ӥ���O�L��"); break;

	case 9:

	case 10:

	case 11:

		puts("�o�Ӥ���O���");

		break;

	case 12:

	case 1:

	case 2:

		puts("�o�Ӥ���O�V��");

		break;

	default:

		puts("�A��J��������s�b! \a");
		break;

	}
	system("pause");
	return (0);
}
