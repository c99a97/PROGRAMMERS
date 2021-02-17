#include <string>

using namespace std;

void toLower(string &str){
    int len = str.length();
    for(int i=0; i<str.length(); i++){
        if(str[i]>='A' && str[i]<='Z')
            str[i]+=32;
    }
}
void toJaden(string &str){
    int len = str.length();
    bool isSpace = true;
    for(int i=0; i<str.length(); i++){
        if(str[i]== ' ')
            isSpace = true;
        else if(isSpace){
            isSpace = false;
            if(str[i]>='a' && str[i]<='z')
                str[i]-=32;
        }
    }
}

string solution(string s) {
    string answer = s;
    toLower(answer);
    toJaden(answer);    
    return answer;
}