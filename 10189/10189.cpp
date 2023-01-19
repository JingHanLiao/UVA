#include<iostream>
#include<iomanip>
#include<string>
#include<cstdlib>
#include<cmath>
#include<cctype>

using namespace std;

char ar[101][101];

//設為-1~1指當前格數的前一格~當前格數的後一格，如果檢查的格子不是*字號就+1
void methon(int x , int y)
{
     for(int i=-1 ; i <= 1 ; i++)
     {
        for(int j=-1 ; j <= 1 ; j++)
        {
            if(ar[x+i][y+j] != '*')
            {
                ar[x+i][y+j]++;
            }
        }
     }
}


int main()
{
    int r,c,cont=1;

    while(cin >> r >> c)
    {
        if(r == 0 && c == 0)
        {
            break;
        }

        if( cont != 1)
        {
            cout << endl;
        }

        for(int i=1 ; i <= r ; i++)
        {
            for(int j=1 ; j <= c ; j++)
            {
                cin >> ar[i][j];
            }
        }

        //輸入如果不是*字號的格子就變成0
        for(int i=1 ; i <= r ; i++)
        {
            for(int j=1 ; j <= c ; j++)
            {
                if(ar[i][j] != '*')
                {
                    ar[i][j]='0';
                }
            }
        }

        //檢查每個格子，如果為*就用methon
        for(int i=1 ; i <= r ; i++)
        {
            for(int j=1 ; j <= c ; j++)
            {
                if(ar[i][j] == '*')
                {
                    ar[i][j]='*';

                    methon(i , j);
                }
            }
        }

        cout << "Field #" << cont << ":" << endl;

        cont++;

        for(int i=1 ; i <= r ; i++)
        {
            for(int j=1 ; j <= c ; j++)
            {
                cout << ar[i][j];
            }

            cout << endl;
        }
    }
}
