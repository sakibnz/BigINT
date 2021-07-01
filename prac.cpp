#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--) {
        string a, b;
        cin>>a>>b;
        vector<long long> s, d;
        int len1 = a.size();
        int len2 = b.size();
        for(int i=len1-1; i>=0; i--)
            s.emplace_back(a[i]-'0');
        for(int i=len2-1; i>=0; i--) 
            d.emplace_back(b[i]-'0');
        int carry = 0;
        vector<long long> ans;
        for(int i=0; i<min(len1, len2); i++) {
            int val = s[i] + d[i] + carry;
            ans.emplace_back(val%10);
            carry = val/10;
        }
        if(len1>len2) {
            for(int i=len2; i<len1; i++) {
                int val = s[i]+carry;
                ans.emplace_back(val%10);
                carry = val/10;
            }
        }
        else if(len2>len1) {
            for(int i=len1; i<len2; i++) {
                int val = d[i]+carry;
                ans.emplace_back(val%10);
                carry = val/10;
            }
        }
        while(carry) {
            ans.emplace_back(carry%10);
            carry/=10;
        }
        reverse(ans.begin(), ans.end());
        for(long long i=0; i<ans.size(); i++)
            cout<<ans[i];
        cout<<endl;
    }
    return 0;
}