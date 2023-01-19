#include<iostream>
#include<string>
#include<iomanip>
#include<cstdlib>
#include<cmath>
#include<cctype>

using namespace std;

int tested[105][105]={0};

char ary[105][105];

int row,col;

void dfs( int r , int c )
{
    if( r < 0 || r >= row || c < 0 || c >= col || tested[r][c] == 1 || ary[r][c] == '*' )
    {
        return;
    }

    tested[r][c]=1;

    dfs( r-1 , c-1 );//左上

    dfs( r-1 , c );//上

    dfs( r-1 , c+1 );//右上

    dfs( r , c-1 );//左

    dfs( r , c+1 );//右

    dfs( r+1 , c-1 );//左下

    dfs( r+1 , c );//下

    dfs( r+1 , c+1 );//右下
}

int main()
{
    while( cin >> row >> col )
    {
        int cont=0;

        if( row == 0 && col == 0)
        {
            break;
        }

        for( int i=0 ; i < row ; i++ )
        {
            for( int j=0 ; j < col ; j++ )
            {
               cin >> ary[i][j];

               tested[i][j]=0;
            }
        }

        for( int i=0 ; i < row ; i++ )
        {
           for( int j=0 ; j < col ; j++ )
           {
              if( ary[i][j] == '@' && tested[i][j] == 0 )
              {
                  dfs( i , j );

                  cont++;
              }
           }
        }

        cout << cont << endl;
    }
}
