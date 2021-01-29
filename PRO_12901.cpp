#include <string>
#include <vector>

using namespace std;

const int month[12] = { 31,29,31,30,31,30,31,31,30,31,30,31 };
const string DAY[7] = { "THU", "FRI", "SAT", "SUN", "MON", "TUE", "WED" };

string solution(int a, int b) {
    int d = b;
    for (int i = 0; i < a - 1; i++) {
        d += month[i];
    }
    return DAY[d % 7];
}