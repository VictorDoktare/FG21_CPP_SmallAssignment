#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

string KeyInput()
{
	string input;
	cin >> input;

	return input;
}

void SwapRef(char& a, char& b)
{
	a = a + b;
	b = a - b;
	a = a - b;
}

void Reverse(string& str)
{
	int n = str.length();

	for (int i = 0; i < n / 2; i++)
	{
		SwapRef(str[i], str[n - i - 1]);
	}
}

void Run()
{
	cout << "Enter a word \n";

	string str = KeyInput();
	Reverse(str);
	cout << str << "\n\n";
}

bool Restart()
{
	cout << "1. Restart \n";
	cout << "2. Exit \n";

	switch (stoi(KeyInput()))
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

	cout << "Arithmetic Progression!" << "\n\n";

	while (updating)
	{
		Run();
		updating = Restart();
	}

	return 0;
}



