#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(const string& a, const string& b)
{
    //���̸� 1, �����̸� 0
    //a+b > b+a �� ���� �ǽõ�
    return a + b > b + a;
}

string solution(vector<int> numbers) {
    string answer = "";

    //0 �Ǵ� ���� ������ ��� �迭 numbers�� �Ű������� �־��� ��, 
    //������ ���ġ�Ͽ� ���� �� �ִ� ���� ū ���� ���ڿ��� �ٲپ� return �ϵ��� solution �Լ��� �ۼ����ּ���.
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