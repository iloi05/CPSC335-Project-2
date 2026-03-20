#include <iostream>
#include <vector>
#include "min_boats.h"

using namespace std;

int main() {
	vector<int> people1 = {3, 2, 2, 1};
	const int limit1 = 3;
	const int expected1 = 3;

	vector<int> people2 = {3, 5, 3, 4, 2, 2, 1, 4, 1};
	const int limit2 = 5;
	const int expected2 = 5;

    int result1 = min_boats(people1, limit1);
    int result2 = min_boats(people2, limit2);

    cout << "Test Case 1: " << endl;
	cout << "Expected: " << expected1 << endl;
	cout << "Result: " << result1 << endl;
    cout << "Test Case 2: " << endl;
	cout << "Expected: " << expected2 << endl;
	cout << "Result: " << result2 << endl;
	return 0;
}
