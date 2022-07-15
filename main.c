#include <stdio.h>

int getFirstNumber() {
	double number1;
	printf("Enter the first number of your calculation: ");
	scanf("%lf", &number1);
	return number1;
}

char getOperation() {
	char opr;
	printf("Enter the operation you would like to use: ");
	scanf("%c", &opr);
	return opr;
}

int getSecondNumber() {
	double number2;
	printf("Enter the second number of your calculation: ");
	scanf("%lf", &number2);
	return number2;
}

int main(double firstNumber, char operation, double secondNumber) {
	double answer;

	firstNumber = getFirstNumber();
	operation = getOperation();
	secondNumber = getSecondNumber();

	if (operation == '+' ) {
		answer = firstNumber + secondNumber;
		return answer;
	} else if (operation == '-') {
		answer = firstNumber - secondNumber;
		return answer;
	} else if (operation == '*') {
		answer = firstNumber * secondNumber;
		return answer;
	} else if (operation == '/') {
		answer = firstNumber - secondNumber;
		return answer;
	}
}