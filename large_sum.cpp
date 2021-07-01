#include<bits/stdc++.h>
#define ll long long int
#define vi vector<long long> 
#define pb emplace_back
#define uint unsigned int
using namespace std;

vi sum(vi x, vi y) {
    int carry=0;
    vi ans;
    ll len = min(x.size(), y.size());
    for(ll i=0; i<len; i++) {
        ll val = x[i] + y[i] + carry;
        ans.emplace_back(val%10);
        carry = val/10;
    }
    if(x.size()>len) {
        for(ll i=len; i<x.size(); i++) {
            ll val = x[i] + carry;
            ans.emplace_back(val%10);
            carry = val/10;
        }
    }
    else if(y.size()>len) {
        for(ll i=len; i<y.size(); i++) {
            ll val = y[i] + carry;
            ans.emplace_back(val%10);
            carry = val/10;
        }
    }
    while(carry) {
        ans.emplace_back(carry%10);
        carry/=10;
    }
    reverse(ans.begin(), ans.end());
    return ans;
}

int main() {
    ll t;
    cin>>t;
    while(t--) {
        string a, b;
        cin>>a>>b;
        vi s;
        vi d;
        for(int i=a.size()-1; i>=0; i--) 
            s.emplace_back(a[i]-'0');
        for(int i=b.size()-1; i>=0; i--)
            d.emplace_back(b[i]-'0');

        vi result = sum(s, d);
        for(ll i=0; i<result.size(); i++)
            cout << result[i];
        cout<<endl;
    }
    return 0;
}