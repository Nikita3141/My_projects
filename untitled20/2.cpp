#include <iostream>
using namespace std;

int main() {
    int max = -1;
    int n=0;
    int min = 999999;
    int num = 0;
    int num1 = 0;
    double change=0;
    cin >> n; // ввод размера массива;
    double arr[n];
    for (int l = 0; l < n; l++) {
        arr[l] = rand() % 1000;

    }
    for (int r = 0; r < n; r++) {
        cout << arr[r] << ' '; // вывод ради того, чтобы потом проверить
    }
    for (int i = 0; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
            num = i;
        }
    }
    for (int k = 0; k < n; k++) {
        if (arr[k] < min) {
            min = arr[k];
            num1 = k;
        }
    }
    change=arr[num];
    arr[num]=arr[num1];
    arr[num1]=change;
    for (int m = 0; m < n; m++) // вывод ради проверки (сменилось или нет)
        cout << arr[m]<< ' ';
}
