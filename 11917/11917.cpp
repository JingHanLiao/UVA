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

    cin >> num;

    int n=1;

    while( num-- )
    {
        string hw;

        int cont,d,check;

        bool flag=false;

        string name[101]={""};

        int day[101]={0};

        cin >> cont;

        for( int i=0 ; i < cont ; i++ )
        {
            cin >> name[i] >> day[i];
        }

        cin >> d;

        cin >> hw;

        for( int i=0 ; i < cont ; i++ )
        {
            if( name[i] == hw )
            {
                check=day[i];

                flag=true;

                break;
            }
        }

        cout << "Case " << n << ": ";

        if( flag == false )
        {
            cout << "Do your own homework!" << endl;
        }
        else if( check <= d )
        {
            cout << "Yesss" << endl;
        }
        else if( check <= d+5 )
        {
            cout << "Late" << endl;
        }
        else
        {
            cout << "Do your own homework!" << endl;
        }

        n++;
    }
}
