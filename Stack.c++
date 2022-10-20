#include<iostream>
using namespace std;
 int stack[100] ,n=100, top=-1,i,ch,ele;
    void push();
    void pop();
    void display();
int main()
{
    int stack[100] ,n=100, top=-1,i,ch,ele;
    void push();
    void pop();
    void display();
    cout<<"1. Push the element in stack"<<endl;
    cout<<"2. Pop the element in stack"<<endl;
    cout<<"3. Display the elements are"<<endl;
    cout<<"4. Exit"<<endl;
    do
    {
        cout<<"Enter your choice:"<<endl;
        cin>>ch;
        switch(ch)
        {
            case 1:
           
            push();
            break;
            case 2:
            pop();
            break;
            case 3:
            display();
            break;
            case 4:
            cout<<"Exit"<<endl;
            break;
            default:
            cout<<"Invalid choice"<<endl;
        }
    }   
    while(ch!=4);
    return 0;
}

void push()
{
     cout<<"Enter the elements you want to push:"<<endl;
     cin>>ele;
    if(top>=n-1)
    {
        cout<<"Stack is Overflow"<<endl;
    }
    else
    {
        top++;
        stack[top]=ele;
    }
}
void pop()
{
    if(top<=0)
    {
        cout<<"Stack is empty"<<endl;
    }
    else
    {
        cout<<"The pop element of stack is :"<<stack[top]<<endl;
        top--;
    }
}
void display()
{
   if(top>=0)
   {
    cout<<"The stack elements are:"<<endl;
    for(i=top; i>=0; i--)
    {
        cout<<stack[i]<<endl;
    }
   }
   else
   {
    cout<<"Stack is empty"<<endl;
   }
}