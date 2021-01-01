#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;
long int fromQ_to10(int Q, string num) {
    int e_num = 0;
    int dec_num = 0;
    for (int i = 0; i < num.size(); i++) {
        if (int(num[i]) > 47 && int(num[i]) < 58) {
            dec_num = (int(num[i]) - int('0'));
            e_num += dec_num * (pow(Q,num.size()-i));
        }
        if (int(num[i]) > 64 && int(num[i]) < 91){
            dec_num = (int(num[i]) - 54) - 1;
            e_num += dec_num * (pow(Q,num.size()-i));
        }
    }
    return e_num/Q;
}

int main(){
    cout <<  fromQ_to10(16, "EF52");
    return 0;
}
