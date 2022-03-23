#include <iostream>
using namespace std;

int main()
{
	int a;
	int b;
	cin >> a;
	cin >> b;
	cout << (a + b) * (a + b) + (a - b) * (a - b) - 3 * a * b << endl;
	return 0;
}
