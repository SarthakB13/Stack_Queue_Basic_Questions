#include <bits/stdc++.h>
using namespace std;



void reverse(char str[])
{
	int n = strlen(str);
    stack<char> st;
	for (int i = 0; i < n; i++)
		st.push(str[i]);

	for (int i = 0; i < n; i++)
    {

		str[i] = st.top();
        st.pop();
    }
}

int main()
{
	char str[] = "HelloSarthak";

	reverse(str);
	cout << "Reversed string is " << str;

	return 0;
}
