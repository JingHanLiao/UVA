#include<iostream>
#include<string>
#include<iomanip>
#include<cstdlib>
#include<cmath>
#include<cctype>

using namespace std;

int main()
{
    int c,n1,n2;

    cin >> c;

    while(c--)
    {
        cin >> n1 >> n2;

        if(n1 < n2)
        {
            cout << '<'<< endl;
        }
        else if(n1 > n2)
        {
            cout << '>' << endl;
        }
        else
        {
            cout << '=' << endl;
        }
    }
}

