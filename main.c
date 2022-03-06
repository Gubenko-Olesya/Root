//programma vichislyaet koren uravneniua na otrezke s tochnostiu eps
#include<stdio.h>
#include"my_f.h"
#define eps 0.0001

int main()  //Gubenko Olesya 112
{
	double a, b, c;
	int i=0, err;
	printf("Programma vichislyaet koren uravneniua na otrezke s tochnostiu eps metodom hord.\n");
	printf("Input a, b in section [a, b].\n");
	if (scanf("%lf%lf", &a, &b)!=2) {
		printf("At least one of the ends is not a number, please, try again.\n");
		return -1;
	}
	c = root(fun, a, b, &err);
	if (err==1) {
		printf ("Same sign error.\n");
		return -1;
	}
	else
		printf ("Root is: %lf.\n", c);
	return 0;
}

