#include <stdio.h>
#include <stdlib.h>

int main() {
	int x;
	int y;

	printf("Lütfen bir sayı giriniz.");
	scanf("%d", &x);

	printf("Lütfen ikinci bir sayı giriniz");
	scanf("%d", &y);

	if (x > y) {
		printf("%d sayısı % d sayısından daha büyük", x, y);
	}

	else if (x < y) {
		printf("%d sayısı % d sayısından daha küçük", x, y);
	}

	else if (x == y) {
		printf("%d sayısı % d sayısına eşit", x, y);
	}
}
