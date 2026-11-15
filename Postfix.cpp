#include <iostream>
#include<cmath>
using namespace std;
class Stack {
private:
int arr[100];
int top;
public:
Stack() {
top = -1;
}
void push(int val) {
arr[++top] = val;
}
int pop() {
int p = arr[top--];
return p;
}
};
int evaluate(char x,int op1,int op2)
{
if(x=='+') return(op1+op2);
if(x=='-') return(op1-op2);
if(x=='*') return(op1*op2);
if(x=='/') return(op1/op2);
if(x=='%') return(op1%op2);
if(x=='$') return(pow(op1,op2));
}
int main(void)
{
Stack s;
char x;
int op1,op2,val;
cout<<"\n Enter postfix Expression :";
while((x= getchar()) != '\n')
{
if(isdigit(x))
{
s.push(x-48);
}
else
{
op2=s.pop();
op1=s.pop();
val=evaluate(x,op1,op2);
s.push(val);
}
}
val=s.pop();
cout<<"\n Answer="<<val;
}
/*
PS D:\Sarthak k Bhavar> 

> cd "d:\Sarthak k Bhavar\" ; if ($?) { g++ Postfix.cpp -o Postfix } ; if ($?) { .\Postfix }

 Enter postfix Expression :2+3-(9*7)

 Answer=41
PS D:\Sarthak k Bhavar> 

*/
