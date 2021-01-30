#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    if (s.length() % 2 == 1)
        return string(s.begin() + s.length() / 2, s.begin() + s.length() / 2 + 1);
    else
        return string(s.begin() + s.length() / 2 - 1, s.begin() + s.length() / 2 + 1);
}