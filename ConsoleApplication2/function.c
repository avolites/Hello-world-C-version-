#include<windows.h>
/* This function is used to change characters color in the console */
/* 
	0 = Black       8 = Gray
	1 = Blue        9 = Light Blue
	2 = Green       A = Light Green
	3 = Aqua        B = Light Aqua
	4 = Red         C = Light Red
	5 = Purple      D = Light Purple
	6 = Yellow      E = Light Yellow
	7 = White       F = Bright White
*/
void color(const unsigned short i)
{
	if (i >= 0 && i <= 15)
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), i);
	else
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
}

/* This function is used to change text's color randomly */
void change_col(void)
{
	color((unsigned short)rand() % 15);
}