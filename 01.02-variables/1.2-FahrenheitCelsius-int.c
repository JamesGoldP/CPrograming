#include <stdio.h>
/* =(5/9)( -32)*/
int main()
{
	int fahrenheit, celsius;
	int lower, upper, step;

	lower = 0;
	upper = 300;
	step = 20;

	fahrenheit = lower;
	while(fahrenheit < upper)
	{
		celsius = 5*(fahrenheit-32)/9;
		printf("%3d\t%3d\n", fahrenheit, celsius);		
		fahrenheit = fahrenheit + step;
	}	

}