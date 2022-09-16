#include <stdio.h>
#include <math.h>
#include <limits.h>

int main() {
	float a, k = 1;    // введенное число и число, с которого начинаем поиск числа, большего числа "а" 
	printf("Input value: ");
	scanf_s("%f", &a);

	if (a <= 1 || a >= 3) {    // проверка введенных данных
		printf("Invalid data entered");
		return 0;
	}

	for (int i = 2; i < INT_MAX; i++) {
		k += 1.0 / i;
		if (k > a) {
			printf("A number greater than a = %f \n", k);
			return 0;
		}
	}
}
