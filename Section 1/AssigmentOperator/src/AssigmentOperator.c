#include <stdio.h>
#include <stdlib.h>

int main() {

	int x = 10;
	x += 5;
	printf("%d", x);

	x -= 3;
	printf("\n%d", x);

	x *= 6;
	printf("\n%d", x);

	x /= 2;
	printf("\n%d", x);

	x %= 3;
	printf("\n%d", x);
}
