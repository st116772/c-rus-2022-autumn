#include<cstdio>
#include<cmath>

int main(int argc, char* argv[])
{
	int x1 = 0;
	int y1 = 0;
	int r1 = 0;
	int x2 = 0;
	int y2 = 0;
	int r2 = 0;

	scanf_s("%d", &x1);
	scanf_s("%d", &y1);
	scanf_s("%d", &r1);
	scanf_s("%d", &x2);
	scanf_s("%d", &y2);
	scanf_s("%d", &r2);

	int x = x1 - x2;
	int y = y1 - y2;
	if (hypot(x, y) + r1 >= r2 && hypot(x, y) + r2 >= r1 && r1 + r2 >= hypot(x, y))
	{
		printf("YES");
	}
	else
	{
		printf("NO");
	}

	return 0;
}