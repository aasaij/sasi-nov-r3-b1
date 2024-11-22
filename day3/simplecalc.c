//Program to implement simple calculator
/* input:
90 + 35 
output
90 + 35 = 125
*/
#include <stdio.h>
int main(){
	int op1, op2, result;
	char opr;
	scanf("%d %c %d", &op1, &opr, &op2);
	switch(opr){
		case '+': // if (opr == '+')
			result = op1 + op2; break;
		case '-': // if (opr == '+')
			result = op1 - op2; break;
		case '*': case 'x': case 'X':  // if (opr == '+')
			result = op1 * op2; break;
		case '/': // if (opr == '+')
			printf("%d %c %d = %g", op1, opr, op2, op1/ (float)op2);
			return 0;// Terminate the application		
		case '%': // if (opr == '+')
			result = op1 % op2; break;
		default:
			printf("Invalid operation!");
			return 0;	
	}
	printf("%d %c %d = %d", op1, opr, op2, result);
	return 0;
}