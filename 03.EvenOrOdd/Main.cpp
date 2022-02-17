#include <iostream>
using namespace std;

string CheckLastDigit(int value)
{
	if (value % 2 == 0)
	{
		return " is even.";
	}
	else
		return " is odd.";
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

	cout << "\n" << number << CheckLastDigit(number) << "\n\n";
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

	cout << "Even Or Odd" << "\n\n";

	while (updating)
	{
		Run();
		updating = Restart();
	}

	return 0;
}
