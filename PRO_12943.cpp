#include <iostream>

using namespace std;

int solution(int num) {
    long long n = num;
    int answer = 0;
    
    while(n!=1 && answer<=500){
        answer++;
        n = (n&1)?n*3+1:n/2;
    }
    
    return answer>500?-1:answer;
}