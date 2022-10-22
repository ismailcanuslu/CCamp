#include <stdio.h>
#include <stdlib.h>

int main() {

	int sayi1;
	float sayi2;
	char input;

	printf("bir tam sayı girin.");
	scanf("\n%d", &sayi1);

	printf("\nbir ondalıklı sayı girin.");
	scanf("\n%f", &sayi2);

	printf("\nİsminizin baş harfini girin.");
	scanf("\n%c", &input);

	printf("\n%d \n%f \n%c", sayi1, sayi2, input);
	//&inputlarda kullanırsın. outputlarda kullanılmaz!
}
