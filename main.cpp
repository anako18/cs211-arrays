#include <iostream>
#include <cassert>
#include "arrays.h"

using namespace std;

int main() {

	//tasks 1-4
	task_1();
	task_2();
	assert(!task_3_zero());
	task_4();

	//task_5_copy
	int s = 5;
	int a[5]{ 1, 2, 3, 4, 5 };
	int * b = new int[s];
	task_5_copy(a, b, s);
	for (int i = 0; i < s; i++)
		assert(a[i] == b[i]);

	//task_6_poor_copy
	int *c = new int[s];
	task_6_poor_copy(b, c, s);
	for (int i = 0; i < s; i++)
		assert(b[i] == c[i]);

	//task_7_print
	task_7_print(c, s);
	cout << endl;



}