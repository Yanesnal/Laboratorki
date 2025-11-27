#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	char op[] = { 'a', 'b', 'c', 'b', 'a' };
	int k = 5;
	bool symmetric = 1;
	for (int i = 0; 1 < k / 2; i++)
	{
		if (op[i] != op[k - 1 - i])
		{
			symmetric = 0;
			break;
		}
	}
	if (symmetric)
	{
		cout << "symmetrichen";
	}
	else
	{
		cout << "Ne symmetrichen";
	}

	return 0;
}