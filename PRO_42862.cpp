#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve) {
    int cnt = 0;
    for (int i = lost.size() - 1; i >= 0; i--) {
        if (find(reserve.begin(), reserve.end(), lost[i]) != reserve.end()) {
            reserve.erase(find(reserve.begin(), reserve.end(), lost[i]));
            lost.erase(lost.begin() + i);
        }
    }

    for (int i = 0; i < lost.size(); i++) {
        if (find(reserve.begin(), reserve.end(), lost[i] + 1) != reserve.end()) {
            reserve.erase(find(reserve.begin(), reserve.end(), lost[i] + 1));
            cnt++;
        }
        else if (find(reserve.begin(), reserve.end(), lost[i] - 1) != reserve.end()) {
            reserve.erase(find(reserve.begin(), reserve.end(), lost[i] - 1));
            cnt++;
        }
    }
    return n - lost.size() + cnt;
}