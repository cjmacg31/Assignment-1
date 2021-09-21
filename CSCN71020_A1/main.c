#include <stdio.h>

void printWelcomeMenu();
void printOptions();
void add();
void subtract();


void main() {

	printWelcomeMenu();

	printOptions();

	int inputNum;

	printf("Enter operation number: ");
	scanf_s("%1o", &inputNum);

	switch (inputNum)
	{
	case 1:
		add();
		return 0;    //returns 0 after case is ran
	case 2:
		subtract();
		return 0;
	}

}

void printWelcomeMenu() {
	printf(" **********************\n");
	printf("**   Welcome to the   **\n");
	printf("**   BCS Calculator   **\n");
	printf(" **********************\n");
}

void printOptions() {
	printf("1. Add\n");
	printf("2. Subtract\n");
}

void add() {
	double num1, num2, result;
	printf("Enter the first value:");
	scanf_s("%lf", &num1);  //input num1
	printf("Enter the second value:");
	scanf_s("%lf", &num2);  //input num2
	result = num1 + num2;  //calculations for num1 + num2
	printf("%lf + %lf = %lf\n", num1, num2, result);  //final product statement

}

void subtract() {

	float num1, num2, result;

	printf("Enter the first value: ");
	scanf_s("%1f", &num1);    //input for num1
	printf("Enter the second value: ");
	scanf_s("%1f", &num2);   //input for num2

	result = num1 - num2;   //subtract calulation

	printf("%.2f - %.2f = %.2f\n", num1, num2, result);  //final product statement

}