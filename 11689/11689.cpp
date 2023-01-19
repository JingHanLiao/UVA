#include<iostream>
#include<string>
#include<cmath>
#include<iomanip>
#include<cstdlib>
#include<cctype>

using namespace std;

int main()
{
    int c;

    cin >> c;

    while(c--)
    {
        int e,f,c,now,have=0;

        cin >> e >> f >> c;

        now=e+f;

        while(now >= c)
        {
            now=now-c;

            have=have+1;

            now=now+1;
        }

        cout << have << endl;

    }
}
