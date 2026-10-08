#include "logic.h"

string get_number_order(int n, int m) {
	if (n == m && n % 2 == 0) {
		return " ";
	}

	if (n > m) {
		int t = n;
		n = m;
		m = t;
	}
	string result = to_string(m % 2 == 0 ? m-- : m);

	for (int i = m - 2; i >= n; i -= 2)
	{
		result += " " + to_string(i);
	}

	//cout << result << endl;

	return result;
}