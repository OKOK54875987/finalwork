#include <stdio.h>
#include <stdlib.h>

int main(void)

{

	int month;
	printf("請輸入月份:");
	scanf_s("%d", &month);

	switch (month)
	{

	case 3:

	case 4:

	case 5:

		puts("這個月份是春天");

		break;

	case 6:

	case 7:

	case 8:

		puts("這個月份是夏天"); break;

	case 9:

	case 10:

	case 11:

		puts("這個月份是秋天");

		break;

	case 12:

	case 1:

	case 2:

		puts("這個月份是冬天");

		break;

	default:

		puts("你輸入的月份不存在! \a");
		break;

	}
	system("pause");
	return (0);
}
