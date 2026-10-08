#include "test.h"


void test(int n, int m, string expected, string test_name) {
	string actual = get_number_order(n, m);
	string msg = test_name + " --> ";
	msg += actual == expected ? "PASS" : "FAIL";
	cout << msg << endl;

}

void run_all_test() {
	test(1, 5, "1 2 3 4 5", "test01");
	test(7, 1, "7 6 5 4 3 2 1", "test02");
	test(9, 9, "9", "test03");
	test(-3, 2, "-3 -2 -1 0 1 2", "test04");
	test(2, -3, "2 1 0 -1 -2 -3", "test05");	
}


