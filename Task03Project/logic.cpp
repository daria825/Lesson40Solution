#include "logic.h"

bool is_power_of_two(int number) {
	if (number <= 0) {
		return false;
	}

	while (number >= 2) {
		if (number % 2 != 0) {
			return false;
		}

		number = number / 2;
	}
	
	return true;
}