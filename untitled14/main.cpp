#include <iostream>
#include <string>
#include <algorithm>
#include <regex>
#include <map>
using namespace std;

void to_lower(string& str){
    transform(str.begin(), str.end(), str.begin(), ::tolower);
}


void bot(string text)
{
    cout <<"[BOT]: " << text << endl;
}
string user ()
{
    string question;
    getline(cin, question);
    to_lower(question);
    return question;
}
int main()
{

    string question;

    map<string,string> database = {
    };


    while(question!="exit") {
        question = user();
        bool isAnswerFound = false;

        for( auto entry : database){
            regex pattern = regex(".*" + entry.first + ".*");
            if(regex_match(question, pattern)){
                bot(entry.second);
                isAnswerFound = true;
            }
        }
        if (!isAnswerFound){
        }
    }
}
