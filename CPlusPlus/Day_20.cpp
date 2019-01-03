#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	/* Enter your code here. Read input from STDIN. Print output to STDOUT */

	vector <int> a;

	int n;
	int entry;
	
	cin >> n;

	for (int i = 1; i <= n; i++)
	{
		cin >> entry;
		a.push_back(entry);
	}

	// Track number of elements swapped during a single array traversal
	int numberOfSwaps = 0;

	for (int i = 0; i < n; i++) {
		

		for (int j = 0; j < n - 1; j++) {
			// Swap adjacent elements if they are in decreasing order
			if (a[j] > a[j + 1]) {
				swap(a[j], a[j + 1]);
				numberOfSwaps++;
			}
		}

		// If no elements were swapped during a traversal, array is sorted
		if (numberOfSwaps == 0) {
			break;
		}
	}

	cout << "Array is sorted in " << numberOfSwaps << " swaps.\n";
	cout << "First  element: " << a[0] << "\n";
	cout << "Last element: " << a[n - 1] << "\n";
	
	return 0;
}