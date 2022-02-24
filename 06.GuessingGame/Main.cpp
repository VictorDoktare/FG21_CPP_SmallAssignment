#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int GenerateNumber()
{
	srand(time(0));

	int number;

	for (int i = 0; i < 10; i++)
	{
		number = (rand() % 100) + 1;
	}

	return number;
}

int KeyInput()
{
	int input;
	cin >> input;

	while (cin.fail())
	{
		cout << "Input must be a number" << "\n";
		cin.clear();
		cin.ignore(256, '\n');
		cin >> input;
	}

	return input;
}

void GuessNumber(int value, int count)
{
	int number = KeyInput();
	count++;

	if (number < value)
	{
		cout << "\nHigher! \n";
		GuessNumber(value, count);
	}
	else if (number > value)
	{
		cout << "\nLower! \n";
		GuessNumber(value, count);
	}
	else
	{
		cout << "\nYou are correct, the number was: " << value << "\n";
		cout << "It took you: " << count << " tries" << "\n\n";
	}
}

void Run()
{
	int guessCount = 0;
	int randomNumber = GenerateNumber();

	cout << "What number am i thinking of? \n";

	GuessNumber(randomNumber, guessCount);
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

	cout << "Guessing Game!" << "\n\n";

	while (updating)
	{
		Run();
		updating = Restart();
	}

	return 0;
}


