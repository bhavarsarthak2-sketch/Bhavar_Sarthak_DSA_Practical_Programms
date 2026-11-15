#include<iostream>
using namespace std;
class node
{
    public:
    int data;
    node *next;
    node(int x)
    {
        data=x;
        next=NULL;
    }
};
class Queue
{
    private:
    node *front;
    node *rear;
    public:
    Queue()
    {
        front=NULL;
        rear=NULL;
    }
    int empty()
    {
        if(front==NULL)
        {
            return 1;

        }
        else 
        {
            return 0;
        }
    }
    void enqueue(int x)
    {
        node *p=new node(x);
        if(empty())
        {
            front=p;
            rear=p;
        }
        else
        {
            rear->next=p;
            rear=p;
        }
    }
    int dequeue()
    {
        int x=front->data;
        node *p=front;
        front = front->next;
        delete p;
        return x;
    }
    int peek()
    {
        return(front->data);

    }
    void display()
    {
        node *q=front;
        while(q!=NULL)
        {
            cout<<"\t"<<q->data;
            q=q->next;
        }
    }

};

int main()
{
    Queue q;
   

    cout<<"Queue After enqueue operation"<<endl;
    q.enqueue(10);
    q.display();cout<<endl;

    cout<<"Queue After enqueue operatio"<<endl;
    q.enqueue(20);
    q.display();cout<<endl;

    cout<<"Queue After enqueue operatio"<<endl;
    q.enqueue(30);
    q.display();cout<<endl;

    cout<<"Queue After enqueue operatio"<<endl;
    q.enqueue(40);
    q.display();cout<<endl;

    cout<<"Queue After enqueue operatio"<<endl;
    q.enqueue(50);
    q.display();cout<<endl;

    if(!q.empty())
    {
        cout<<"Queue After Dequeue operation "<<q.dequeue()<<endl;
    }
    else
    {
        cout<<"Queue is empty!!"<<endl;
    }
    q.display();cout<<endl;

     if(!q.empty())
    {
        cout<<"Queue After Dequeue operation "<<q.dequeue()<<endl;
    }
    else
    {
        cout<<"Queue is empty!!"<<endl;
    }
    q.display();cout<<endl;

     if(!q.empty())
    {
        cout<<"Queue After Dequeue operation "<<q.dequeue()<<endl;
    }
    else
    {
        cout<<"Queue is empty!!"<<endl;
    }
    q.display();cout<<endl;

     if(!q.empty())
    {
        cout<<"Queue After Dequeue operation "<<q.dequeue()<<endl;
    }
    else
    {
        cout<<"Queue is empty!!"<<endl;
    }
    q.display();cout<<endl;

     if(!q.empty())
    {
        cout<<"Queue After Dequeue operation "<<q.dequeue()<<endl;
    }
    else
    {
        cout<<"Queue is empty!!"<<endl;
    }
    q.display();cout<<endl;

     if(!q.empty())
    {
        cout<<"Queue After Dequeue operation "<<q.dequeue()<<endl;
    }
    else
    {
        cout<<"Queue is empty!!"<<endl;
    }
    q.display();cout<<endl;

     return 0;
}
