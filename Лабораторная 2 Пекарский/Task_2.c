#include <stdio.h>
#include <math.h>

int main() {
	unsigned long long n, d = 0, f = 1;    // ��������� �����, ������� ����� � ���������

	printf("Enter number: ");
	scanf_s("%llu", &n);

	if (n <= 0) {    // �������� ��������� ������
		printf("Invalid data entered");
		return 0;
	}

	for (int i = 1; i <= n; i++) {
		d += f *= i;
	}

	printf("Received value = %llu \n", d);
	return 0;
}