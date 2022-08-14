#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> citations) {
    int answer = 0;
    sort(citations.begin(), citations.end(), greater<int>());
    for (int i = 0; i < citations.size(); i++)
    {
        if (citations[i] >= (i + 1))
        {
            answer++;
        }
    }
    return answer;
}

int main(void)
{
    vector<int> v = { 3, 0, 6, 1, 5 };
    int a = solution(v);

    return 0;
}