#include<iostream>

using namespace std;
int const Max = 10;

int main()
{
    double average;
    double arr[Max];
    int i = 0; // кол-во пожертвований
    int quantity=0; //кол-во пожертвований превышающих среднее
    double sum; // сумма пожертвований
    while ((cin >> arr[i])) {
        i++;
        if (i>=10) break;
    }
    for(int j=0; j<i;j++){
        sum+=arr[j];
    }
    average = sum/i;
    for (int k = 0; k<i; k++)
    {
        if (arr[k] > average)
            quantity++;

    }
    cout << "Среднее значение: " << average << " "<< "Кол-во первышающих среднее:" << quantity<< endl;
}


