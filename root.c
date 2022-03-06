//programma vichislyaet koren na otrezke metodom hord s tochnostiu eps
//Gubenko Olesya 112
#include<stdio.h>
#define eps 0.01


double fabs(double a, double b) {
	if ((a-b)>0)
		return a-b;
	else
		return b-a;
}



double root(double (*fun)(double x), double a, double b, int *err)
{
	double c, f_a, f_b, f_c;
	f_a=fun(a);
	f_b=fun(b);
	*err=0;
	if(f_a*f_b>0)				//proveryaem chto functiua imeet razniue znaki na kontsah otrezka
	{					//i vozvrashaem oshibku, esli znak odinakoviy
		*err=1;
		return -1;
	}
	while(fabs(a,b)>eps) {
		c = a-(f_a*(b-a))/(f_b-f_a); 		//stroim hordu, ishem tochku peresecheniya s osiu abciss
		f_c=fun(c);				//vichislyaem znacheniye v tochke
		if (fabs(f_c,0))
			break;
		if (f_c*f_b<0) {			//pereopredelyaem kontsy otrezka takim obrazom, chtobi na kontsah znacheniua fun imeli razniye znaki
			a=c;
			f_a=fun(a);
		}
		else {
			b=c;
			f_b=fun(b);
		}
	}
	return c;
}


