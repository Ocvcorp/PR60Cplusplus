#include <iostream>
using namespace std;
void f(int b) {
	if (b == 0) throw 5;
	if (b < 0) throw 5.0;
	if (b = 'A') throw "hhh";
}
int main() {

	int a, b;
	while (1) 
	{
		cout << "input a, b: ";
		cin >> a >> b;
		try {
			f(b);
			cout << "The result: " << a / b << endl;
			}
			catch (int n) { cout << "Zero value. "  << n << endl; }
			catch (double n) { cout << "Negative value. " << n << endl; }
			catch (...) { cout << "Other type exception " << endl; }
	}
	system("pause");
	return 0;
 }
