//1 --> It's Monday. Concentrate on studies
//2,3,4 --> Still it's week day only
//5 -> It's Friday. Get ready for week-end
//6,7 --> Enjoy the week-end
//else
//	Invalid day number
#include <stdio.h>

int main(){
	int day;
	scanf("%d", &day);
	switch(day){
		case 1:
			printf("It's Monday. Concentrate on studies\n");break;
		case 2 ... 4:
			printf("Still it's week day only\n"); break;
		case 5:
			printf("It's Friday. Get ready for week-end\n"); break;
		case 6: case 7:
			printf("Enjoy the week-end\n"); break;
		default:
			printf("Invalid day number!\n");
	}
	return 10,20,30;
}