#include<iostream>
#include<string>
#include<iomanip>
#include<cstdlib>
#include<cmath>
#include<cctype>

using namespace std;

int main()
{
    int n,casen=1;

    cin >> n;

    while( n-- )
    {
        int se,cont=0;

        string str,ans;

        char now;

        cin >> str;

        se=str.size();

        now=str[0];

        for(int i=1 ; i <= se ; i++)
        {
            if(isalpha(str[i]))
            {
                for(int j=0 ; j < cont ; j++)//��o�Ӧr�������G�s�U��
                {
                    ans=ans+now;
                }

                cont=0;

                now=str[i];//��o�Ӧr����now

            }
            else if(isdigit(str[i]))
            {
                cont=cont*10+str[i]-'0';//�@��@��ƧP�_�A�̫��X�h�֦���
            }
        }

        for(int j=0 ; j < cont ; j++)//�]���̫᪺�r���L�k�[�W�A�ҥH�٭n�[�W�̫᪺�r���M����
        {
            ans=ans+now;
        }

        cout << "Case " << casen << ": " << ans << endl;

        casen++;

    }
}
