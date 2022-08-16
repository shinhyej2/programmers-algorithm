#include <iostream>
#include<vector>
#include<algorithm>

using namespace std;


int solution(vector<int> A, vector<int> B)
{
    int answer = 0;
    
    sort(A.begin(), A.end());
    sort(B.begin(), B.end(), greater<int>());

    int sum = 0;

    for (int i = 0; i < A.size(); i++)
    {
        sum += A[i] * B[i];
    }

    return sum;

}

int main(void)
{
    vector<int> a = { 1,4,2 };
    vector<int> b = { 5,4,4 };
    int ret = solution(a, b);
    return 0;
}