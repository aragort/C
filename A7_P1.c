// -----------------------------------------------------------------
// START DO NOT MODIFY
// -----------------------------------------------------------------

#include <stdio.h>
// computes the greatest common divisor (also known as the greatest common factor)

int gcd(int x, int y) {
	if (y != 0)
		return gcd(y, x % y);
	else
		return x;
}

int main()
{
	int x, y;
	printf("Enter x: ");
	scanf_s("%d", &x);
	printf("Enter y: ");
	scanf_s("%d", &y);

	int n1 = gcd(x, y);
	printf("The greatest common divisor of %d and %d is %d.", x, y, gcd(x, y));
}
