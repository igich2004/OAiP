#include <stdio.h>
#include <math.h>

int main() {
	float dm, km, m, mm, cm;    // введенная длина в дециметрах, километрах, метрах, миллиметрах и сантиметрах 

	printf("Decimeters: ");
	scanf_s("%f", &dm);

	printf("Kilometers: ");
	scanf_s("%f", &km);

	printf("Meters: ");
	scanf_s("%f", &m);

	printf("Millimeters: ");
	scanf_s("%f", &mm);

	printf("Centimeters: ");
	scanf_s("%f", &cm);

	if (dm < 0 || km < 0 || m < 0 || mm < 0 || cm < 0) {    // проверка введенных данных
		printf("Invalid data entered");
		return 0;
	}

	printf("\nDecimeters to meters: %f\n", dm / 10);
	printf("Kilometers to meters: %f\n", km * 1000);
	printf("Meters : %f\n", m);
	printf("Millimeters to meters: %f\n", mm / 1000);
	printf("Centimeters to meters: %f\n", cm / 100);
	return 0;
}