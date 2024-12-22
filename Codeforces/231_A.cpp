#include <iostream>
#include <sstream>
using namespace std;
int main() {
    int t;
    cin>>t;
    cin.ignore();
    int count=0;
    for(int i=0;i<t;i++)
    {
        int a,b,c;
        string input;
        getline(cin,input);
        stringstream ss(input);
        ss >> a >> b >> c;
        if((a+b+c)>=2)
        {
            ++count;
        }
    }
    cout<<count;
}
