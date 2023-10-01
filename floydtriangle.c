#include<stdio.h>

int main()
{
	int rows = 5;
	int n = 1;
	//int n = 'A';

	for(int i=0; i<rows; i++){

		for(int j=0; j<=i; j++){
			printf("%d ", n++);
			//printf("%c ", n++);
		}

		printf("\n");
	}

	return 0;
}