#include <stdio.h>
#include <math.h>

int main() {
	long long a, b, c;    // ����� ������ �������������� � �������� 
	long long k1 = 0, k2 = 0, k = 0;    // ���-�� ������������ ��������� � ������ (k1), � ����� (k2) � ����� ���-�� ������������ ��������� (k)
	
	printf("Enter values: \n");

	printf("Enter A: ");
	scanf_s("%lli", &a);
	printf("Enter B: ");
	scanf_s("%lli", &b);
	printf("Enter C: ");
	scanf_s("%lli", &c);

	if (a < 0 || b < 0 || c < 0) {    // �������� ��������� ������
		printf("Invalid data entered");
		return 0;
	}

	while (a >= c) {
		a -= c;
		k1++;
	}

	while (b >= c) {
		b -= c;
		k2++;
	}

	if (k1 > k2) {
		for (int i = 0; i < k1; i++)
			k += k2;
	}
	else {
		for (int i = 0; i < k2; i++)
			k += k1;
	}

	printf("Amount of squares in a rectangle = %lli \n", k);
	return 0;
}
