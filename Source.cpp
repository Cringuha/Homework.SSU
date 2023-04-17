#include <iostream>
using namespace std;

const int n = 5;//���������� ������� �������, n-���������

void sort(int matrix[][n], int column) {
    for (int i = 0; i < column; i++) {
        if (i % 2 == 0) { // ���������� �� �����������
            for (int j = 1; j < n; j++) {
                int key = matrix[j][i];//������� �������
                int k = j - 1;
                while (k >= 0 && matrix[k][i] > key) {//������� ���������� � �������� �� ��������
                    matrix[k + 1][i] = matrix[k][i];//������ ������� ������� �� �������
                    k--;
                }
                matrix[k + 1][i] = key;
            }
        }
        else { // �� ��������
            for (int j = 1; j < n; j++) {
                int key = matrix[j][i];
                int k = j - 1;
                while (k >= 0 && matrix[k][i] < key) {
                    matrix[k + 1][i] = matrix[k][i];//������ ������� ������� �� �������
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