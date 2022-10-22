#include <stdio.h>
#include <stdlib.h>

int main(void) {
	/*
	 * int (4 bytes) |
	 * printf type : %d
	 *
	 * double (8 bytes) |
	 * printf type : %lf
	 *
	 * float (4 bytes) |
	 * printf type : %f
	 *
	 * char (1 byte) |
	 * printf type : %c
	 */

	 int number = 15,number3 = 11;
	 int number2 =16;
	 printf("%d\n%d\n%d",number,number2,number3);
	 /*
	  * syntax diff java!
	  *
	  */

	 float num1 = 5.65;
	 printf("\n%.3f",num1);
	 // %.2f virgülden sonra 2 basamak çıkartır.
	 // base olarak .6 dır
	 double pi = 3.14;

	 printf("\n%.2lf",pi);
}
