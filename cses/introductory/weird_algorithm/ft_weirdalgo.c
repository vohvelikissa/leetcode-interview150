#include <stdio.h>

int weird_algo(long long int number) {
	printf("%lld\n",number);
	if (number != 1) {
		if (number % 2 == 0) {
			weird_algo(number/2);
		} else {
			weird_algo(3*number+1);
		}
	}
	return 1;
}

int main() {
	weird_algo(999999999);
}
