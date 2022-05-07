#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(const string& a, const string& b)
{
    //참이면 1, 거짓이면 0
    //a+b > b+a 일 때만 실시됨
    return a + b > b + a;
}

string solution(vector<int> numbers) {
    string answer = "";

    //0 또는 양의 정수가 담긴 배열 numbers가 매개변수로 주어질 때, 
    //순서를 재배치하여 만들 수 있는 가장 큰 수를 문자열로 바꾸어 return 하도록 solution 함수를 작성해주세요.
    vector<string> tmp_string;
    for (int i = 0; i < numbers.size(); i++)
    {
        tmp_string.push_back(to_string(numbers[i]));
    }

    sort(tmp_string.begin(), tmp_string.end(), compare);

    for (int i = 0; i < tmp_string.size(); i++)
    {
        answer += tmp_string[i];
    }

    if (answer[0] == '0')
    {
        return "0";
    }

    return answer;
}

int main(void)
{
    vector<int> n = { 6, 10, 2 };
    solution(n);


    return 0;
}