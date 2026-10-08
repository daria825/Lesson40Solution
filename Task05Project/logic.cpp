#include "logic.h"

bool is_digits_count_even(long long number) {
	if (number < 0) {
		number *= -1;
	}
	int count = 0;

	while (number > 0) {
		count++;
		number /= 10;
	}

	return count != 0 && count % 2 == 0;

	return false;
}