#include <iostream>

using namespace std;

const int N = 5;

long long int kontor = 0;


int xlepes[8] = {-1,1,2,2,1,-1,-2,-2};
int ylepes[8] = {-2,-2,-1,1,2,2,1,-1};
bool lehet(int sor, int oszlop,  int board[][N])
{
    if (sor < 0)
    {
        return false;
    }

    if (oszlop < 0)
    {
        return false;
    }
    if (sor >= N)
    {
        return false;
    }
    if (oszlop >= N)
    {
        return false;
    }
    if (board[sor][oszlop] > 0)
    {
        return false;
    }

    return true;
}
void uresit( int board[][N])
{
    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < N; j++)
        {
            board[i][j] = 0;
        }
    }
}

void kiir( int board[][N])
{
    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < N; j++)
        {
            cout << board[i][j] << " ";
        }

        cout << endl;
    }
}
void backtracking(int lepes, int board[][N], int sor, int oszlop)
{
    if(lepes == N*N)
    {
        kontor++;
        kiir(board);
        cout << endl;
        return;
    }
    for(int index = 0; index < 8; index++)
    {
        if(lehet(sor+xlepes[index], oszlop+ylepes[index],  board))
        {
            int tempboard[N][N];
            for(int i = 0; i< N; i++)
            {
                for(int j = 0; j < N; j++)
                {
                    tempboard[i][j] = board[i][j];
                }
            }
            int templepes = lepes + 1;
            tempboard[sor+xlepes[index]][oszlop+ylepes[index]] = templepes;
            backtracking(templepes, tempboard, sor+xlepes[index], oszlop+ylepes[index]);
        }
    }
}
int main()
{
    //sakktabla letrehozasa
    int board[N][N];
    //sakktabla inicializalasa
    uresit(board);
    //backtracking inditasa a 0. sorbol
    for(int i=0; i<N; i++) {
        for(int j=0; j<N; j++){
          board[i][j] = 1;
          backtracking(1, board, i, j);
          uresit(board);
        }
    }


    cout << kontor << endl;

    return 0;
}
