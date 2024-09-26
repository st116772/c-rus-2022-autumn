#include<cstdio>

int main(int argc, char* argv[])
{
	int a1 = 0;
	int b1 = 0;
	int a2 = 0;
	int b2 = 0;

	scanf_s("%d", &a1);
	scanf_s("%d", &b1);
	scanf_s("%d", &a2);
	scanf_s("%d", &b2);

	int a = a1 - a2;
	int b = b1 - b2;
	if (a == 0 || b == 0 || a * a == b * b)
	{
		printf("YES");
	}
	else
	{
		printf("NO");
	}

	return 0;
}