#include<stdio.h>
#include<stdlib.h>
#define SIZE 10

void main()
{
	int i, j, temp, x = 1, a[SIZE] = { 7,6,9,1,10,3,8,5,2,4 };

	for (i = 0; i < SIZE - 1; i++) {

		x = 0;

		for (j = 0; j < SIZE - i - 1; j++) {

			if (a[j] > a[j + 1]) {

				temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
				x = 1;

			}
		}

		if (x == 0) {

			j = SIZE - 1;

		}
		else {

			printf("Loop %d :", i + 1);

			for (j = 0; j < SIZE; j++) {

				printf("%3d", a[j]);

			}

			printf("\n");

		}
	}

	system("pause");
	return 0;
}