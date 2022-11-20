#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int solution(vector<int> people, int limit) {
    int answer = 0;
    int head = 0, tail = people.size() - 1;
    sort(people.begin(), people.end());

    while (head <= tail) {
        if (people[head] + people[tail] <= limit) 
        {
            head++;
            tail--;
        }
        else 
        {
            tail--;
        }
        
        answer++;
    }

    return answer;
}

int main(void)
{
    int limit = 100;
    vector<int> people = { 70, 50, 80, 50 };
    int ret = solution(people, limit);

    cout << ret;
    return 0;
}