#include <iostream>
using namespace std;

const int n = 5;//объявление размера матрицы, n-константа

void sort(int matrix[][n], int column) {
    for (int i = 0; i < column; i++) {
        if (i % 2 == 0) { // сортировка по возрастанию
            for (int j = 1; j < n; j++) {
                int key = matrix[j][i];//задание матрицы
                int k = j - 1;
                while (k >= 0 && matrix[k][i] > key) {//условие сортировки и проверка на четность
                    matrix[k + 1][i] = matrix[k][i];//меняем больший элемент на меньший
                    k--;
                }
                matrix[k + 1][i] = key;
            }
        }
        else { // по убыванию
            for (int j = 1; j < n; j++) {
                int key = matrix[j][i];
                int k = j - 1;
                while (k >= 0 && matrix[k][i] < key) {
                    matrix[k + 1][i] = matrix[k][i];//меняем меньший элемент на больший
                    k--;
                }
                matrix[k + 1][i] = key;
            }
        }
    }
}

int main() {

    int matrix[n][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }
    cout << endl;
    sort(matrix, n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }



	setlocale(0, " ");
	return 0;
}