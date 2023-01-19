#include<iostream>
#include<string>
#include<iomanip>
#include<cstdlib>
#include<cmath>
#include<cctype>
#include<cstdio>
#include<cstring>

using namespace std;

char tree[257];

struct node
{
    int lv;

    bool flag;

    node *left,*right;

    node( int v=0 , node *l=NULL , node *r=NULL ) : lv(v) , left(l) , right(r)
    {
        flag=false;
    }
}

*root , *queu[257];

int front=0,rear=0;

void print( node *root , int check )
{
    if( check == 0 )
    {
        cout << "not complete" << endl;

        return;
    }

    front=0;

    rear=0;

    queu[rear++]=root;

    while( front < rear )
    {
        node *n=queu[front++];

        if( n -> flag == false )
        {
            check=0;

            break;
        }

        if( n -> left != nullptr )
        {
            queu[rear++] = n -> left;
        }
        if( n -> right != nullptr )
        {
            queu[rear++] = n -> right;
        }
    }

    if( check == 0 )
    {
        cout << "not complete" << endl;

        return;
    }

    front=0;

    cout << queu[front++] -> lv;

    while( front < rear )
    {
        cout << ' ' << queu[front++] -> lv;
    }

    cout << endl;
}

node *newnode()
{
    return new node( 0 , nullptr , nullptr );
}

void insert( int lv , char q[] , int &c )
{
    node *nd=root;

    int sz=strlen(q);

    for( int i=0 ; i < sz ; i++ )
    {
        if( q[i] == 'L' )
        {
            if( nd -> left == nullptr )
            {
                nd -> left = newnode();
            }

            nd = nd -> left;
        }

        if( q[i] == 'R' )
        {
            if( nd -> right == nullptr )
            {
                nd -> right = newnode();
            }

            nd = nd -> right;
        }
    }

    if( nd -> flag == true  )
    {
        c=0;
    }
    else
    {
        nd -> lv = lv;

        nd -> flag = true;
    }

    return;
}

void delet( node *n )
{
    if( n -> left != nullptr )
    {
        delet( n -> left );
    }

    if( n -> right != nullptr )
    {
        delet( n -> right );
    }

    delete n;
}

int main()
{
    int check=1,lv=0;

    root=newnode();

    while( cin >> tree )
    {
        if( !strcmp( tree , "()" ) )
        {
            print( root , check );

            check=1;

            delet( root );

            root=newnode();

            memset( tree , 0 , sizeof(tree) );

            memset( queu , 0 , sizeof(queu) );
        }
        else
        {
            if( !isdigit( tree[1] ) )
            {
                check=0;
            }
            else
            {
                sscanf( tree+1 ,"%d" , &lv );
            }

            int pos=strchr( tree , ',')-tree+1;

            insert( lv , tree+pos , check );

        }
    }
}

