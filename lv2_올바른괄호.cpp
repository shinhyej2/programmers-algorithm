#include<string>
#include <iostream>

using namespace std;

bool solution(string s)
{
    //bool answer = true;

    //// [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
    //cout << "Hello Cpp" << endl;

    //return answer;

    bool answer = true;

    //마지막이 '(' 이놈이면 무조건 false

    int leng = s.length();

    string text;
    text = s.substr(s.length() - 1, s.length());

    if (text == "(")
    {
        return false;
    }

    //'(' 요놈의 갯수와 ')' 요놈의 갯수가 같아야한다.
    int count = 0;
    int count2 = 0;
    for (int i = 0; i < leng; i++)
    {
        if (s.find("(") == -1)
        {
            break;
        }
        else if (s.find("(", i) <= i)
        {
            count += 1;
        }

        if (s.find(")") == -1)
        {
            break;
        }
        else if (s.find(")", i) <= i)
        {
            count2 += 1;
        }
    }

    if (count != count2)
    {
        return false;
    }
    else
    {
        return true;
    }

    return answer;


}

int main(void)
{

    string a = "()((";

    bool ret = solution(a);

    return 0;
}