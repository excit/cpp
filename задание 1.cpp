// ������� 1.cpp: ���������� ����� ����� ��� ����������� ����������.
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
