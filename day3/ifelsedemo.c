#include <stdio.h>
int main(){
	int op1, op2, result;
	char opr;
	scanf("%d %c %d", &op1, &opr, &op2);
	
		if (opr == '+')
			result = op1 + op2; 
		else if (opr == '-')
			result = op1 - op2; 
		else if (opr == '*' || opr == 'x' || opr =='X' )
			result = op1 * op2; 
		else if (opr == '/'){
			printf("%d %c %d = %g", op1, opr, op2, op1/ (float)op2);
			return 0;// Terminate the application		
		}
		else if (opr == '%')
			result = op1 % op2; 
		else{
			printf("Invalid operation!");
			return 0;	
		}
	printf("%d %c %d = %d", op1, opr, op2, result);
	return 0;
}