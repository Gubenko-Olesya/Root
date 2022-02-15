//programma vichislyaet koren uravneniua na otrezke s tochnostiu eps
#include<stdio.h>
#include"my_f.h"
#define eps 0.0001

int main()  //Gubenko Olesya 112
{
	double a, b, c;
	int i=0, err=0;
	printf("Input a, b in section [a, b].\n");
	scanf("%lf%lf", &a, &b);
	c = root(fun, a, b, eps, &i, &err);
	if (err==1)
		printf ("Same sign error.\n");
	else
		printf ("Number of iterations: %d.\nRoot is: %lf.\n\n", i, c);
	return 0;
}

