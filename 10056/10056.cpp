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

    while( num-- )
    {
        int N,i;

        double p,finl,loss;

        cin >> N >> p >> i;

        if( p == 0 )
        {
            finl=0;
        }
        else
        {
            loss=1-p; //���Ѿ��v

            finl=( pow( loss , (i - 1)) * p ) / (1 - pow( loss , N ) ); //����żƤ���
        }

        cout << fixed << setprecision(4) << finl << endl;
    }
}
