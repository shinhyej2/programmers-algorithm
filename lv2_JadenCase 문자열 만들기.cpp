#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";

    int size = s.size();

    s.at(0) = toupper(s.at(0));

    for (int i = 1; i < s.size(); i++)
    {
        s.at(i) = tolower(s.at(i));
    }

    for (int i = 0; i < size; i++)
    {
        //" "Ã£±â
        int index = s.find(" ", i);
        if (index < 0)
        {
            return s;
        }

        if ((index + 1) == size)
        {
            return s;
        }

        s.at(index + 1) = toupper(s.at(index + 1));
        i = index;
    }

    return s;
}

int main(void) {

    string a = "for the last week";
    string ret = solution(a);

    return 0;
}