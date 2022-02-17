#include <iostream>
using namespace std;

void SwapRef(int &a, int &b)
{
	a = a + b;
	b = a - b;
	a = a - b;
}

void SwapPoint(int* a, int* b)
{
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
}

int KeyInput()
{
	int input;
	cin >> input;

	return input;
}

void BeforeSwap(int a, int b)
{
	cout << "\n" << "BeforeSwap swap: " << "\n";
	cout << "Value A is: " << a << "\n";
	cout << "Value B is: " << b << "\n";
}

void AfterSwap(int a, int b)
{
	cout << "\n" << "AfterSwap swap: " << "\n";
	cout << "Value A is: " << a << "\n";
	cout << "Value B is: " << b << "\n\n";
}

void Run()
{
	cout << "Pick your numbers! \n\n";

	cout << "Enter number A: ";
	int a = KeyInput();

	cout << "Enter number B: ";
	int b = KeyInput();

	cout << "\n" << "Choose your swap method: \n";
	cout << "1. STL \n";
	cout << "2. Reference \n";
	cout << "3. Pointer \n";

	switch (KeyInput())
	{
		case 1:
		{
			BeforeSwap(a, b);
			swap(a, b);
			break;
		}
		case 2:
		{
			BeforeSwap(a, b);
			SwapRef(a, b);
			break;
		}
		case 3:
		{
			BeforeSwap(a, b);
			SwapPoint(&a, &b);
			break;
		}

	}

	AfterSwap(a, b);
}

bool Restart()
{
	cout << "1. Restart \n";
	cout << "2. Exit \n";

	switch (KeyInput())
	{
		bool restart;

		case 1:
		{
			cout << "\n";
			return restart = true;
		}
		case 2:
		{
			cout << "\n";
			return restart = false;
		}
		default:
		{
			cout << "\n";
			Restart();
		}
	}
}

int main()
{
	bool updating = true;

	cout << "Swap" << "\n\n";

	while (updating)
	{
		Run();
		updating = Restart();
	}

	return 0;
}
