#include <iostream>
using namespace std;
int main() {
    double n;
    double sum,sred;
    char ch;
    int check = 0;
    int k=0;
    int f=0; //кол-во значений в массиве, превышающие sred
    cin >> n;
    double arr[10];
    while (cin && k<10 && n>=0){
        arr[k]=n;
        ++k;
        if(k<10)
        {

            cout << "Следующая сумма пожертвований ";
            cin >> n;
        }
    }
    for(int i=0;i<n;i++){
        sum+=arr[k];
        }
    sred=sum/check;
    for(int i=0;i<n;i++){
        if(arr[i]>sred){
            f++;
        }
    }
    cout<< "Среднее значение:" << sred << " "<< "Кол-во чисел, превыщающих среднее:"<< f;

}
