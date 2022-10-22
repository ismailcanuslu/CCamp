#include <stdio.h>
#include <stdlib.h>

int main(void) {
	// && = ve || = yada

	int x = 14;
	int y = 11;

	printf("%d", x > 20 && y > 10);
	printf("\n%d", x > 20 || y > 10);
	printf("\n%d", !(x > 20 && y > 10));
}
