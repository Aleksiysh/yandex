#include <iostream>
using namespace std;

int main() {
	int a1, a2, a3, n=0;
	cin >> a1 >> a2;
	cin >> a3;
	while (a3 != 0) {
		if (a2 > a1 && a2 > a3)
			n++;
		a1 = a2;
		a2 = a3;
		cin >> a3;

	}
	cout << n;

	cin.get();
	cin.get();
	return 0;
}