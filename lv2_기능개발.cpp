#include <string>
#include <vector>
#include <unordered_map>
#include <queue>

using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer;

    //progresses: [93, 30, 55]	speeds: [1, 30, 5]	return: [2, 1]

    //queue에 progresses 를 넣고, speeds 에 맞춰서 100

    queue<int> q;

    vector<int> tmp;

    for (int i = 0; i < progresses.size(); i++)
    {
        int remain = 100 - progresses[i];
        int days = remain / speeds[i];
        if ((progresses[i] + days * speeds[i]) != 100)
        {
            days += 1;
        }
        tmp.push_back(days);        
    }

    q.push(tmp[0]);
    for (int i = 1; i < tmp.size(); i++)
    {
        if (q.front() >= tmp[i])
        {
            q.push(tmp[i]);
        }
        else {
            answer.push_back(q.size());
            while (!q.empty())
            {
                q.pop();                
            }
            q.push(tmp[i]);
        }
    }

    if (!q.empty())
    {
        answer.push_back(q.size());
    }

    return answer;
}