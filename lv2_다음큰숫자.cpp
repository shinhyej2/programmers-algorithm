#include <string>
#include <vector>

using namespace std;

int countOne(int n)
{
    int count = 0;

    while (true)
    {
        if (n % 2 != 0)
        {
            count++;
        }
        n /= 2;
        if (n == 2 || n == 1)
        {
            count++;
            break;
        }

    }

    return count;
}

int solution(int n) {
    int answer = 0;

    //2������ ��ȯ�� ���� 1�� ������ ���ؾ� ��.
    int count = countOne(n);

    n++;
    while (true)
    {
        if (count == countOne(n))
        {
            return n;
        }

        n++;
    }
    
}

int main(void)
{
    int n = 78;
    int ret = solution(n);
    return ret;
}