#include <stdio.h>
#include <stdlib.h>
#include "insurance.h"


double	kook_output(long long income)
{
	double result;

	result = income;
	result = result * 4.5;
	return (result / 100);
}

double	gun_output(long long income)
{
	double result;

	result = income;
	result = result * 3.495;
	return (result / 100);
}

double	jang_output(long long income)
{
	double result;

	result = income;
	result = ((gun_output(income)) * 12.27);
	return (result / 100);
}

double	go_output(long long income)
{
	double	result;

	result = income;
	result = (result * 0.09);
	return (result / 100);
}

double	all_output(long long income)
{
	double	result;

	result = 0;
	result += kook_output(income);
	result += gun_output(income);
	result += jang_output(income);
	result += go_output(income);
	return (result);
}
