#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> people, int limit) {
    int cnt = 0;
    int lightP = 0;
    int heavyP = people.size() - 1;

    sort(people.begin(), people.end(), less<int>());
    while (lightP < heavyP) {
        if (people[lightP] + people[heavyP] > limit) {
            heavyP--;
        }
        else {
            lightP++;
            heavyP--;
        }
        cnt++;
        if (lightP == heavyP)
            cnt++;
    }

    return cnt;
}