#include <stdio.h>
#include <stdlib.h>
#define PI 3.14

int main() {

	/*
	 * const= constant
	 * constant sabit değer anlamına gelir.
	 * const değerler sabittir.
	 * değişemezler
	 */

	const int number1 = 15;

	/*şimdi number1 hep 15tir.
	yani read only dir.
	not writable istedigini yap.
	*/

	printf("%d\n%f",number1,PI);



}
