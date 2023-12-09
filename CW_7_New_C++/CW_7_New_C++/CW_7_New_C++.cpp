#include <iostream>

using namespace std;

void exchangeNumber(int* a, int* b) {
	int tempNumb = *a;
	*a = *b;
	*b = tempNumb;
}

void addOne(int* a) {
	*a += 1;
}

void checkToEven(int* a) {
	if (*a % 2) {
		cout << "This number is even!" << endl;
	}
	else {
		cout << "This number is even!" << endl;
	}
}

void numberToPow(int* a) {
	*a = pow(*a, 2);
}

void numbersOfProduct(int* a, int* b, int* c) {
	*c = *a * *b;
}

void checkDivisor(int* a, int* b) {
	int i = *a - 1;
	while (true)
	{
		if (*a % i == 0) {
			*b = i;
			break;
		}
		else
		{
			i--;
		}
	}
}

void numberOfFibonachi(int* a) {
	int numb1 = 0;
	int numb2 = 1;

	while (numb2 < *a) {
		int temp = numb2;
		numb2 = numb2 + numb1;
		numb1 = temp;
	}
	if (*a == numb2) {
		cout << "This number is Fibonachi number" << endl;
	}
	else {
		cout << "This number isn`t Fibonachi number" << endl;
	}
}

void reversedNumber(int* a, int* b) {
	int reversed = 0;
	while (*a != 0) {
		reversed = reversed * 10 + *a % 10;
		*a /= 10;
	}
	*b = reversed;
}

int main()
{
	// Task One

	int numbOne = 30;
	int numbTwo = 26;
	cout << "A = " << numbOne << "; B = " << numbTwo << endl;
	exchangeNumber(&numbOne, &numbTwo);
	cout << "A = " << numbOne << "; B = " << numbTwo << endl;

	// Task Two

	int taskTwo = 11;
	cout << "A = " << taskTwo << endl;
	addOne(&taskTwo);
	cout << "A = " << taskTwo << endl;

	// Task Three

	int taskThree;
	cout << "Enter the number: ";
	cin >> taskThree;
	checkToEven(&taskThree);

	// Task Four

	int taskFour = 12;
	numberToPow(&taskFour);
	cout << "Pow fo number = " << taskFour << endl;

	// Task Five

	int numbThree = 14;
	int numbFour = 11;
	int product;
	numbersOfProduct(&numbThree, &numbFour, &product);
	cout << numbThree << " * " << numbFour << " = " << product << endl;

	// Task Six

	int taskSix = 20;
	int numbDivisor;
	checkDivisor(&taskSix, &numbDivisor);
	cout << "Divisor of " << taskSix << " is " << numbDivisor << endl;

	// Task Seven

	int taskSeven = 9;
	numberOfFibonachi(&taskSeven);

	// Task Eight

	int taskEight = 236786;
	int numbTaskEight = taskEight;
	int reversedNumb;
	reversedNumber(&taskEight, &reversedNumb);
	cout << "Reversed number to number: " << numbTaskEight << " is " << reversedNumb << endl;
}