#include<iostream>
#include <bits/stdc++.h>
using namespace std;

stack<char> temp;

void checkParenthesis(string str)
{
    for(int i=0; i<str.size(); i++)
    {
        if(temp.empty())
        {
            temp.push(str[i]);
        }
        else if((temp.top() == '(' && str[i] == ')')
                 || (temp.top() == '{' && str[i] == '}')
                 || (temp.top() == '[' && str[i] == ']'))
        {
            temp.pop();
        }
        else{
            temp.push(str[i]);
        }        
    }
    if(temp.empty())
    {
        cout<<"balanced";
        return;
    }
    cout<<"not balanced";
}

int main()
{
    string stre="()()()(){[()]}";
    checkParenthesis(stre);
    return 0;
}
