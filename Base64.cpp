#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
	int len, m, x = 0;
	char str[150] = { '\0' }, ch;
	int a[800] = { 0 };
	while ((ch = getchar()) != '\n')
		str[x++] = ch;
	len = strlen(str);
	for (int i = 0; i < len; i++)
	{
		m = 8 * (i + 1) - 1;
		for (int j = 1; j <= 8; j++)
		{
			int k;
			k = str[i];
			a[m] = k % 2;
			str[i] /= 2;
			m--;
		}
	}
	int q = 0;
	if (len % 3 == 0)
		len = len * 4 / 3;
	else if (len % 3 == 1)
	{
		len = len * 4 / 3 + 1;
		str[len] = '=';
		str[len + 1] = '=';
	}
	else if (len % 3 == 2)
	{
		len = len * 4 / 3 + 1;
		str[len] = '=';
	}
	for (int i = 0; i < len; i++) {

		int l;
		l = 5;
		str[i] = '\0';
		while (l >= 0)
		{
			str[i] += a[q] * pow(2, l);
			q++;
			l--;
		}
		if (str[i] >= 0 && str[i] <= 25)
		{
			str[i] += 65;
		}
		if (str[i] > 25 && str[i] <= 51)
			str[i] += 71;
		if (str[i] > 51 && str[i] <= 61)
			str[i] -= 4;
		if (str[i] == 62)
			str[i] = 43;
		if (str[i] == 63)
			str[i] = 47;
	}
	printf("%s", str);
}
