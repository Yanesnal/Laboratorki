#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	int k;
	cout << "Vvedite razmer massiva:";
	cin >> k;
	char* array = new char[k];
	cout << "Vvedite " << k << "simvolov cherez probel";
	for (int i = 0; i < k; i++)
	{
		cin >> array[i];
	}
	bool symmetr = 1;

	for (int i = 0; i < k / 2; i++)
	{
		if (array[i] != array[k - 1 - i])
		{
			symmetr = 0;
			break;
		}
	}

	if (symmetr)
	{
		cout << "Symmetrichen";
	}
	else
	{
		cout << "Ne symmetrichen";
	}

	delete[] array;

	return 0;
}