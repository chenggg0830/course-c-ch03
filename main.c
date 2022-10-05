#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	int score=0; 
	
	printf("請輸入分數：");
	scanf("%d", &score);
	
	switch(score/10){
		case 10:
		case 9:
			printf("A");
			break;
		case 8:
			printf("B");
			break;
		case 7:
			printf("C");
			break;
		case 6:
			printf("D");
			break;
		case 5:
	    case 4:
		case 3:
		case 2:
		case 1:
		case 0:
			printf("E");
			break;
		default:
			printf("輸入錯誤"); 
	}
	
	return 0;
}
