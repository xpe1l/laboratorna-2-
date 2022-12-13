
// програма виводить додавання, віднімання, множення, ділення двох чисел

#include <cstdio>;
#include <iostream>;
using namespace std;
int main() {
	double a, b, c, d, e, f;

	cout << "Enter 1 number:";
	cin >> a;
	cout << "Enter 2 number:";
	cin >> b;

	c = a + b;
	d = a - b;
	e = a * b;
	f = a / b;

	cout << c << endl;
	cout << d << endl;
	cout << e << endl;
	cout << f << endl;
}
