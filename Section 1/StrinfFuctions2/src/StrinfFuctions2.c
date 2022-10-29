#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {

	int sonuc;
	char can[15] = "abcdef";
	char canan[15] = "ABCDEF";

	sonuc = strncmp(can, canan,4);

	//strcmp den farkı ilk x terimi karşılaştır demesi.

	if (sonuc < 0) {
		printf("Can Canandan daha kucuktur");
	} else if (sonuc > 0) {
		printf("Can Canandan daha buyuktur");
	} else {
		printf("esittirler.");
	}
}
