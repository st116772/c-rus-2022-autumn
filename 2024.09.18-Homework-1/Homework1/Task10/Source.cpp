#include<iostream>

int main(int argc, char* argv[])
{
	int a = 0;

	scanf_s("%d", &a);

	int b = a / 3;
	printf("%d %d %d", b / 2, b * 2, b / 2);

	return EXIT_SUCCESS;
}