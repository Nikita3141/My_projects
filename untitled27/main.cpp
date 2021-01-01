
#include<iostream>
#include<fstream>
using namespace std;



int main()
{
    int count=1;
    ifstream
    inFile;
    inFile.open("text.txt");
    char ch;
    if (!inFile.is_open()) exit(EXIT_FAILURE);
    while (inFile.good())
    {
        ++count;
        inFile >> ch;
    }
   if (count == 0)
        cout << "Нет данных";
    else
    {
        cout << count<< endl;
    }
    inFile.close();
}