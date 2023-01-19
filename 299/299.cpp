#include<iostream>
#include<string>
#include<iomanip>
#include<cstdlib>
#include<cmath>
#include<cctype>

using namespace std;

int main()
{

    int n;

    cin >> n;

    while(n--)
    {
        int v,cont=0,temp;

        cin >> v;

        int num[v];

        for(int i=0 ; i < v ; i++)
        {
            cin >> num[i];
        }

        for(int i=0 ; i < v ; i++)
        {
            for(int j=i+1 ; j < v ; j++)
            {
                if( num[i] > num[j] )
                {
                    temp=num[i];

                    num[i]=num[j];

                    num[j]=temp;

                    cont++;
                }
            }
        }

        cout << "Optimal train swapping takes " << cont << " swaps." << endl;
    }
}
