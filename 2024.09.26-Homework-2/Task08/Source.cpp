#include<cstdio>

int main(int argc, char* argv[])
{
	int a = 0;
	int b = 0;

	scanf_s("%d", &a);
	scanf_s("%d", &b);

	int p = (a + 1) * b + (b + 1) * a;
	int s = a + b;
	if (a == 1 || b == 1)
	{
		printf("%d", a * b * 4);
	}
	else if (a % 2 == 0 || b % 2 == 0)
	{
		printf("%d", p + s);
	}
	else
	{
		printf("%d", p + s - 2);
	}

	return 0;
}