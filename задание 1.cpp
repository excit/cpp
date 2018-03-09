// задание 1.cpp: определяет точку входа для консольного приложения.
//

#include <stdio.h> 
#include "stdafx.h"
#include <iostream> 

int main()
{
	int a;

	scanf_s("%f", &a);
	if (a > 0)  printf("positive");
	else if (a == 0) printf("zero");
	else printf("negative");

	system("pause");
	return 0;

}
