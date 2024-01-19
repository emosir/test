#include<stdio.h>
#include<math.h>
int f(int m);
int main()
{
	int n,m;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &m);
		if (f(m) == 1)
			printf("Yes\n");
		else printf("No\n");

	}
}
int f(int m)
{
	int a[30] = { 0 }, t, temp;
	t = m;
	int c = 0;
		while (t != 0) {
			a[c] = t % 10;
			t /= 10;
			c++;
		}
	
		int q = 29;
		while (a[q] == 0)
		{
			
			q--;
		}
		temp = q;
	
	int temp1 = 0;
	for (int i = 0; i <= temp; i++)
	{
		temp1 += a[i] * pow(10, temp - i);
	}
	if (temp1 == m)
		return 1;
	else return 0;
}
