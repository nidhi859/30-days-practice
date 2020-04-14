#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";
     
    int f;
    double e;
    string t;
    cin>>f;
    cin>>e;
    cin.ignore(); 
    getline(cin,t);

    cout<<i+f<<endl;

    cout<<fixed<<setprecision(1)<<d+e<<endl;
    
    cout<<s<<t<<endl;
    
 
    return 0;
}
