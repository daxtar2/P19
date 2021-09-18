#include<stdio.h>

int main(void)
{
	int shen;
	int bshen;
	for (shen = 1; shen <= 9; shen++) {
		for (bshen = 1; bshen <= 9; bshen++) {

			printf("%d*%d = %d\t", shen, bshen, shen * bshen);
		}
		printf("\n");
	}
	return 0;
}