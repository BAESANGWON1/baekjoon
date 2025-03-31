#include <stdio.h>

int main(void)
{
	int i, j = 0, a[9];
	for (i = 0; i < 9; i++) {
		scanf("%d", &a[i]);
	}
	for (i = 1; i <= 8; i++) {
		if (a[i] > a[0]) {
			a[0] = a[i];
			j = i;
		}
	}
	printf("%d\n%d", a[0], j + 1);


	return 0;
}