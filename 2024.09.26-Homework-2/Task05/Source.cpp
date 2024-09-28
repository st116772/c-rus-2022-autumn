#include<cstdio>

int main(int argc, char* argv[])
{
	int l1 = 0;
	int w1 = 0;
	int h1 = 0;
	int l2 = 0;
	int w2 = 0;
	int h2 = 0;
	int lc = 0;
	int wc = 0;
	int hc = 0;

	scanf_s("%d", &l1);
	scanf_s("%d", &w1);
	scanf_s("%d", &h1);
	scanf_s("%d", &l2);
	scanf_s("%d", &w2);
	scanf_s("%d", &h2);
	scanf_s("%d", &lc);
	scanf_s("%d", &wc);
	scanf_s("%d", &hc);

	if (l1 > lc)
	{
		l1 += w1;
		w1 = l1 - w1;
		l1 -= w1;
	}
	if (w1 > lc)
	{
		l1 += w1;
		w1 = l1 - w1;
		l1 -= w1;
	}
	if (l2 > lc)
	{
		l2 += w2;
		w2 = l2 - w2;
		l2 -= w2;
	}
	if (w2 > lc)
	{
		l2 += w2;
		w2 = l2 - w2;
		l2 -= w2;
	}

	bool hf = (h1 > h2 ? h1 : h2) <= hc;
	printf("%d\n",hf);
	bool lf = (l1 > l2 ? l1 : l2) <= lc;
	printf("%d\n",lf);
	bool wf = (w1 > w2 ? w1 : w2) <= wc;
	printf("%d\n",wf);
	bool lls = (l1 + l2) <= lc;
	printf("%d\n",lls);
	bool lws = (w1 + w2) <= lc;
	printf("%d\n",lws);
	bool lwswf = (l1 > l2 ? l1 : l2) <= wc;
	printf("%d\n",lwswf);
	bool llw = (l1 + w2) <= lc;
	printf("%d\n",llw);
	bool llwwf = (w1 > l2 ? w1 : l2) <= wc;
	printf("%d\n",llwwf);
	bool lwl = (l2 + w1) <= lc;
	printf("%d\n",lwl);
	bool lwlwf = (l1 > w2 ? l1 : w2) <= wc;
	printf("%d\n",lwlwf);
	bool wls = (l1 + l2) <= wc;
	printf("%d\n",wls);
	bool wlslf = (w1 > w2 ? w1 : w2) <= lc;
	printf("%d\n",wlslf);
	bool wws = (w1 + w2) <= wc;
	printf("%d\n",wws);
	bool wlw = (l1 + w2) <= wc;
	printf("%d\n",wlw);
	bool wlwlf = (w1 > l2 ? w1 : l2) <= lc;
	printf("%d\n",wlwlf);
	bool wwl = (l2 + w1) <= wc;
	printf("%d\n",wwl);
	bool wwllf = (l1 > w2 ? l1 : w2) <= lc;
	printf("%d\n",wwllf);
	if (((h1 + h2) <= hc && lf && wf) || (hf && ((lls && wf) || (lws && lwswf) || (llw && llwwf) || (lwl && lwlwf)) || (hf && ((wls && wlslf) || (wws && lf) || (wlw && wlwlf) || (wwl && wwllf)))))
	{
		printf("YES");
	}
	else
	{
		printf("NO");
	}

	return 0;
}