#include<iostream>
#include<iomanip>
#include<string>
#include<cstdlib>
#include<cmath>
#include<cctype>

using namespace std;

int main()
{
    int t;

    while(cin >> t)
    {
        int fr,en,total=0,cs=1;

        while(t--)
        {
           cin >> fr >> en;

           for(int j=fr ; j <= en ; j++)
           {
               if(j % 2 != 0)
               {
                  total=j+total;
               }
           }

           cout << "Case " << cs << ": " << total << endl;

           total=0;

           cs=cs+1;
        }

    }
}
