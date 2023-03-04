#include <bits/stdc++.h>
using namespace std;
int palindrome_check(string s, int start, int end) 

{
    
  
    if(end-start==1 || start==end)
    {
        return 1;
    }
    else
    {
        if(s[start]==s[end])
        {
            return palindrome_check(s,start+1,end-1); 
        }
        else
        {
            return 0;
        }
    }
}
int main()
{
	cout << "INGRESE UN NUMERO O PALABRA"<< endl;
   string s;
   cin>>s;
   int n=s.length();
   if(palindrome_check(s, 0, n-1))
   {
       cout<<"Si es palindromo"<<endl;
   }
   else
   {
       cout<<"No es palindromo"<<endl;
   }
   return 0;
}

