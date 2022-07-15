#include <stdio.h>

int getFirstNumber() {
	double number1;
	printf("Enter the first number of your calculation: ");
	scanf("%lf", &number1);
	numErrorCheck(number1);
	return number1;
}

char getOperation() {
	char opr;
	printf("Enter the operation you would like to use: ");
	scanf(" %c", &opr);
	return opr;
}

int getSecondNumber() {
	double number2;
	printf("Enter the second number of your calculation: ");
	scanf("%lf", &number2);
	return number2;
}

int calculation(double firstNumber, char operation, double secondNumber) {
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
}

int numErrorCheck(num) {
	int error
	if (!isdigit(num)) {
		printf("Please enter a number");
		error = 1;
		
	} else {
		error = 0
	}
	return error;
}

int 

int main() {
	double finalAnswer;

	double num1 = getFirstNumber();
	char op = getOperation();
	double num2 = getSecondNumber();

	finalAnswer = calculation(num1, op, num2);
	printf("%lf %c %lf = %lf", num1, op, num2, finalAnswer);
}