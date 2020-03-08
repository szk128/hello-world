#include <iostream>
using namespace std;
int main()
{
    int test = 1;
    int m = 0;
    int r = 0;
    for (int i = 0; i < 40; i++)
    {
        m = i * i + i + 41;
        for (int j = 2; j < m; j++)
        {
            r = m % j;
            if (r == 0 ) { cout << m << endl; test = 0; break; }
        }
    }
    if (test == 1) cout << 'N' << endl;
}

