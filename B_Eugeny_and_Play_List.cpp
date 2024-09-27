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

int finder(vector<ll>& time,ll k){
    int l=0,r=time.size()-1;
    int ans=-1;
    while(l<=r){
        int mid=l+(r-l)/2;
        if(time[mid]>=k){
            ans=mid;
            r=mid-1;
        }else{
            l=mid+1;
        }
    }
    return ans+1;
}

int main() {
    // code here
    int n,m;
    cin>>n>>m;
    vector<pair<ll,ll> > song(n); 
    vector<ll> time(n);
    long long sum=0;
    for(int i=0;i<n;i++){
        cin>>song[i].first>>song[i].second;
        //cout<<song[i].first<<song[i].second<<endl;
        sum+=song[i].first*song[i].second;
        time[i]=sum;
    }
    
    for(int i=0;i<m;i++){
        long long v;
        cin>>v;
        int s_no=finder(time,v);
        cout<<s_no<<endl;
    }

    
    return 0; 
}