#include<iostream>
#include<string>
#include<iomanip>
#include<cstdlib>
#include<cmath>
#include<cctype>

using namespace std;

int main()
{
    int num,cont=1;

    cin >> num;

    while( num-- )
    {
        char c1,c2;

        long long int n;

        cin >> c1 >> c2 >> n;

        long long int a[n*n];

        for(int k=0 ; k < n*n ; k++)
        {
            cin >> a[k];
        }

        long long int i=0,j=n*n-1;//i�q�̶}�l�ˬd�Aj�q�̫��ˬd


        while( i <= j )//���ˬd����l������ܴN���X�j��
        {
            if( a[i] != a[j])
            {
                break;
            }

            if( a[i] < 0 || a[j] < 0 )
            {
                break;
            }

            i++;

            j--;
        }

        if( i > j )//���ˬd��̫�A�S�����X�j��
        {
            cout << "Test #" << cont << ": " << "Symmetric." << endl;
        }
        else
        {
            cout << "Test #" << cont << ": " << "Non-symmetric." << endl;
        }

        cont++;

    }
}

