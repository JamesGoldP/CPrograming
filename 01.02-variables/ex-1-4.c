#include <stdio.h>
/* =(5/9)( -32)*/
float fahrenheit2celsius(float fahrenheit)
{
	float celsius;

	printf("Fahrenheit\tCelsius\n");
	celsius = 5*(fahrenheit-32)/9;
	printf("%3.0f\t%4.1f\n", fahrenheit, celsius);	
	return 0;	
}

int main()
{
	fahrenheit2celsius(20.0);
}
