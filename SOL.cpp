#include<bits/stdc++.h>
#define ll long long
#define FO(x) for(ll i=0;i<x;i++)
#define MOD 1000000007
#define debug(x) cout<<" X : "<<x<<endl;
using namespace std;

void solve()
{
    int t;
    cin>>t;
    while(t--)
    {
        int flag=0;
        string s;
        cin>>s;
        if(s[0]=='<' && s[1]=='/' && s[s.size()-1]=='>' && s.size()!=3)
        {
            //flag=0;
            for(int i=2;i<s.size()-1;i++)
            {
                if(isdigit(s[i]) || islower(s[i]))
                    continue;
                else
                {
                    cout<<"Error";
                    flag=1;
                    break;
                }
            }
            if(flag!=1)
                cout<<"Success";
        }
        else
            cout<<"Error";
        cout<<endl;
    }
    
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

    solve();

    return 0;
}
