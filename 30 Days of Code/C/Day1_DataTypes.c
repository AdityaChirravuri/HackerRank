#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int i = 4;
	double d = 4.0;
	char s[] = "HackerRank ";

	// declare 2integer, double, String variables
	int a;
	double h;
	char str[100];

	scanf(" %d %lf\n%[^\n]", &a, &h, str);

	printf("%d\n", i+a);
	printf("%lf\n", d+h);
	strcat(s, str);
	printf("%s", s);

	return 0;
}
