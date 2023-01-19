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

        long long int i=0,j=n*n-1;//i從最開始檢查，j從最後檢查


        while( i <= j )//當檢查的位子交錯的話就跳出迴圈
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

        if( i > j )//有檢查到最後，沒有跳出迴圈
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

