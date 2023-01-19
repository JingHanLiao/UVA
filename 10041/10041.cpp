#include<iostream>
#include<string>
#include<iomanip>
#include<cstdlib>
#include<cmath>
#include<cctype>
#include<algorithm>

using namespace std;

int main()
{
    int n,i=0;

    cin >> n;

    while(i < n)
    {
        int j=0,cont,value,temp;

        cin >> cont;

        int v[cont];

        for(int k=0 ; k < cont ; k++)
        {
            cin >> value;

            v[k]=value;
        }

        for(int z=0 ; z < cont ; z++)
        {
            for(int u=z+1 ; u < cont ; u++)
            {
                if(v[z] > v[u])
                {
                    temp=v[z];

                    v[z]=v[u];

                    v[u]=temp;
                }
            }
        }

        for(int k=0 ; k < cont ; k++)
        {
           cout << v[k];
        }

         cout << endl;

        i=i+1;
    }
}
