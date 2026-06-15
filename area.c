#include<stdio.h>
#include<math.h>

float squarearea(float side){
	return side * side;
	}
float circlearea(float radius){
	return 3.14 * (pow(radius,2));
	}
float rectanglearea(float length, float breadth){
 	return length * breadth;
	}
int main () {

	float side;
	printf("Enter the side: ");
	scanf("%f", &side);
	printf("The area of square is : %.2f\n", squarearea(side));

	float radius;
	printf("Enter the radius: ");
	scanf("%f", &radius);
	printf("The area of circle is : %.2f\n", circlearea(radius));

	float length, breadth;
	printf("Enter the length: ");
	scanf("%f", &length);
	printf("Enter the breadth: ");
	scanf("%f", &breadth);
	printf("The area of rectangle is: %.2f\n", rectanglearea(length, breadth));
return 0;
}
