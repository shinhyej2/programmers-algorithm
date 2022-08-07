#include <string>
#include <vector>
#include <iostream>
#include <queue>

using namespace std;

int solution(vector<int> scoville, int k) {
    int answer = 0;
    priority_queue<int, vector<int>, greater<int>> p_queue;

    for (int i : scoville) p_queue.push(i);

    while (p_queue.top() < k) {

        if (p_queue.size() == 1) return -1;

        int tmp1 = p_queue.top();
        p_queue.pop();

        int tmp2 = p_queue.top();
        p_queue.pop();

        int new_scoville = tmp1 + (tmp2 * 2);
        p_queue.push(new_scoville);

        answer++;
    }

    return answer;
}

int main(void)
{
    vector<int> v = { 1, 2, 3, 9, 10, 12 };
    int k = 1;
    int a = solution(v, k);
    return 0;
}