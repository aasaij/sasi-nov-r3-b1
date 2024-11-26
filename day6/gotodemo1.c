//
//
//	statements
//label:
//	.....
//	....
//	goto label;
//	....
//	.....
//	
//	
//	statements
//	.....
//	....
//	goto label;
//	....
//	.....
//label:
//	.....
//	......

#include <stdio.h>

int main(){
	int i = 1;
	printf("Thank you so much for being very silent...");
	start: // label name
		printf("All the best for your placement!\n");
		printf("You are all best software engineers!");
		i++;
		if (i == 10) 
			goto exit;
		goto start;
		exit:
			printf("Thank you so much for being very interactive!");
	return 0;
}