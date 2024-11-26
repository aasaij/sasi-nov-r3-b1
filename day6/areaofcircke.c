//Program to find area of circle
#include <stdio.h>

int main(){
	double radius, area;
	scanf("%lf", &radius);
	area = 22/7.0 * radius * radius;
	printf("%.2lf", area);
	return 0;
}