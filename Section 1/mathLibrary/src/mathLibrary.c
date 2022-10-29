#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) {
	/*
	 * ceil floor sqrt pow abs
	 */

	printf("%f\n", ceil(4.8));
	//ceil = bir üstteki sayıya yuvarla
	//4.3 == 5 ya da 4.6 == 5 gibi

	printf("%f\n", floor(4.8));

	//floor = bir alttaki sayıya yuvarla
	// 4.3 == 4 , 4.9 == 4 gibi

	printf("%f\n", sqrt(144));

	//sqrt = karekök alma fonksiyonu


	printf("%f\n", sqrt(103));

	//sayı tam sayı olmak zorunda değil.

	printf("%f\n", pow(3,5));

	//pow kuvvet alır

	printf("%d\n", abs(-33));

	// abs mutlak deger alir.
	// ancak sadece tamsayi ile %d ile çalışır.


}
