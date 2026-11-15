#include<iostream>
using namespace std;

int G[20][20],visited[20],n;
void DFS(int i)
{
    int j;

    cout<<i<<" ";
    visited[i]=1;
    for(j=0;j<n;j++)
    {
        if(!visited[j] && G[i][j]==1)
        DFS(j);

    }
}

int main()
{
    int i,j;
    cout<<"Enter the number of vertices :";
    cin>>n;

    cout<<"Enter the Adjacency matrix of the Graph : \n";
    for (i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>G[i][j];

        }
    }

    for(i=0;i<n;i++)
    visited[i]=0;
    cout<<"DFS Travesal is \n";
    DFS(0);

    return 0;
}
/*
PS C:\Users\Students> cd "d:\Sarthak k Bhavar\" ; if ($?) { g++ Depth_first_Search.cpp -o Depth_first_Search } ; if ($?) { .\Depth_first_Search }
Enter the number of vertices :4
Enter the Adjacency matrix of the Graph : 
0 1 0 1
1 0 1 0
0 1 0 1
1 0 1 0
DFS Travesal is 
0 1 2 3 
PS D:\Sarthak k Bhavar> 
*/

