#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;

int main() {

	int makeOne[1000001], n, tmp;

	cin >> n;

	makeOne[0] = 0;  makeOne[1] = 0;

	for (int i = 2; i <= n; i++) {
		makeOne[i] = makeOne[i - 1] + 1;
		if (i % 2 == 0) {
			tmp = makeOne[i / 2] + 1;
			if (tmp < makeOne[i]) makeOne[i] = tmp;
		}
		if (i % 3 == 0) {
			tmp = makeOne[i / 3] + 1;
			if (tmp < makeOne[i]) makeOne[i] = tmp;
		}
	}

	cout << makeOne[n];

	return 0;
}