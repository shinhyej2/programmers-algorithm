#include <string>
#include <vector>

using namespace std;

long long fac(long long num) {
    if (num == 1)
        return 1;
    return fac(num - 1) * num;
}

vector<int> solution(int n, long long k) {
    vector<int> answer;
    
    vector<int> temp;
    for (int i = 0; i <= n; i++)
    {
        temp.push_back(i);
    }

    if (k == 1)
    {
        return temp;
    }

    k -= 1;
    long long pre = fac(n);
    long long mod, div;

    while (temp.size() != 1) {
        pre = pre / n;
        mod = k % pre;
        div = k / pre;
        answer.push_back(temp[div]);
        temp.erase(temp.begin() + div);
        k = mod;
        n--;
    }

    answer.push_back(temp[0]);
    
    return answer;
}

int main(void)
{
    int n = 3;
    long long k = 5;
    vector<int> ret = solution(n, k);

    return 0;
}