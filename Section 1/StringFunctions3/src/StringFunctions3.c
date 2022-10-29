#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
	char iso[] = "Benim adim ismailcan uslu";
	char canan[100]="";


	strncpy(canan,iso,5);

	printf("%s",canan);

	//strncopy vs.. n li bir işlem varsa boşta olsa karakter ata
	//c dilinin aptallıgı yüzünden bug oluyor

	return 0;
}
