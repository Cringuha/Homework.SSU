//stack
#include <iostream>
#include <stack>
#include <algorithm>
#include <fstream>
using namespace std;

int main() {
	stack<int> numbers,newNumbers;
	int maxVal=INT_MIN;
	ifstream in("Input.txt");
	ofstream out("Output.txt");
	while (in.peek() != EOF) {
		int num;
		in >> num;
		numbers.push(num);
		maxVal = max(maxVal, num);
	}

	// out new stack
	cout << "stack without max: ";
	while (!numbers.empty()) {
		if (numbers.top() == maxVal) {
			numbers.pop();
		}
		else {
			newNumbers.push(numbers.top());
			numbers.pop();
		}
	}
	while (!newNumbers.empty()) {
		out << newNumbers.top() << ' ';
		newNumbers.pop();
	}
	system("pause");
	return 0;
}


//list
#include <iostream>
#include <list>
#include <algorithm>
#include <fstream>

using namespace std;
int main() {
	list<int> numbers;
	ifstream in("Input.txt");
	ofstream out("Output.txt");
	while (in.peek() != EOF) {
		int num;
		in >> num;
		numbers.push_back(num);
	}

	// finding max element
	int max = *max_element(numbers.begin(), numbers.end());

	// deleting max element
	numbers.remove(max);

	for (int num : numbers) {
		out << num << " ";
	}
	out << endl;
	system("pause");
	return 0;
}


//queue
#include <iostream>
#include <queue>
#include<fstream>

using namespace std;

int main() {
	queue<int> q;
	int maxVal = INT_MIN;
	ifstream in("Input.txt");
	ofstream out("Output.txt");
	while(in.peek()!=EOF) {
		int x;
		in >> x;
		q.push(x);
		if (x > maxVal) {
			maxVal = x;
		}
	}
	int size = q.size();
	for (int i = 0; i < size; i++) {
		int x = q.front();
		q.pop();
		if (x != maxVal) {
			q.push(x);
		}
	}
	while (!q.empty()) {
		out << q.front() << " ";
		q.pop();
	}
	system("pause");
	return 0;
}
