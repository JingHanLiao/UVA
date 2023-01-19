#include<iostream>
#include<string>
#include<iomanip>
#include<cstdlib>
#include<cmath>
#include<cctype>

using namespace std;

int main()
{
    int c,cont=1;

    cin >> c;

    while(c--)
    {
        int num[3];

        int v,temp=0;

        for(int i=0 ; i < 3 ; i++)
        {
            cin >> v;

            num[i]=v;
        }

        for(int i=0 ; i < 3 ; i++)
        {
            for(int j=i+1 ; j < 3 ; j++)
            {
                if(num[i] < num[j])
                {
                    temp=num[i];

                    num[i]=num[j];

                    num[j]=temp;
                }

            }
        }

        cout << "Case " << cont << ": " << num[1] << endl;

        cont++;
    }
}
