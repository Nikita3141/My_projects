#include <iostream>
using namespace std;
int main() {
    double income=0;
    double tax=0;
    bool status= true;
    while(status){
        cout<< "Введите свой доход"<<endl;
        while((cin >> income)){
            if(income>=0){
                if (income<=5000){
                    tax=0;
                    cout<< tax<<endl;
                }
                else if(income>5000 && income<=15000){
                    tax=(income-5000)*0.1;
                    cout<< tax<<endl;

                }
                else if(income>15000 && income<=35000){
                    tax=(income-5000-10000)*0.15+1000;
                    cout<< tax<<endl;
                }
                else if(income>35000){
                    tax=(income-5000-10000-20000)*0.2+1000+3000;
                    cout<< tax<<endl;
                }
            }
            else{
                status=false;
                break;
            }
        }break;
    }
}
