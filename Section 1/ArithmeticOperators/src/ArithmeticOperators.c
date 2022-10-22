#include <stdio.h>
#include <stdlib.h>

int main() {
	int x = 15;
	int y = 10;

	printf("%d", x + y);

	int x1 = 11;
	int y1 = 19;
	int sonuc = x1 + y1;
	int carp = x1 * y1;

	printf("\n%d", sonuc);
	printf("\n%d", carp);

	int mod = x % y;
	printf("\n%d",mod);
}
