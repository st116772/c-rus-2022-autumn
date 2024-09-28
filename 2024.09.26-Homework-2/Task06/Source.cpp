#include<cstdio>
#include<cmath>

int main(int argc, char* argv[])
{
	long long a = 0;
	long long b = 0;
	long long c = 0;

	scanf_s("%lld", &a);
	scanf_s("%lld", &b);
	scanf_s("%lld", &c);

	double d = b * b - 4 * a * c;
	double x1 = 0;
	double x2 = 0;
	if (a == 0)
	{
		if (b == 0)
		{
			if (c == 0)
			{
				printf("-1");
			}
			else
			{
				printf("0");
			}
		}
		else
		{
			x1 = -c / (double)b;
			printf("1\n%.6f", x1);
		}
	}
	else if (d > 0)
	{
		x1 = (-b + sqrt(d)) / (double)(2 * a);
		x2 = (-b - sqrt(d)) / (double)(2 * a);
		printf("2\n%.6f\n%.6f", x1, x2);
	}
	else if (d == 0)
	{
		x1 = -b / (2 * (double)a);
		printf("1\n%.6f", x1);
	}
	else if (d < 0)
	{
		printf("0");
	}

	return 0;
}