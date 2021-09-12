#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int x;
	scanf("%d", &x);
	while (true)
	{
		while (x>19)
		{
			while (x>49)
			{
				while (x > 79)
				{
					x = x * 15;
					printf("%d", x);
					exit(0);
				}
				x = x * 20;
				printf("%d", x);
				exit(0);
			}
			x = x * 25;
			printf("%d", x);
			exit(0);
		}
		x = x * 30;
		printf("%d", x);
		exit(0);
	}
}
