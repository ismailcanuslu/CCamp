#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
	char dizim[] = "Can Boz";

	dizim[0] = 'H';

	printf("%s",dizim);

	printf("\nKarakter dizimizin boyu %d",strlen(dizim));

	//strlen gerçek karakter sayısını alır
	//sizeof c programlama mantıgında olan
	//char dizisinin sonundaki \0 ı da alır
	//strlenden bir fazla sonuç verir.

	printf("\nKarakter dizimizin boyu %d",sizeof(dizim));
	return 0;
}
