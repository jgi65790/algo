#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int c;
	int n;
	scanf("%d", &c, sizeof(c));

	for (int i = 0; i < c; i++) {
		int sum = 0;
		double avg = 0;
		int a = 0;
		scanf("%d", &n);
		int* arr = new int[n];
		for (int j = 0; j < n; j++) {
			scanf("%d", &arr[j]);
			sum += arr[j];
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

