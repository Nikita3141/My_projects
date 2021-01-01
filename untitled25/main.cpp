
#include<iostream>

using namespace std;
int const Max = 10;

int main()
{
    double arr[Max];
    int i = 0; // счетчик
    int kol=0;
    double sum;
    while ((cin >> arr[i])) { // если cin используется как часть проверочного условия, он преобр в bool. в данном случае оно равно тру пока вводятся числовые значения, т.е. принимается в счет ar[i] типа double, одновременно это выражение вставляет в массив значение введенное пользователем
        i++;
    }
    for(int j=0; j<i;j++){
        sum+=arr[j];
    }
    double sred = sum/i;
    for (int k = 0; k<i; k++)
    {
        if (arr[k] > sred)
            kol++;

    }
    cout << "Среднее значение: " << sred << " "<< "Кол-во первышающих среднее:" << kol<< endl;
}
