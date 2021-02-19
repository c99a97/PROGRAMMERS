#include <string>

using namespace std;

int solution(string s) {
    bool isMinus = false;
    int answer = 0;
    int i = 0;
    
    if(s[0]=='-'){
        i = 1;
        isMinus = true;
    }
    else if(s[0]=='+')
        i = 1;
    
    for(; i<s.length(); i++)
        answer = answer*10 + s[i]-'0';
    if(isMinus)
        answer *= -1;
    return answer;
}