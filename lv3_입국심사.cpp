#include <string>
#include <vector>
#include <algorithm>

using namespace std;

long long solution(int n, vector<int> times) {
    long long answer = 0;

    sort(times.begin(), times.end());

    long long start = 1;
    long long end = (long long)times[times.size() - 1] * n;    
    long long mid;

    while (start <= end) {        
        mid = (start + end) / 2;
        long long cnt = 0;

        for (int i = 0; i < times.size(); i++) 
        {
            cnt += mid / times[i];
        }

        if (cnt < n) 
        {
            start = mid + 1;
        }        
        else 
        {
            if (mid <= end) 
            {
                answer = mid;
            }
        
            end = mid - 1;
        }
    }

    return answer;
}

int main(void)
{
    int n = 6;
    vector<int> times = { 7, 10 };
    long long ret = solution(n, times);

    return 0;
}