#include<iostream>
#include<string>
#include<iomanip>
#include<cstdlib>
#include<cmath>
#include<cctype>

using namespace std;

int algo(int tm)
{
    int cont=1;

    while(tm != 1)
    {
        //cout << tm;

        if(tm % 2 != 0)
        {
            tm=3*tm+1;
        }
        else
        {
            tm=tm/2;
        }

        cont=cont+1;
    }

    return cont;
}

int main()
{
    int n1,n2;

    while(cin >> n1 >> n2)
    {
        int maxn=0,temp,sma,big;

        cout << n1 << " " << n2 << " ";

        if(n1 < n2)
        {
            sma=n1;

            big=n2;
        }
        else if(n1 > n2)
        {
            sma=n2;

            big=n1;
        }
        else
        {
            sma=n1;

            big=n2;
        }

        for(int i=sma ; i <= big ; i++)
        {
            temp=algo(i);

            if(maxn < temp)
            {
                maxn=temp;
            }
        }

        cout << maxn << endl;
    }
}
