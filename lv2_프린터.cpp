#include <string>
#include <vector>
#include <queue>

using namespace std;

int solution(vector<int> priorities, int location) {
    int answer = 0;
    int count = 0;
    queue<pair<int, int>> q;
    priority_queue <int> prio_q;

    for (int i = 0; i < priorities.size(); i++)
    {
        q.push(make_pair(i, priorities[i]));        
        prio_q.push(priorities[i]);
    }

    while (!q.empty()) {
        int index = q.front().first;
        int value = q.front().second;
        q.pop();

        if (prio_q.top() == value) 
        {
            prio_q.pop();
            
            count++;
            if (index == location) 
            {
                answer = count;
                break;
            }
        }

        else
        {
            q.push(make_pair(index, value));
        }
    }

    return answer;
}

int main(void)
{
    vector<int> priorities = { 2, 1, 3, 2 };
    int location = 2;

    int ret = solution(priorities, location);
    return 0;
}