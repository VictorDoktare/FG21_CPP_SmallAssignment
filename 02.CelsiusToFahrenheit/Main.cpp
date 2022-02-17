#include <iostream>
using namespace std;

float ConvertToCelsius(float value)
{
	return value * 9 / 5 + 32;
}

float KeyInput()
{
	float input;
	cin >> input;

	return input;
}

void Run()
{

	cout << "Enter fahrenheit:  ";

	float celsius = KeyInput();

	cout << "\n" << celsius << " degrees Celsius is " << ConvertToCelsius(celsius) << " Fahrenheit " << "\n\n";
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

	cout << "Celsius To Fahrenheit" << "\n\n";

	while (updating)
	{
		Run();
		updating = Restart();
	}

	return 0;
}
