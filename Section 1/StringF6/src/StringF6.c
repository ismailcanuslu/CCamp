#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char name[30];
	printf("Lufen isminizi giriniz\n");
	//gets(name);
	fgets(name,sizeof(name),stdin);
	printf("%s",name);
}
