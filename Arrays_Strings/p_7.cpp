#include <iostream>
#include <cstdlib>
#define N 4

using namespace std;

int main()
{
    srand(time(NULL));
    int array[N][N];
    int j, k, temp;
    for(j = 0; j < N; j++)
    {
        for(k = 0; k < N; k++)
        {
            temp = rand()%15+1;
            if(temp%5 != 0)
            {
                array[j][k] = temp;
            }
            else
            {
                array[j][k] = 0;
            }
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
    
    int row[N] = {0};
    int col[N] = {0};
    
    for(j = 0; j < N; j++)
    {
        for(k = 0; k < N; k++)
        {
            if(array[j][k] == 0)
            {
                row[j] = 1;
                col[k] = 1;
            }
        }
    }
    
    for(j = 0; j < N; j++)
    {
        for(k = 0; k < N; k++)
        {
            if(row[j] == 1 || col[k] == 1)
            {
                array[j][k] = 0;
            }
        }   
    }
    
    //Display the N x N matrix after setting rows and columns to 0
    cout<<"Setting Matrix to zeros"<<endl;
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
