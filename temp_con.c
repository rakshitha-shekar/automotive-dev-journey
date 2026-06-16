#include <stdio.h>
float temp_conversion(float celsius) {
	return ((celsius * (9.0/5.0)) + 32);
}
int main () {
	float celsius;
	printf("Enter the Celsius value c: ");
	scanf("%f", &celsius);
	printf("The conversion of %f Celsius to Fahrenheit is : %.2f\n", celsius, temp_conversion(celsius)); 
	return 0;
}
