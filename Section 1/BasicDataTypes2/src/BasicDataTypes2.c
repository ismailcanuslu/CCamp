#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char myChar = 'A';
	printf("%c",myChar);

	int sayi;
	printf("\nSayı giriniz.");
	scanf("%d",&sayi);
	// & = adres anlamına gelir.
	printf("Aldığımız sayı: %d",sayi);

	double sayi2;
	printf("\nOndalıklı Sayı giriniz.");
		scanf("%lf",&sayi2);
		// & = adres anlamına gelir.
		printf("Aldığımız sayı: %lf",sayi2);

	char typeChar;
	printf("Char karakter girin.");
	scanf("\n%c",&typeChar);
	printf("Alınan char: %c", typeChar);

}
