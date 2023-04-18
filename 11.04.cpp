#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
using namespace std;
ifstream in("Input.txt");
ofstream out("Output.txt");
struct Student {
	string surname, name, otch;
	int date, s1, s2, s3, s4, s5;
	void input();
	void output();
};
void sort(Student* a, int n) {
	Student temp;
	string lowkey;
	int lowindex,lowkey1;
	int i, j;
	for (int i = 0; i < n - 1; i++) {
		lowindex = i;
		lowkey = a[i].surname; 
		lowkey1 = a[i].date;
		for (int j = i + 1; j < n; j++) {
			if (a[j].surname < lowkey || a[j].surname == lowkey && a[j].date < lowkey1 || a[j].date == lowkey1) {
				lowkey = a[j].surname;
				lowkey1 = a[j].date;
				lowindex = j;
			}
			temp = a[i];
			a[i] = a[lowindex];
			a[lowindex] = temp;
		}
	}
}

void Student::input() {
	in >> surname >> name >> otch >> date >> s1 >> s2 >> s3 >> s4 >> s5;
}

void Student::output() {
	out << surname << '\t' << name << '\t' << otch << '\t' << date << '\t' << s1 << '\t' << s2 << '\t' << s3 << '\t' << s4 << '\t' << s5 << endl;
}
int main() {
	int n = 0, gr, i;
	Student stud[20];
	if (!in) {
		cout << "error";
	}
	else {
		in >> gr;
		while (in.peek() != EOF)
		{
			stud[n].input();
			n++;
		}
		sort(stud, n);
		out << gr << endl;
		for (i = 0; i < n; i++) {
			stud[i].output();
		}
		in.close();
		out.close();
	}
	system("pause");
	setlocale(0, "");
	return 0;
}
