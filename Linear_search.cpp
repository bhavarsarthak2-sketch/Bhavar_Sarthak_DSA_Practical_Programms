1#include<iostream>
using namespace std;
int linear_search(int a[],int n,int x)
{
    for(int i=0;i<n;i++)
    {
        if (a[i]==x)
        {
            return i;
        }
       
        
        
    }
      return -1;
}
int main()
{
    int n;
    int a[20];
    cout<<"Enter the size of the Array"<<endl;
    cin>>n;
    cout<<"Enter"<< n <<"Integer"<<endl;
    for (int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int x;
    cout<<"Enter the target element to search:"<<endl;
    cin>>x;
    int result=linear_search(a,n,x);
    if (result==-1)
    {
        cout<<"Element not found"<<endl;
    }
    else
    {
        cout<<"Element found at index:" <<result;
    }
    return 0;
}


// output :PS C:\Users\Students> cd "d:\Sarthak k\" ; if ($?) { g++ Linear_search.cpp -o Linear_search } ; if ($?) { .\Linear_search }
Enter the size of the Array
10
Enter10Integer
1 2 3 4 5 6 7 8 9 10
Enter the target element to search:
5
Element found at index:4