#include <stdio.h>

double getFirstNumber() {
	double number1;
	printf("Enter the first number of your calculation: ");
	scanf("%lf", &number1);
	return number1;
}

char getOperation() {
	char operationString[2];
	int isAsking = 1;
	while (isAsking == 1) {
		printf("Enter the operation you would like to use: ");
		scanf("%s", &operationString);
		if (strlen(operationString) > 1) {
			printf("Please enter a valid operation\n");
			continue;
		}
		else {
			if (operationString[0] == '-' || operationString[0] == '+' || operationString[0] == '/' || operationString[0] == '*') {
				isAsking = 0;
			}
			else {
				printf("Please enter a valid operation\n");
			}
		}
		
		
	}
	return operationString[0];
}

double getSecondNumber() {
	double number2;
	printf("Enter the second number of your calculation: ");
	scanf("%lf", &number2);
	return number2;
}

double calculate(double firstNumber, char operation, double secondNumber) {
	double answer;

	if (operation == '+') {
		answer = firstNumber + secondNumber;
		return answer;
	}
	else if (operation == '-') {
		answer = firstNumber - secondNumber;
		return answer;
	}
	else if (operation == '*') {
		answer = firstNumber * secondNumber;
		return answer;
	}
	else if (operation == '/') {
		answer = firstNumber - secondNumber;
		return answer;
	} 
	return -1;
}

int main() {
	double finalAnswer;

	double num1 = getFirstNumber();
	printf("%lf\n", num1);
	char op = getOperation();
	printf("%c\n", op);
	double num2 = getSecondNumber();
	printf("%lf %c %lf\n", num1, op, num2);

	finalAnswer = calculate(num1, op, num2);
	printf("%lf %c %lf = %lf", num1, op, num2, finalAnswer);
}