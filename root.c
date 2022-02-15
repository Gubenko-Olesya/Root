//Gubenko Olesya 112
#include<stdio.h>

double root (double (*fun)(double x), double a, double b, double e, int *i, int *err)
{
	double c;
	if(fun(a)*fun(b)>0) //proveryaem chto functiua imeet razniue znaki na kontsah otrezka
	{
		*err=1;
		return -1;
	}
	while(((a-b)>e)||((b-a)>e))
	{
		c = a-(fun(a)*(b-a))/(fun(b)-fun(a)); //stroim hordu
		*i+=1; //schitaem iteraciu
		a = b;
		b = c;
	}
	return b;
}

