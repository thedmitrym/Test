#include "task1.h"
#include "conio.h"
#include "stdio.h"


void main()
{
	printf("What is your age?\n");
	int age;
	scanf_s("%d", &age);
	if (ageCheck(age))
	{
		printf("Access granted");
	}
	else
	{
		printf("Access denied");
	}

	_getch();
}


