#include<stdio.h>
#include"my_f.h"

double root (double (*fun)(double x), double a, double b, double e, int *i, int *err)
{
	double c;
	while(((a-b)>e)||((b-a)>e))
	{
		if(fun(a)*fun(b)>0)
		{
			*err+=1;
			return -1;
		}
		c = a-(fun(a)*(b-a))/(fun(b)-fun(a));
		*i+=1;
		a = b;
		b = c;
	}
	return b;
}

