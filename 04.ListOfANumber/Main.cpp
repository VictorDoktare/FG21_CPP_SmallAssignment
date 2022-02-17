#include <iostream>
using namespace std;

int FindLastDigit(int value)
{
	return value % 10;
}

float KeyInput()
{
	float input;
	cin >> input;

	return input;
}

void Run()
{

	cout << "Enter an number:  ";

	int number = KeyInput();

	cout << "\n" << "Last digit is: " << FindLastDigit(number) << "\n\n";
}

bool Restart()
{
	cout << "1. Restart \n";
	cout << "2. Exit \n";

	switch (static_cast<int>(KeyInput()))
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

	cout << "Last Digit Of Number" << "\n\n";

	while (updating)
	{
		Run();
		updating = Restart();
	}

	return 0;
}
