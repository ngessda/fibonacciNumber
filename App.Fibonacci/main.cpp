#include <iostream>

int Fib(int value)
{
	if (value < 1)
	{
		return 0;
	}
	if (value == 1)
	{
		return 1;
	}
	return Fib(value - 1) + Fib(value - 2);
}

void main()
{
	using namespace std;
	int number;
	cout << "Number: ";
	cin >> number;
	if (number >= 3)
	{
		cout << "Answer: " << Fib(number) << endl;
	}
	else
	{
		cout << " ERROR" << endl;
	}
}