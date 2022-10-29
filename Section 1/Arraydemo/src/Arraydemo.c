#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int diziismi[10];

	// hafızada n * s byte kadar yer tutar.

	int iso[5]={1,3,5,7,9};
	// dizi 0-1-2-3-4 indis 0 dan başlar.

	printf("%d\n",iso[0]);
	iso[0] = 11;
	printf("%d\n",iso[0]);
	//dizinin elemanlarını sonradan değiştirme
	//hakkım var.


	int test[10];

	int i = 0;

	for(i=0;i<10;i++){
		test[i] = i*2;
		printf("%d\n",test[i]);
	}


}
