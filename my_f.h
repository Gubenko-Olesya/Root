//Gubenko Olesya 112
double root (double (*fun)(double x), double a, double b, int *err);

double fun(double x)
{
	return 2*x*x*x + 5*x*x - 8*x + 13;
}
