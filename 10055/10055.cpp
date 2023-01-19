#include<iostream>
#include<iomanip>
#include<string>
#include<cstdlib>
#include<cmath>
#include<cctype>

using namespace std;

int main()
{
    long long int n1,n2,total=0;

    while(cin >> n1 >> n2)
    {
        total=n1-n2;

        total=abs(total);

        cout << total << endl;
    }

}
