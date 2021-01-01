#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;
int fromQ_to10(int Q, string num) {
    int e_num = 0;
    int dec_num = 0;
    for (int i = 0; i < num.size(); i++) {
        if (int(num[i]) > 47 && (num[i]) < 58) {
            dec_num = (int(num[i]) - int('0'));
            e_num += dec_num * (pow(Q,num.size()-i));
        }
    }
    cout << e_num/Q;
}

int main(){
    fromQ_to10(9, "10");
    return 0;
}