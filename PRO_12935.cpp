#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer = arr;
    if(answer.size()==1)
        answer[0] = -1;
    
    int min = 0;
    for(int i=1; i<answer.size(); i++)
        if(answer[min] > answer[i])
            min = i;
    answer.erase(answer.begin()+min, answer.begin()+min+1);
    
    return answer;
}