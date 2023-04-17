#include <iostream>
#include <vector>
using namespace std;

bool pred(int x){
    return x > 0;
}

int main() {
    vector<int> v = { 5, -2, 8, 3, -1, -9 };
    int newElem;

    cout << "enter new element=";
    cin >> newElem;
    cout << endl;

    auto it = find_if(v.rbegin(), v.rend(), pred).base();
    v.insert(it, newElem);

    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    return 0;
}