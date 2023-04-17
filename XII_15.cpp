#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	vector <int> v = { 0,515,-124,220,23543,-12543 };
	auto iter = max_element(v.begin(), v.end());
	iter_swap(v.begin(), iter);
	for (int i = 0; i < v.size(); i++) {
		cout << v[i]<< '\t';
	}
	setlocale(0, " ");
	return 0;
}
