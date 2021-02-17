#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

int solution(vector<int> scoville, int K) {
    int answer = 0;
    priority_queue<int, vector<int>, greater<int>> pq(scoville.begin(), scoville.end());
    
    while(pq.top() < K){
        if(pq.size()==1)
            return answer = -1;
        
        int food_1st = pq.top();
        pq.pop();
        int food_2nd = pq.top();
        pq.pop();
        pq.push(food_1st+2*food_2nd);
        answer++;
    }
    return answer;
}