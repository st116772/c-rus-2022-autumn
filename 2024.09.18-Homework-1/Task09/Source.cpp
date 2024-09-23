#include<iostream>

int main(int argc, char* argv[])
{
	int h = 0;
	int a = 0;
	int b = 0;

	scanf_s("%d", &h);
	scanf_s("%d", &a);
	scanf_s("%d", &b);

	int c = a - b;
	int d = (c - h % c) % c;
	h += d;
	int e = (h - a) * (h / a - (h - a) / a);
	d = (c - e % c) % c;
	e += d;
	printf("%d", 1 + e / c);

	return EXIT_SUCCESS;
}
