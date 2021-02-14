#include <string>

using namespace std;

long long solution(long long n) {
    long long answer = 0;
    int num[10] = {0,};
    
    while(n>0){
        num[n%10]++;
        n/=10;
    }
    for(int i=9; i>=0; i--){
        for(int j=num[i]; j>0; j--){
            answer = answer*10+i;
        }
    }
    return answer;
}