#include "task3.h"

unsigned long long sumPrime(unsigned int hbound) {
	unsigned long long sum = 0;
	for (int i = 0; i < hbound; i++) {
		if (checkPrime(i)) {
			sum += i;
		}
	}
	return sum;
}