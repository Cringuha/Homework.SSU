//stack
#include <iostream>
#include <stack>
using namespace std;
int main() {
    stack<int> numbers;
    int n;
    cout << "enter n";
    cin >> n;
    for (int i = 0; i < n; i++) {
        numbers.push(n);
    }

    // max element
    int max = numbers.top();
    while (!numbers.empty()) {
        if (numbers.top() > max) {
            max = numbers.top();
        }
        numbers.pop();
    }
    cout << "Максимальный элемент: " << max << std::endl;

    // deleting max elements
    stack<int> newNumbers;
    while (!numbers.empty()) {
        if (numbers.top() != max) {
            newNumbers.push(numbers.top());
        }
        numbers.pop();
    }
    numbers = newNumbers;

    // out new stack
    cout << "Список без максимального элемента: ";
    while (!numbers.empty()) {
        cout << numbers.top() << " ";
        numbers.pop();
    }
    cout << endl;
    system("pause");
    return 0;
}

//list
#include <iostream>
#include <list>
using namespace std;
int main() {
    list<int> numbers;
    int n;
    cout << "enter n ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        numbers.push_back(num);
    }

    // finding max element
    int max = *max_element(numbers.begin(), numbers.end());
    cout << "max element: " << max << endl;

    // deleting max element
    numbers.remove(max);

    // out new list
    cout << "list without max element: ";
    for (int num : numbers) {
        cout << num << " ";
    }
    cout << std::endl;

    return 0;
}

//queue
#include <iostream>
#include <queue>
using namespace std;

int main() {
    queue<int> numbers;
    int n;
    cout << "enter n: ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        numbers.push(n);
    }

    // find max element
    int max = numbers.front();
    while (!numbers.empty()) {
        if (numbers.front() > max) {
            max = numbers.front();
        }
        numbers.pop();
    }
     cout << "max element: " << max <<  endl;

    // deleting max elements
     queue<int> newNumbers;
    for (int i = 0; i < n; i++) {
        int num = n;
        if (num != max) {
            newNumbers.push(num);
        }
    }
    numbers = newNumbers;

    // out new queue
     cout << "queue without max element: ";
    while (!numbers.empty()) {
        cout << numbers.front() << " ";
        numbers.pop();
    }
    cout <<  endl;

    return 0;
}
