#include <string>
#include <stack>

using namespace std;

int solution(int n) {
    stack<int> s;
    int answer = 0;
    while (n > 0) {
        s.push(n % 3);
        n /= 3;
    }
    int cnt = 1;
    while (!s.empty()) {
        answer += s.top() * cnt;
        cnt *= 3;
        s.pop();
    }
    return answer;
}