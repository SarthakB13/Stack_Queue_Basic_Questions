#include<iostream>
using namespace std;

int stack[100], n=100, top=-1;

void push(int num)
{
    if(top>=n-1)
        cout<<"Stack OOverflow";
    
    else{
        top++;
        stack[top]=num;
    }
}
void pop()
{
    if(top<=-1)
        cout<<"Stack Underflow";

    else{
        cout<<"The popped element is "<< stack[top] <<endl;
        top--;
    }
}
void display()
{
    if(top>=0)
    {
        cout<<"Stack elements are:";
        for(int i=top; i>=0; i--)
        {
            cout<<stack[i]<<" ";
        }
        cout<<endl;
    }
    else
        cout<<"stack is empty";
}
void peek()
{
    if(top<=-1)
        cout<<"Stack Underflow";

    else
    {
        cout<<"The top element is "<< stack[top] <<endl;
    }
}
bool empty()
{
    if(top<=-1)
        return true;

    else
        return false;
}
void search(int num)
{
    if(top<=-1)
    {
        cout<<"Stack Empty";
        return;
    }
    for(int i=top; i>=0; i--)
    {
        if(stack[i]==num)
        {
            cout<<"element found";
            return;
        }
    }
}

int main()
{
    push(1);
    push(2);
    push(3);
    push(4);
    push(5);
    pop();
    pop();
    pop();
    display();
} 