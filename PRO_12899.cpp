#include <string>

using namespace std;

string solution(int n) {
    string answer = "";
    
    while(n>0){
        answer = "412"[n%3] + answer;
        n = (n-1)/3;
    }
    return answer;
}