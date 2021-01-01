#include <iostream>
#include <cmath>
using namespace std;
double sred() {
    int a=0;
    double new_a=0;
    double final=0;
    int proValue = 1;
    cin >> a;
    new_a =a;

    int arr[a];

    for (int i = 0; i < a; i++) {
        cin >> arr[i];
    }
    for (int k = 0; k < a; ++k) {
        int currentElementValue = arr[k];
        proValue = proValue * currentElementValue;
    }
    final = pow(proValue, (1/new_a));
    return final;
}




int main() {
   cout << sred();
}
