#include<cstdio>

int main(int argc, char* argv[])
{
	int a = 0;

	scanf_s("%d", &a);


	switch (a % 5)
	{
	case 0:
		printf("%d %d", a / 5, 0);
		break;
	case 1:
		printf("%d %d", a / 5 - 1, 2);
		break;
	case 2:
		printf("%d %d", a / 5 - 2, 4);
		break;
	case 3:
		printf("%d %d", a / 5, 1);
		break;
	case 4:
		printf("%d %d", a / 5 - 1, 3);
		break;
	}

	return 0;
}