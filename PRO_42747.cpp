#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> citations) {
    int answer = 0;
    
    sort(citations.begin(), citations.end(), greater<int>());
    for(int i=0; i<citations.size(); i++){
        if(answer >= citations[i])
            break;
        answer++;
    }
    return answer;
}