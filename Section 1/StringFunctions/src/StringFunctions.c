#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
	int sonuc;
	char dizim[] = "Can Boz";
	char can[] = "abcdef";
	char canan[] = "{{cdef";

	sonuc = strcmp(can, canan);

	printf("\ndizi büyüklugu karsilastirma %d", sonuc);

	dizim[0] = 'H';

	printf("\n%s", dizim);

	printf("\nKarakter dizimizin boyu %d", strlen(dizim));

	//strlen gerçek karakter sayısını alır
	//sizeof c programlama mantıgında olan
	//char dizisinin sonundaki \0 ı da alır
	//strlenden bir fazla sonuç verir.

	printf("\nKarakter dizimizin boyu %d", sizeof(dizim));

	if (sonuc < 0) {
		printf("Can Canandan daha kucuktur");
	} else if (sonuc > 0) {
		printf("Can Canandan daha buyuktur");
	} else {
		printf("esittirler.");
	}

	return 0;
}
