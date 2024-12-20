#include <iostream>
#include <string>
using namespace std;
int main()
{   int t;
    cin>>t;
    string output="";
    for(int i=0;i<t;i++)
    {
        string s;
        cin>>s;
        if(s.length()>10){
        output=output+s[0]+to_string(s.length()-2)+s[s.length()-1]+"\n";
        }
        else{
        output=output+s+"\n";
        }
    }
    cout<<output;
}