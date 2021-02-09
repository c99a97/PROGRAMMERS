#include <string>
#include <iostream>
using namespace std;

bool solution(string s){
    int cntPY[2] = { 0, };

    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'p' || s[i] == 'P')
            cntPY[0]++;
        else if (s[i] == 'y' || s[i] == 'Y')
            cntPY[1]++;
    }
    if (cntPY[0] == cntPY[1])
        return true;
    else
        return false;
}