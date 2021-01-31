#include <string>
#include <vector>

using namespace std;

int answer = 0;

void DFS(vector<int> numbers, int target, int n, int sum) {
    if (n == numbers.size()) {
        if (sum == target)
            answer++;
        return;
    }
    DFS(numbers, target, n + 1, sum + numbers[n]);
    DFS(numbers, target, n + 1, sum - numbers[n]);
}

int solution(vector<int> numbers, int target) {
    DFS(numbers, target, 0, 0);
    return answer;
}