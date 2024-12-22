#include <iostream>
#include <string>
using namespace std;
int main()
{   string s;
    cin>>s;
    int n=s.length()-1;
    int flag=0;
    for(int a=0;a<=n;a++)
    {
        if(s[a]!=s[n])
        {
            ++flag;
        }
        --n;
    }
    if(flag==1 || (flag<=1 && s.length()%2==1)){
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
}