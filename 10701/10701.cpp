#include<iostream>
#include<string>
#include<iomanip>
#include <cstdlib>
#include<cmath>
#include<cctype>
#include<algorithm>

using namespace std;

char pre[53],in[53];

int idx;

void find_post(int start , int end)//�Q�λ��j����
{
    if(start > end)
    {
       return;
    }

    int P;//���ثe�d�쪺node

    for(P=start ; P  <=  end ; P++)
    {
        if(in[P] == pre[idx])//�p�G���@�˪��N�i�H���D���k�`�I
        {
            break;
        }
    }

    if(P != end+1)
    {
        idx++;

        find_post(start , P-1);//�ثe�`�I�����l�I

        find_post(P+1 , end);//�ثe�`�I���k�l�I

        cout << in[P];
    }
}

int main()
{
    int cont,node;

    cin >> cont;

    while(cont--)//��cont������
    {
        int i=0,j=0;

        char value;

        cin >> node;

        while(i < node)//����J�e��
        {
            cin >> value;

            pre[i]=value;

            i=i+1;
        }

        while(j < node)//�b��J����
        {
            cin >> value;

            in[j]=value;

            j=j+1;
        }

        idx=0;//index�}�l���ɭԬ�0�}�l

        find_post(0 , node-1);//�Q�Ψ禡����

        cout << endl;
    }

}
