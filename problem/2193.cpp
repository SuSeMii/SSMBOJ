#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;

int main() {

	long long n, i, j, k, sum = 0, bf[91][2] = { 0, };

	// ÃÊ±â
	bf[1][0] = 0;
	bf[1][1] = 1;

	cin >> n;

	for (i = 2; i <= n; i++) {
		bf[i][0] = bf[i - 1][0] + bf[i - 1][1];
		bf[i][1] = bf[i - 1][0];
	}


	sum = bf[n][0] + bf[n][1];

	cout << sum;

	return 0;

}