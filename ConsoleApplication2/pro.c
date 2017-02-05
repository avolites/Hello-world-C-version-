#include"prototype.h"
#include<stdio.h>
#include<Windows.h>
#include<time.h>
#include<stdlib.h>

int main(void)
{
	system("color 08");
	srand((unsigned int)time(NULL));	//seed
	char str[12] = "Hello World!";
	while (1)
	{
		system("cls");						//DOS console clean screen
		printf("\n\n\n\t\t\t");
		for (int i = 0; i <= 11; ++i)
		{
			change_col();
			putchar(*(str + i));
		}
		putchar('\n');
		Sleep(150);
	}

	return 0;
}