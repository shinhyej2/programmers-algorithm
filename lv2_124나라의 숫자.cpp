#include <string>
#include <vector>

using namespace std;

string solution(int n) {
    string answer = "";
    int share = n;
    int remind = -1;

    while (share != 0) {
        remind = share % 3;
        share = share / 3;

        if (remind == 0) {
            answer = "4" + answer;
            share--;
        }
        else if (remind == 1) {
            answer = "1" + answer;
        }
        else if (remind == 2) {
            answer = "2" + answer;
        }
    }

    return answer;
}

int main(void)
{
    int a = 9;
    solution(a);
    return 0;
}