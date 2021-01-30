#include <string>
#include <vector>
#include <cmath>

using namespace std;

vector<int> solution(vector<int> answers) {
    vector<int> answer;
    int answer1[5] = { 1,2,3,4,5 };
    int answer2[8] = { 2,1,2,3,2,4,2,5 };
    int answer3[10] = { 3,3,1,1,2,2,4,4,5,5 };
    int cnt[3] = { 0 };

    for (int i = 0; i < answers.size(); i++) {
        if (answer1[i % 5] == answers[i])
            cnt[0]++;
        if (answer2[i % 8] == answers[i])
            cnt[1]++;
        if (answer3[i % 10] == answers[i])
            cnt[2]++;
    }
    int maxCnt = max(cnt[0], max(cnt[1], cnt[2]));
    if (maxCnt == cnt[0]) answer.push_back(1);
    if (maxCnt == cnt[1]) answer.push_back(2);
    if (maxCnt == cnt[2]) answer.push_back(3);

    return answer;
}