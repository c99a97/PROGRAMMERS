#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;
    for (int i = 0; i < commands.size(); i++) {
        vector<int> arr{ array.begin(), array.end() };
        sort(arr.begin() + commands[i][0] - 1, arr.begin() + commands[i][1]);
        answer.push_back(arr.at(commands[i][0] + commands[i][2] - 2));
    }
    return answer;
}