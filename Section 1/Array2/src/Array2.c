#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int numbers [3];

	for(int i = 0; i<3; i++){
		scanf("%d",&numbers[i]);
	}

	// dizi elemanlarını aldım. depoladım. kullanıcıya geri verdim.

	for(int i = 0; i<3; i++){

			printf("%d\n",numbers[i]);
		}


}
