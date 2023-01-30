using namespace std;
#include <iostream>

int main() {
	int n = 0;
	cin >> n;
	int* arr = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
	cout << "\n";
	int k = 0;
	cin >> k;
	int minSum = INT_MAX;;
	int idxStart = 0;
	int idxEnd = 0;
	for (int i = 0; i < n - k + 1; i++) {
		int currentSum = 0;
		for (int j = i; j < i + k; j++) {
			currentSum += arr[j];
		}
		if (currentSum < minSum) {
			idxStart = i;
			idxEnd = i + k - 1;
			minSum = currentSum;
		}
	}
	for (int i = idxStart; i <= idxEnd; i++) {
		cout << arr[i] << " ";
	}
	return 0;
}