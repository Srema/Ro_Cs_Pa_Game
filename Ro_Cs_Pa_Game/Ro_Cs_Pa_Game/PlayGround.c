#include <stdio.h>
#include "Rule.h"
#pragma once
#pragma warning(disable:4996)

int main() {
	
	int P1;
	int P2;
	int White_B;

	int start;
	
	
	printf("If you want start, press 1  \n");
	scanf_s("%d", &start);

	if (start == 1) {
		
		printf(" Game start \n\n 1. Scissors			2.Rock			3.Paper   \n\n");


		printf("P1 Select \n");
		scanf_s("%d", &P1);

		for (White_B = 0; White_B <= 100; White_B++) {
			printf("�ƢƢƢƢƢƢƢƢƢƢƢƢƢƢƢƢƢƢƢƢƢƢƢƢ�\n");
		}

		printf("P2 Select \n");
		scanf_s("%d", &P2);

		Rule(P1, P2);

	}
	
	system("pause");

	return 0;
}