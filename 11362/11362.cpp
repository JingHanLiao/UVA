#include<iostream>
#include<iomanip>
#include<string>
#include<cstdlib>
#include<cmath>
#include<cctype>
#include<algorithm>

using namespace std;

string num[10000];

bool prefix( string a , string b )
{
    int ase=0,bse=0;

    ase=a.size();

    bse=b.size();

    if( bse < ase )
    {
        return false;
    }

    for(int i=0 ; i < ase ; i++)
    {
        if( a[i] != b[i] )
        {
            return false;
        }
    }

    return true;
}

int main()
{
    int test;

    bool flag;

    cin >> test;

    for(int h=0 ; h < 10000 ; h++)
    {
        num[h]="";
    }

    for(int i=0 ; i < test ; i++)
    {
        int n;

        cin >> n;

        for(int j=0 ; j < n ; j++)
        {
            cin >> num[j];
        }

        sort( num , num + n);

        flag = true;

        for(int i=0 ; i < n-1 ; i++)
        {
            if( prefix( num[i] , num[i+1] ) )
            {
                flag = false;

                break;
            }
        }

        if( flag )
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}
