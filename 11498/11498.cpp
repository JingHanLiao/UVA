#include<iostream>
#include<string>
#include<iomanip>
#include<cstdlib>
#include<cmath>
#include<cctype>

using namespace std;

int main()
{
    int num;

    while(cin >> num)
    {
        int x,y;

        if( num == 0)
        {
            break;
        }

        cin >> x >> y;

        while(num--)
        {
            int tx,ty;

            cin >> tx >> ty;

            if(tx == x || ty == y)
            {
                cout << "divisa" << endl;
            }
            else if(tx > x && ty > y)
            {
               cout << "NE" << endl;
            }
            else if(tx < x && ty > y)
            {
                cout << "NO" << endl;
            }
            else if(tx > x && ty < y)
            {
                cout << "SE" << endl;
            }
            else if(tx < x && ty < y)
            {
                cout << "SO" << endl;
            }
        }

    }
}
