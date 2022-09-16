#include <stdio.h>
#include <math.h>

int main() {
	float r, l, h, s1, s2, v;    // радиус, длина ребра, высота конуса, площадь боковой пов-ти, площадь полной пов-ти и объем куба
	const float PI = 3.141;    // число Пи

	printf("Input radius: ");
	scanf_s("%f", &r);

	printf("Input lenght: ");
	scanf_s("%f", &l);

	printf("Input height: ");
	scanf_s("%f", &h);

	if (r <= 0 || l <= 0 || h <= 0) {    // проверка введенных данных
		printf("Invalid data entered");
		return 0;
	}

	s1 = PI * r * l;
	s2 = s1 + (PI * r * r);
	v = (PI * r * r * h) / 3;

	printf("Square sides = %.3f\n", s1);
	printf("Full square = %.3f\n", s2);
	printf("Volume = %.3f\n", v);
	return 0;
}