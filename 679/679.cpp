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

        //�p�G�y���_�ƴN�h���l��

        //�p�G�y�����ƴN�h�k�l��

        for(int j=1 ; j < d ; j++)//�{�b���`��
        {
            if( i % 2 != 0 )//���l�I
            {
                now=now*2;//�{�b���`�I

                i=(i/2)+1;//����i���y��{�b���`�I

            }
            else if( i % 2 == 0)//�k�l�I
            {
                now=(now*2)+1;

                i=i/2;
            }
        }
         cout << now << endl;
    }
}
