#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin >> n;

    int last, count = 0, flag = 0;
    int digit = log(10 * (n + 1));
    for (int i = 0; i < digit; i++)
    {
        cout << n << "-->" << last << "-->" <<count << "-->" <<flag << endl;
        last = n % 10;
        if (last == 4 || last == 7)
        {
            n/=10;
            count++;
            flag = 1;
        }
        else
        {
            if (count == 7 || count == 4)
            {
                flag = 1;
                // n/=10;
            }
            else
            {
                flag = 0;
                // n/=10;
            }
            n/=10;
        }
        
    }
    if ((count == 4 || count == 7) && flag == 1)
    {
        cout << "YES";
    }
    else 
    {
        cout << "NO";
    }
    

    return 0;
}