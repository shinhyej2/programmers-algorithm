#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(string name) {
    int answer = 0;
    int turn = name.length() - 1;

    for (int i = 0; i < name.length(); i++)
    {
        if (name[i] - 'A' < 14)
        {
            answer = answer + name[i] - 'A';
        }
        else
        {
            answer = answer + 'Z' - name[i] + 1;
        }

        int index = i + 1;
        while (index < name.length() && name[index] == 'A')
        {
            index++;
        }

        int a = i;
        int b = name.length() - index;
        turn = min(turn, min(2 * a + b, a + 2 * b));

    }

    answer += turn;
    return answer;
}

int main(void)
{
    string a = "JAN";
    int ret = solution(a);
    return 0;
}