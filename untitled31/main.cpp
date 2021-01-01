#include <iostream>
using namespace std;
const int SLEN = 30;
int k = 0;
struct student {
    char fullname[SLEN];
    char hobby[SLEN];
    int ooplevel;
};
int getinfo(student pa[], int n) {
    for (int i = 0; i < n; i++) {
        cin >> pa[i].fullname;
        if (pa[i].fullname == "\n") {
            return k;
            break;
        }
        cin >> pa[i].hobby >> pa[i].ooplevel;
        k++;
    }
    return k;
}
void display1(student st) {
    cout << "--------------------------------------------------\n";
    cout << "Name: " << st.fullname << "\nHobby: " << st.hobby << "\nOOP Level: " << st.ooplevel << "\n-----------------------\n";
    cout << "ZNACH" << endl;


}
void display2(const student* ps) {
    cout << "--------------------------------------------------\n";
    cout << "Name: " << (*ps).fullname << "\nHobby: " << (*ps).hobby << "\nOOP Level: " << (*ps).ooplevel << "\n-----------------------\n";
    cout << "POINTER" << endl;
}
void display3(const student pa[], int n) {
    for (int i = 0; i < n; i++) {
        cout << "Student №" << i + 1 << ":\n" << "Name: " << pa[i].fullname << "\nHobby: " << pa[i].hobby << "\nOOPLEVEL: " << pa[i].ooplevel << endl;
    }

}
int main()
{

    cout << "Enter class size:";
    int class_size;
    cin >> class_size;
    student* ptr_stu = new student[class_size];
    int entered = getinfo(ptr_stu, class_size);
    for (int i = 0; i < entered; i++) {
        display1(ptr_stu[i]);
        display2(&ptr_stu[i]);
    }
    display3(ptr_stu, entered);
    delete[] ptr_stu;
    cout << "Done\n";
    return 0;

}