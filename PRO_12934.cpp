#include <string>
#include <cmath>

using namespace std;

long long solution(long long n) {
    double num = sqrt(n);
    if((num-(int)num) == 0){
        return (num+1) * (num+1);
    }
    return -1;
}