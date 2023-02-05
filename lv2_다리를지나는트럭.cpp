#include <string>
#include <vector>
#include <queue>

using namespace std;

int solution(int bridge_length, int weight, vector<int> truck_weights) {
    int answer = 0;
    queue<int> que;
    int sum = 0;

    int i = 0;
    while (true) {
        int now_weight = truck_weights[i];
        if (i == truck_weights.size()) 
        {
            answer += bridge_length;
            break;
        }

        if (que.size() == bridge_length) 
        {
            sum -= que.front();
            que.pop();
        }

        if (sum + now_weight <= weight) 
        {
            sum += now_weight;
            que.push(now_weight);
            i++;
        }
        else
        {
            que.push(0);
        }

        answer++;
    }

    return answer;
}

int main(void)
{
    int len = 2;
    int weight = 10;
    vector<int> truck_weights = { 7, 4, 5, 6 };

    int ret = solution(len, weight, truck_weights);

    return 0;
}