#include<cstdio>

int main(int argc, char* argv[])
{
	int a = 0;
	int b = 0;

	scanf_s("%d", &a);
	scanf_s("%d", &b);

	if (a == b)
	{
		printf("%d", a == 1 ? 0 : 2);
	}
	else
	{
		printf("1");
	}

	return 0;
}