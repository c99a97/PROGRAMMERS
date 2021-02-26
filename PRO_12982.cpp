#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> d, int budget) {
    int answer = 0;
    int now = 0;
    
    sort(d.begin(), d.end(), less<int>());
    for(int i=0; i<d.size(); i++){
        if(now+d[i] > budget)
            break;
        else{
            answer++;
            now += d[i];
        }
    }
    return answer;
}