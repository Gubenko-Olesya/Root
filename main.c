#include<stdio.h>
#include"my_f.h"

int main()
{
	double a, b, c, e;
	int i=0, err=0;
	printf("Input a, b in section [a, b] and epsilon.\n");
	scanf("%lf%lf%lf", &a, &b, &e);
	c = root(fun, a, b, e, &i, &err);
	if (err==1)
		printf ("Same sign error.\n");
	else
		printf ("Number of iterations: %d.\nRoot is: %lf.\n\n", i, c);
	return 0;
}

