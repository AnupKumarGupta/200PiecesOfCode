#include <iostream>

using namespace std;


int main()
{
    long long int  test, x, y, max, diag_value ;

    cin >> test;

    while (test--)
    {
        cin >> x >> y;
        (x >= y) ? max = x : max = y;

        // for (long long int i = 0; i < max; i++)
        //       diag_value += 2 * i;
        
        diag_value = 1 + (max * (max-1));
       
        if (x == 1 && y == 1)
            cout << "1\n";

        else if (max % 2 == 0)
            cout<< diag_value + (x - y)<<"\n";
           
        else
            cout << diag_value - (x - y)<<"\n";
            
        diag_value = 1;
    }

    return 0;
}
