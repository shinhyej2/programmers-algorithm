#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int solution(int k, vector<vector<int>> dungeons) {
    int answer = -1;

    int d_cnt = dungeons.size();
    vector<int> v;
    int n = k;

    for (int i = 0; i < d_cnt; i++)
    {
        v.push_back(i);
    }

    do {
        n = k;
        int cnt = 0;

        for (int i = 0; i < v.size(); i++) {
            int next = v[i];
            int minValue = dungeons[next][0];
            int consumeValue = dungeons[next][1];

            if (n >= minValue) {
                n -= consumeValue;
                answer = max(answer, i + 1);
            }
            else {
                break;
            }
        }

    } while (next_permutation(v.begin(), v.end()));
    

    return answer;
}

int main(void)
{
    int k = 80;
    vector<vector<int>> dungeons = { {80,20},{50,40},{30,10} };
    int ret = solution(k, dungeons);
    
    cout << ret;

    return 0;
}