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
    int lowindex, lowkey1; 
    int i, j;
    for (i = 0; i < n - 1; i++) {
        lowindex = i; 
        lowkey = a[i].surname; 
        lowkey1 = a[i].date;
        for (j = i + 1; j < n; j++) {
            if (a[j].surname < lowkey || a[j].surname == lowkey && a[j].date < lowkey1) {
                lowkey = a[j].surname;
                lowkey1 = a[j].date;
                lowindex = j;
            }
        }
        temp = a[i];
        a[i] = a[lowindex];
        a[lowindex] = temp;
    }
}

void Student::input() {
    in >> surname >> name >> otch >> date >> s1 >> s2 >> s3 >> s4 >> s5;
}

void Student::output() { 
    out << surname << " " << name << " " << otch << " " << date << " " << s1 << " " << s2 << " " << s3 << " " << s4 << " " << s5 << endl; 
}

int main() {
    int n = 0, gr, i;
    in >> gr;
    Student stud[20];
    out << gr << endl;
    for (n = 0; n < 20 && in.peek() != EOF; n++) { 
        stud[n].input(); 
    }
    sort(stud, n);
    out << gr << endl;
    for (i = 0; i < n; i++) {
        stud[i].output();
    }
    in.close();
    out.close();
    system("pause");
    return 0;
}




//251
//Потапова Виктория Демьяновна 1991 3 3 4 3 5
//Данилова София Александровна 1992 4 5 3 4 4
//Гусев Иван Кириллович 1990 5 4 5 4 4
//Чижов Максим Миронович 1988 3 2 3 4 3
//Иванова Мария Данииловна 1992 3 3 2 4 3
//Полякова Мирослава Марковна 1993 2 2 3 3 4
//Дьякова Таисия Никитична 1990 4 5 4 3 4
//Гришин Тимофей Артёмович 1993 3 4 5 5 4
