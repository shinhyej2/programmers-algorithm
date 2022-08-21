#include <string>
#include <vector>

using namespace std;

void func(vector<int>& numbers, int& answer, int target, int count = 0, int sum = 0) 
{
    if (count == numbers.size() - 1) 
    {
        if (target == sum + numbers[count])
        {
            answer++;
        }

        if (target == sum - numbers[count])
        {
            answer++;
        }

        return;
    }

    func(numbers, answer, target, count + 1, sum + numbers[count]);
    func(numbers, answer, target, count + 1, sum - numbers[count]);
}

int solution(vector<int> numbers, int target) {
    int answer = 0;

    func(numbers, answer, target);

    return answer;
}

int main(void)
{
    vector<int> n = { 1, 1, 1, 1, 1 };
    int t = 3;

    int ret = solution(n, t);

    return 0;
}