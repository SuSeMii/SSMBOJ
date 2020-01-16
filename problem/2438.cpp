#include <iostream>
#include <string>
using namespace std;

int main() {

	int n, i, j, tmp;
	cin >> n;
	for (i = 1; i <= n; i++) {
		for (j = 0; j < i; j++)
			cout << "*";
		cout << endl;
	}

}