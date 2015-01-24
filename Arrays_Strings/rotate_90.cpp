#include <iostream>
#include <cstdlib>
#define N 4

using namespace std;

int main()
{
    srand(time(NULL));
    int array[N][N];
    int j, k;
    for(j = 0; j < N; j++)
    {
        for(k = 0; k < N; k++)
        {
            array[j][k] = rand()%25 + 1;
        }
    }
    
    //Display the original N x N matrix
    cout<<"Original N x N matrix"<<endl;
    for(j = 0; j < N; j++)
    {
        for(k = 0; k < N; k++)
        {
            cout << array[j][k]<<"\t";
        }
        cout <<"\n";
        cout <<"\n";
    }
    
    //Rotate the N x N matrix by 90 degree
    /*int layer, offset, first, last;
    for(layer = 0; layer < N/2; layer++)
    {
        first = layer;
        last = N - 1 -layer;
        for(j = first; j < last; j++)
        {
            offset = j - first;
            
            //save top
            int top = array[first][j];
            
            //left->top
            array[first][j] = array[last-offset][first];
            
            //bottom->left
            array[last-offset][first] = array[last][last-offset];
            
            //top->right
            array[j][last] = top;
        }
    }*/
    
    for(j = 0; j < N/2; j++)
    {
        for(k = j; k < N - 1-j; k++)
        {
            int temp = array[j][k];
            array[j][k] = array[k][N-1-j];
            array[k][N-1-j] = array[N-1-j][N-1-k];
            array[N-1-j][N-1-k] = array[N-1-k][j];
            array[N-1-k][j] = temp;
        }
    }
    
    //Display the rotated N x N matrix
    cout <<"N x N matrix rotated 90 degree"<<endl;
    for(j = 0; j < N; j++)
    {
        for(k = 0; k < N; k++)
        {
            cout << array[j][k]<<"\t";
        }
        cout <<"\n";
        cout <<"\n";
    }
    
    return 0;
}
