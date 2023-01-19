#include<iostream>
#include<string>
#include<iomanip>
#include<cstdlib>
#include<cmath>
#include<cctype>
#include<map>

using namespace std;

int main()
{
    map < string , long long int > cost;

    map < string , long long int > :: iterator it;

    long long int n,t;

    while( cin >> n )
    {
        if( t++ )
        {
            cout << endl;
        }

        string name[10000];

        for( int i=0 ; i < n ; i++ )
        {
            string people;

            cin >> people;

            name[i]=people;

            cost[people]=0;
        }

        for( int i=0 ; i < n ; i++ )
        {
            string temp;

            long long int outsum,insum,cont;

            cin >> temp >> outsum >> cont;

            cost[temp]=cost[temp]-outsum;

            if( cont != 0 )
            {
                insum=outsum/cont;
            }

            int fina=outsum-( cont*insum );

            cost[temp]=cost[temp]+fina;

            for( int i=0 ; i < cont ; i++ )
            {
                cin >> temp;

                cost[temp]=cost[temp]+insum;
            }
        }

        for( int i=0 ; i < n ; i++ )
        {
            cout << name[i] << ' ' << cost[name[i]] << endl;
        }

        cost.clear();
    }
}
