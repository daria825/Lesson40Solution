#include "logic.h"

string get_number_order(int n, int m) {
	string result = to_string(n);

	int d = n < m ? 1 : -1;


	for (int i = n + 1; i <= m; i++) {
		result += " " + to_string(i);
	}


	if (n < m) {
		for (int i = n + 1; i <= m; i++) {
			result += " " + to_string(i);
		}
	}
	else {
		for (int i = n - 1; i >= m; i--)
		{
			result += " " + to_string(i);
		}
	}

	return result;
}