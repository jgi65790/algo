#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int c;
	scanf_s("%d", &c, sizeof(c));

	int n;

	for (int i = 0; i < c; i++) {
		scanf("%d", &n);
		int* arr = new int[n];
		for (int j = 0; j < n; j++) {
			scanf("%d", &arr[j]);
		}
		int sum = 0;
		double avg = 0;
		int a = 0;
		for (int k = 0; k < n; k++) {
			sum += arr[k];
		}

		avg = (double)sum / n;
		for (int m = 0; m < n; m++) {
			if (arr[m] > avg) {
				a++;
			}
		}
		double output = (double)a / n * 100;
		printf("%.3f%%\n", output);
	}

	return 0;
}

