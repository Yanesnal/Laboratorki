#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
int main()
{
	double a, b, h, x, y, s, p;
	int n, i;
	cout << "Vvedite a,b,n" << endl;
	cin >> a >> b >> n;
	h = (b - a) / 10;
	x = a;
	do
	{
		p = s = x;
		for (i = 1; i <= n; i++)
		{
			p *= pow(x, 2) * pow(-1, i) / (2 * i + 1);
			s += p;
		}
		y = atan(x);
		cout << setw(15) << x << setw(15) << y << setw(15) << s << endl;
		x += h;
	} while (x <= b + h / 2);
	cout << endl;
	return 0;
}