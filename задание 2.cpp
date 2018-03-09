// задание 2.cpp: определяет точку входа для консольного приложения.
//

#include <stdio.h> 
#include "stdafx.h"
#include <iostream> 

int main()
{
	int a;

	scanf_s("%f", &a);
	if (a % 3 == 0)  printf("delitsa na tri");
	else printf("ne delitsa");

	system("pause");
	return 0;

}

