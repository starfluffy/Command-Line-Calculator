#include <stdio.h>

double getFirstNumber() {
	double number1;
	int ask = 1;
	printf("Enter the first number of your calculation: ");
	scanf("%lf", &number1);
	return number1;
}

char getOperation() {
	char opr;
	int asking = 1;
	while (asking == 1) {
		printf("Enter the operation you would like to use: ");
		scanf(" %c", &opr);
		if (opr == '-' || opr == '+' || opr == '/' || opr == '*') {
			asking = 0;
		}
		else {
			printf("Please enter a valid operation\n");
		}
	}
	return opr;
}

double getSecondNumber() {
	double number2;
	printf("Enter the second number of your calculation: ");
	scanf("%lf", &number2);
	return number2;
}

double calculation(double firstNumber, char operation, double secondNumber) {
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

int main() {
	double finalAnswer;

	double num1 = getFirstNumber();
	char op = getOperation();
	double num2 = getSecondNumber();

	finalAnswer = calculation(num1, op, num2);
	printf("%lf %c %lf = %lf", num1, op, num2, finalAnswer);
}