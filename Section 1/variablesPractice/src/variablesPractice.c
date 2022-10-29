#include <stdio.h>
#include <stdlib.h>

void ustunu_a(int x,int y, int *r){
	*r = 1;
	for(int i = 0;i<y;i++){
			*r = *r * x;
		}
}
int ustunu_al(int x, int y){
	int sonuc = 1;
	for(int i = 0;i<y;i++){
		sonuc = sonuc*x;
	}
	return sonuc;
}
int main(void) {
	printf("%d",ustunu_al(4, 5));
	int x=4,y=5,sonuc;
	ustunu_a(x,y,&sonuc);
	printf("%d",sonuc);

	return 0;

}
