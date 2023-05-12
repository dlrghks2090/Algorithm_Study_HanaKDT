// 백준_실버3_DP_9095번_1,2,3 더하기 문제

#include<iostream>

using namespace std;

int main() {

	int T;
	int n;
	int arr[11] = { 0, };

	cin >> T;

	arr[1] = 1;
	arr[2] = 2;
	arr[3] = 4;


	for (int i = 0; i < T; i++) {
		cin >> n;

		if (n == 1 || n == 2 || n == 3) {
			cout << arr[n] << endl;
		}
		else {
			for (int j = 4; j <= n; j++) {
				arr[j] = arr[j - 1] + arr[j - 2] + arr[j - 3];
			}
			cout << arr[n] << endl;
		}

	}



	return 0;
}
