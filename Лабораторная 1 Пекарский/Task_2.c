#include <stdio.h>
#include <math.h>

int main() {
	float a, b, c;    // стороны треугольника

	printf("Input A: ");
	scanf_s("%f", &a);

	printf("Input B: ");
	scanf_s("%f", &b);

	printf("Input C: ");
	scanf_s("%f", &c);

	if (a <= 0 || b <= 0 || c <= 0) {    // проверка введенных данных
		printf("Invalid data entered");
		return 0;
	}

	if (a == b && a != c && b != c)
		printf("Isosceles triangle\n");
	else if (b == c && a != b && c != a)
		printf("Isosceles triangle\n");
	else if (a == c && a != b && c != b)
		printf("Isosceles triangle\n");
	else
		printf("Not an isosceles triangle\n");
	return 0;
}