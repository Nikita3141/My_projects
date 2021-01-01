


#include <fstream>
#include <iostream>
#include <vector>
#include <stdint.h>
#include <cmath>
using namespace std;
double submain(int n,int dot) {
    double* koef_arr = new double[n];
    for (int i = n; i >= 0; i--) {
        cout << "Enter Koeff. of x in " << i << " Power" << endl;
        cin >> koef_arr[n - i];
    }
    double sum=0.000000;
    for (int i = 0; i <= n; i++) {
        sum+=pow(dot, (n - i))* koef_arr[i];
    }
    delete[] koef_arr;
    koef_arr = nullptr;
    return sum;
}
int main() {
    /*
          int n;
          cout << "Enter the number of dots.\n";
          cin >> n;
          point* arr = new point[n];
          for (int i = 0; i < n; i++) {
              cin >> arr[i].x >> arr[i].y;
          }

          if (IsConvex(arr, n)) std::cout << "Yes." << std::endl;
          else std::cout << "No!" << std::endl;
      delete[] arr;
      */
    int dot;
    cout << "Enter the point\n";
    cin >> dot;
    int power_x;
    cout << "Power of polinominal\n";
    cin >> power_x;
    cout << "Value of the polinominal at a point " << dot << " Equals to " << submain(power_x, dot) << endl;
    return 0;
}