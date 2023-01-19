#include<iostream>
#include<iomanip>
#include<string>
#include<cstdlib>
#include<cmath>
#include<cctype>

using namespace std;

int main()
{
    int n;

    while(cin >> n)
    {
        while(n--)
        {
            int f,total=0;

            cin >> f;

            while(f--)
            {
                int ar,an,le,temp;

                cin >> ar >> an >> le;

                temp=ar*le;

                total=temp+total;

            }

            cout << total << endl;
        }
    }
}
