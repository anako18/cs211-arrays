#include "quick_sort.h"
#include <iostream>
using namespace std;

int main() {

	int a[6]{ 6, 2, 3, 7, 1, 5 };
	my_qsort(a, 6);
	print(a, 6);
	cout << endl;

	int b[6]{ 1, 5, 6, 2, -1, 3 };
	my_qsort(b, 6);
	print(b, 6);
	cout << endl;

}