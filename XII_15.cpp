#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> v = { 5, 2, 8, 3, 1, 9 };

    auto maxIt = max_element(v.begin(), v.end());
    iter_swap(v.begin(), maxIt);

    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    return 0;
}