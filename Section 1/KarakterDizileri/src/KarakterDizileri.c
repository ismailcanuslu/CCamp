#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char can[]={'c','a','n','a','n','\0'};

	char dizim[]="canan";
	char kullanici[100];

	printf("%s",dizim);

	printf("Lutfen bir karakter dizisi giriniz\n");
	scanf("%s",&kullanici);

	printf("\n%s",kullanici);

}
