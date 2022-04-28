#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;

int main()
{
   int n;
   cin>>n;
   getchar();
   string s;
   int x=0;

   while(n--)
   {
       getline(cin,s);
       if(s == "X++"){x++;}
       else if(s == "X--"){x--;}
       else if(s == "++X"){++x;}
       else {--x;}
   }
   cout<<x<<endl;


    return 0;
}


