#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <string>

using namespace std;
typedef long long int ll;

int main() {
    // code here
    int q;
    cin>>q;
    while(q--){
        ll n,m;
        cin>>n>>m;
        ll cur_time=0;
        bool ans=true;
        ll mint=m, maxt=m;// temp ranges
        for(int i=0;i<n;i++){
            ll t,l,h;
            cin>>t>>l>>h;
            ll buffer_time=t-cur_time;
            mint-=buffer_time;
            maxt+=buffer_time;

            mint=max(mint,l);
            maxt=min(maxt,h);

            if(mint>maxt){
                ans=false;
                
            }

            cur_time=t;
        }
        if(ans==true) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}