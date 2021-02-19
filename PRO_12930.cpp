#include <string>

using namespace std;

string solution(string s) {
    string answer = s;
    int n = 0;
    
    for(auto &c: answer){
        if(c==' '){
            n = 0;
        } else{
            if((n&1)==0 && c>='a')
                c -= 32;
            else if(n&1 && c<='Z')
                c += 32;
            n++;
        }
    }
    return answer;
}