#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int t;
    cin>>t;
    string s;
    for(int i=0;i<t;i++)
    {
        cin>>s;
        int l=s.length();
        for(int j=0;j<l;j++)
        {
            if(j%2==0)
             {
                 cout<<s[j];
             }
        }
        cout<<" ";
        for(int k=0;k<l;k++)
        {
            if(k%2!=0)
             {
                 cout<<s[k];
             }
        }
        cout<<"\n";
    }
    return 0;
}

