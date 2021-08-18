#include <stdio.h>
int main() {
	int sumOddNumber = 0;
	int sumEvenNnumber = 0;
	for (int i = 30; i >= 30 && i <= 50; ++i) {
		int oddNumber = ((i % 2 == 0) ? 0 : i);
		sumOddNumber += oddNumber;
		printf("%d", sumOddNumber);
	}
	return 0;
}
