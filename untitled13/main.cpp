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
    cout << "[USER]:";
    getline(cin, question);
    to_lower(question);
    return question;
}
int main()
{
    cout << "Hello dear User, please ask your question:" << std::endl;
    string question; // user question

    map<string,string> database = {
            {"hello", "oh, hello to you hooman"},
            {"How ate you", "I`m good"},
            {"What are you doing", "I`m answering stupid question"},
            {"What is your name", "My name is Skill bot 3000"},
            {"exit", "Ok byeeee"},
    };


    /(question!="exit") {
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
            bot("Sorry I do not understand");
        }
    }
}
