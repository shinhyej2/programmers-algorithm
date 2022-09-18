#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    int sum = 0;
    int count = 1;

    while (true) {
        sum = 0;
        
        for (int i = 1; i <= count; i++)
        {
            sum += i;
        }
                
        if (sum > n)
        {
            break;
        }
             
        if ((n - sum) % count++ == 0)
        {
            answer++;
        }
    }

    return answer;
}

int main(void)
{
    int n = 15;
    int ret = solution(n);
    return ret;
}