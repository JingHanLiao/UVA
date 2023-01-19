#include<iostream>
#include<iomanip>
#include<string>
#include<cstdlib>
#include<cmath>
#include<cctype>

using namespace std;

char ar[101][101];

//�]��-1~1����e��ƪ��e�@��~��e��ƪ���@��A�p�G�ˬd����l���O*�r���N+1
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

        //��J�p�G���O*�r������l�N�ܦ�0
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

        //�ˬd�C�Ӯ�l�A�p�G��*�N��methon
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
