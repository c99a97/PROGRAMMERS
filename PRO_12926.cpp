#include <string>
#include <vector>

using namespace std;

string solution(string s, int n) {
    string answer = s;
    for(int i=0; i<answer.length(); i++){
        if(answer[i]>=97)
            answer[i] = (answer[i]-97+n)%26+97;
        else if(answer[i]>=65)
            answer[i] = (answer[i]-65+n)%26+65;
    }
    return answer;
}