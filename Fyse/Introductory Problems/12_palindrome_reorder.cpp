#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    string input, output;
    int a[26] = {0}, odd_count = 0, odd_position = -1, i, index;
    getline(cin, input);
    //printf("%d",input[0]);

    for (i = 0; i < input.length(); i++)
        a[int(input[i]) - 65]++;

    for (i = 0; i < 26; i++)
        if (a[i] % 2 != 0)
        {
            odd_count++;
            odd_position = i;
        }

    if (odd_count > 1)
        cout << "NO SOLUTION";
    else
    {
        for (i = 0; i < 26; i++)
            if (i != odd_position)
            {
                index = a[i] / 2;
                while (index--)
                    printf("%c", i + 65);
            }
        if (odd_position != -1)
            while (a[odd_position]--)
                printf("%c", odd_position + 65);

        for (i = 25; i >= 0; i--)
            if (i != odd_position)
            {
                index = a[i] / 2;
                while (index--)
                    printf("%c", i + 65);
            }
    }

    return 0;
}
