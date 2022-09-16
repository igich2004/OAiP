#include <stdio.h>
#include <math.h>

int main() {
	float s1, s2;    // площади круга и квадрата

	printf("Input radius of the circle: ");
	scanf_s("%f", &s1);

	printf("Input radius of the square: ");
	scanf_s("%f", &s2);

	if (s1 <= 0 || s2 <= 0) {    // проверка введенных данных
		printf("Invalid data entered");
		return 0;
	}

	float a, d; // длина стороны квадрата и длина окружности круга 

	a = sqrt(s2);
	d = 2 * sqrt(s1 / 3.141);

	if (d < a)
		printf("Circle can fit in a square\n");
	else printf("Circle can't fit in the square\n");

	if (a < d)
		printf("Square can fit in a circle\n");
	else printf("Square can't fit in a circle\n");
	return 0;
}