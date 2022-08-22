#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int gcd(int a, int b)
{
    int c;
    while (b != 0)
    {
        c = a % b;
        a = b;
        b = c;
    }

    return a;
}

int lcm(int a, int b)
{
    return a * b / gcd(a, b);
}

int solution(vector<int> arr) {
    int answer = 0;
    answer = arr[0];
    for (int i = 0; i < arr.size(); i++)
    {
        answer = lcm(answer, arr[i]);
    }

    return answer;
}

int main(void)
{
    vector<int> a = { 2,6,8,14 };
    int ret = solution(a);
    return 0;
}