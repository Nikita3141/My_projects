#include<iostream>
#include <cctype>
using namespace std;

int main()
{
    int vowels = 0;
    int garbage = 0;
    int consonants = 0;
    string words;
    cout << "Введите слово"<<endl;
    while ((cin >> words) &&  (words!= "q"))
    {
        if (isalpha(words[0]))
        {
            switch (words[0])
            {
                case 'a':
                    vowels++;
                case 'A':
                    vowels++;
                case 'e':
                    vowels++;
                case 'E':
                    vowels++;
                case 'i':
                    vowels++;
                case 'I':
                    vowels++;
                case 'y':
                    vowels++;
                case 'Y':
                    vowels++;
                case 'o':
                    vowels++;
                case 'O':
                    vowels++;
                case 'u':
                    vowels++;
                case 'U':
                    vowels++;

                break;

                default: consonants++;
            }
        }else garbage++;
    }
    cout <<vowels<< " "<< consonants<< " "<< garbage<<endl;
}