#include <string>
#include <vector>

using namespace std;


long long solution(int n) {
    long long arr[2001] = {0,};

    arr[0] = 1;
    arr[1] = 1;

    for (int i = 2; i <= n; i++)
    {
        arr[i] = (arr[i - 1] + arr[i - 2]) % 1234567;
    }   

    return arr[n];
}

int main(void)
{
    int n = 4;
    long long ret = solution(n);
    return 0;
}