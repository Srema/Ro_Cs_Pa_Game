#pragma once
#include <stdio.h>

//   1:가위       2:바위      3:보

int Rule(int Player1, int Player2) {

	if (Player1 == 1) {			//가위

		if (Player2 == 2) {		//바위
			printf(" Player2 Win \n");
		}
		else if (Player2 == 3) {//보

			printf(" Player1 Win \n");

		}
	}

	else if (Player1 == 2) {	//바위

		if (Player2 == 1) {		//가위
			printf(" Player1 Win \n");
		}

		else if (Player2 == 3) {//보

			printf(" Player2 Win \n");

		}
	}

	else if (Player1 ==3) {		//보

		if (Player2 == 1) {		//가위
			
			printf(" Player2 Win \n");

		}

		else if (Player2 == 2){	//바위

			printf(" Player1 Win \n");

		}
	}
	return 0;
}
