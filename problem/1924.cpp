#include <iostream>
#include <string>
using namespace std;

int main() {

	int n, i, j, day[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
	cin >> i >> j;
	n = 0;
	for (int k = 1; k < i; k++) {
		n += day[k];
	}
	n += j - 1;

	n %= 7;

	switch (n) {
	case 0: cout << "MON" << endl;
		break;
	case 1:cout << "TUE" << endl;
		break;
	case 2:cout << "WED" << endl;
		break;
	case 3:cout << "THU" << endl;
		break;
	case 4:cout << "FRI" << endl;
		break;
	case 5:cout << "SAT" << endl;
		break;
	case 6:cout << "SUN" << endl;
		break;
	default: break;
	}
}