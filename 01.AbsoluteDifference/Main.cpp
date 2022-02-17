#include <iostream>
using namespace std;

int SwapSTL(int value)
{
	//SwapSTL absolute value
	if  (value <= 0)
	{
		return value = (-1) * value;
	}
}

int KeyInput()
{
	int input;
	cin >> input;

	return input;
}

void Run()
{

	cout << "Pick your numbers! \n\n";

	cout << "Enter number A: ";
	int x = KeyInput();

	cout << "Enter number B: ";
	int y = KeyInput();

	cout << "\n" << "Absolute difference of " << x << " & " << y << " is: " << SwapSTL(x-y) << "\n\n";
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

	cout << "Absolute Difference" << "\n\n";

	while (updating)
	{
		Run();
		updating = Restart();
	}

	return 0;
}
