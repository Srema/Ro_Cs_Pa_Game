#pragma once
#include <stdio.h>

//   1:����       2:����      3:��

int Rule(int Player1, int Player2) {

	if (Player1 == 1) {			//����

		if (Player2 == 2) {		//����
			printf(" Player2 Win \n");
		}
		else if (Player2 == 3) {//��

			printf(" Player1 Win \n");

		}
	}

	else if (Player1 == 2) {	//����

		if (Player2 == 1) {		//����
			printf(" Player1 Win \n");
		}

		else if (Player2 == 3) {//��

			printf(" Player2 Win \n");

		}
	}

	else if (Player1 ==3) {		//��

		if (Player2 == 1) {		//����
			
			printf(" Player2 Win \n");

		}

		else if (Player2 == 2){	//����

			printf(" Player1 Win \n");

		}
	}
	return 0;
}
