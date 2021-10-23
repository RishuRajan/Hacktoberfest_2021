#include<iostream>
using namespace std;

class arr_stack
{
    private:
    int top;
    int size;
    char *s;

    public:
    arr_stack()
    {
        size=5;
        s=new char[size];
    }
    arr_stack(int sz)
    {
        top=-1;
        size=sz;
        s=new char[size];
    }
    void push(char a);
    void pop(char x); 
    void isMatched();  
};
void arr_stack::push(char a)
{
    if(top==size-1)
    {
        cout<<"stack overflow";
    }
    top++;
    s[top]=a;
    cout<<s[top];
}
void arr_stack::pop(char x)
{
    char a;
    a=s[top];
    if((int)x-(int)a==1)top--;
    else if((int)x-(int)a==2)
    {
        if((int)x-(int)a <100)top--;
        else top--; 
    }
}
void arr_stack::isMatched()
{
    cout<<endl;
    if(top==-1)
    {
        cout<<"parenthesis matched";
    }
    else cout<<"parenthesis not matched";
}

int length(char exp[])
{
    int count=0;
    for(int i=0;exp[i]!='\0';i++)
    {
        count++;
    }
    return count;
}
int main()
{
    char exp[]="{[(a+b])*(c+d)}";
    // cout<<length(exp);
    arr_stack st(length(exp));
    for(int i=0;exp[i]!='\0';i++)
    {
        if(exp[i] == '{' || exp[i] == '(' || exp[i] == '[')
        {
            st.push(exp[i]);
        }
        if(exp[i] == '}' || exp[i] == ')' || exp[i] == ']')
        {
            st.pop(exp[i]);
        }
    }
    st.isMatched();

    
    return 0;
}