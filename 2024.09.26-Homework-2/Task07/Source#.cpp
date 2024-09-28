#include<cstdio>

int main(int argc, char* argv[])
{
	long long k = 0;
	long long m = 0;
	long long n = 0;

	scanf_s("%lld", &k);
	scanf_s("%lld", &m);
	scanf_s("%lld", &n);


	if (n % k == 0)
	{
		printf("%d", (n / k) * 2 * m);
	}
	else if ((n % k) <= (k / 2) && (n / k) > 0)
	{
		printf("%d", (n / k + 1) * 2 * m - m);
	}
	else
	{
		printf("%d", (n / k + 1) * 2 * m);
	}

	return 0;
}