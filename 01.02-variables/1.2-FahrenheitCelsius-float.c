#include <stdio.h>
/* =(5/9)( -32)*/
int main()
{
	float fahrenheit, celsius;
	float lower, upper, step;

	lower = 0;
	upper = 300;
	step = 20;

	fahrenheit = lower;
	while(fahrenheit < upper)
	{
		celsius = 5*(fahrenheit-32)/9;
		printf("%3.0f\t%4.1f\n", fahrenheit, celsius);		
		fahrenheit = fahrenheit + step;
	}	

}