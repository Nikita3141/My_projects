#include <iostream>
using namespace std;

int Fill_array(double *array, int size) {
    int i=0;
    while (cin >> array[i]) {
        if(i<=size) {
            i++;
        } else break;
    }
return i;
}
double Reverse_array(double *array, int size) {
    int reverse=0;
    for(int j=0;j<size/2;j++)
    {
        reverse=array[j+1];
        array[j+1]=array[size-1-j-1];
        array[size-1-j-1]=reverse;
    }
    }

double Show_array(double *array, int size) {
    for (int i = 0;i<size;i++){
        cout<< array[i]<< " ";
    }
}

int main() {
    int size=10;
    double *array=new double[size];
    Fill_array(array,size);
    Reverse_array(array,size);
    Show_array(array,size);
    return 0;
}
