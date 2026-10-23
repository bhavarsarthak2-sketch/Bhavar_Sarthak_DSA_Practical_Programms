#include <iostream>
using namespace std;
void bubblesort(int a[],int n)
{
    int temp;
    for(int i=0;i<n-1;i++)
    {
        for (int j=0;j<n-1;j++)
        {
            if (a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
        
    }
}
int main()
{
    int a[20],n;
    cout<<"How many elements to sort"<<endl;
    cin>>n;
    cout<<"Enter "<<n<<" Unsorted elements"<<endl;
    for (int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    bubblesort(a,n);
    cout<<"Sorted list is "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<endl;
    }

}
/*
PS D:\Sarthak k> 
> cd "d:\Sarthak k\" ; if ($?) { g++ Bubble_sort.cpp -o Bubble_sort } ; if ($?) { .\Bubble_sort }
How many elements to sort
7
Enter 7 Unsorted elements
12
25
36
89
74
55
6
Sorted list is 
6
12
25
36
55
74
89
PS D:\Sarthak k>  */