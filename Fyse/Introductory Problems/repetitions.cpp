#include <iostream>
#include <string>

using namespace std;

int main()
{
    int curr = 0, max = 1, len = 1;
    string str;
    getline(cin, str);

    while (curr != str.length())
    {
        if (str[curr] == str[curr + 1])
        {
            len += 1;
            if (len >= max)
                max = len;
        }
        else
            len = 1;

        curr++;
    }
    cout<<max;

    return 0;
}
