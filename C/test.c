
#include<string.h>
#include<stdio.h>

int main()
{
	char dz[63] = { "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz" };
	char s[1024];
	while (gets(s)!='0')
	{
		int a[11] = { 0 };
		int b[26] = { 0 };
		int c[26] = { 0 };


		int len = strlen(s);
		for (int i = 0; i < len; i++)
		{
			if (s[i] >= '0' && s[i] <= '9')
			{
				int t1 = s[i] - '0';
				a[t1]++;
			}
			else if (s[i] >= 'A' && s[i] <= 'Z')
			{
				int t2 = s[i] - 'A';
				b[t2]++;
			}
			else if (s[i] >= 'a' && s[i] <= 'z')
			{
				int t3 = s[i] - 'a';
				c[t3]++;
			}
		}


		for (int i = 0; i < 11; i++)
		{
			while (a[i] != 0)
			{
				printf("%c", dz[i]);
				a[i]--;
			}
		}
		for (int i = 0; i < 26; i++)
		{
			while (b[i] != 0)
			{

				printf("%c", dz[i + 10]);

				b[i]--;
			}
		}
		for (int i = 0; i < 26; i++)
		{
			while (c[i] != 0)
			{
				printf("%c", dz[i + 36]);
				c[i]--;
			}
		}

	}
	

	return 0;
}