#include <algorithm>
#include <iostream>
using namespace std;

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

bool CheckArithmetic(int arr[], int n)
{
	if (n == 1)
		return true;

	sort(arr, arr + n);

	int d = arr[1] - arr[0];

	for (int i = 2; i < n; i++)
	{
		if (arr[i] - arr[i - 1] != d)
		{
			return false;
		}
	}

	return true;
}

void Run()
{
	cout << "Insert list of numbers (separated by , ) \n";

	int arr[100];



	int n = sizeof(arr) / sizeof(arr[0]);

	(CheckArithmetic(arr, n)) ? (cout << "Yes" << endl) : (cout << "No" << endl);
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

	cout << "Arithmetic Progression!" << "\n\n";

	while (updating)
	{
		Run();
		updating = Restart();
	}

	return 0;
}


