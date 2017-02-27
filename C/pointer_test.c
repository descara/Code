#include <stdio.h>

void main()
{

	int *A, B;
	B = 22;
	
	printf("Address of B: %d\n", &B);
	printf("Value of B: %d\n", B);
	A=&B;
	printf("Address of pointer A:%d\n",A);
    printf("Content of pointer A:%d\n\n",*A);
}