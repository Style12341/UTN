#include <iostream>

using namespace std;

long sumaN(int x)
{
	if (x == 0)
		return 0;
	if (x % 2 == 0)
		return x + sumaN(x - 2);
	return sumaN(x - 1);
}

int main()
{
	int num;
	cout << "Ingrese un numero" << endl;
	cin >> num;
	cout << sumaN(num) << endl;

	return 0;
}