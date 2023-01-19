#include<iostream>

using namespace std;

int main()
{
    int cont,i,d;

    cin >> cont;

    while(cont--)
    {
        cin >> d >> i;

        int now=1;

        //如果球為奇數就去左子樹

        //如果球為偶數就去右子樹

        for(int j=1 ; j < d ; j++)//現在的深度
        {
            if( i % 2 != 0 )//左子點
            {
                now=now*2;//現在的節點

                i=(i/2)+1;//為第i顆球到現在的節點

            }
            else if( i % 2 == 0)//右子點
            {
                now=(now*2)+1;

                i=i/2;
            }
        }
         cout << now << endl;
    }
}
