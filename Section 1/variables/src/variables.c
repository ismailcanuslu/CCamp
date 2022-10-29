#include <stdio.h>
#include <stdlib.h>

void kare(int *sonuc, int *can) {
	*sonuc = *can * *can;
	// eğer bu şekil ** tanılama yapılacaksa
	//değişkeni return etmene ve fonksiyon tipini tanılamana gerek yok

}
int main(void) {

	int x = 4, karesi;
	int sonucum;

	kare(&sonucum, &x);

	printf("%d", sonucum);

	return 0;

}
