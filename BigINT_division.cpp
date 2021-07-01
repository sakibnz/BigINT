// A is bigInt
// B is 1<B<2^32-1; should take in long long;
// Find A%B

#include<bits/stdc++.h>
using namespace std;
int main() {
    
    int t, cs=0;
    
    cin>>t;
    while(t--) {
        string a;
        long long b;
        cin>>a>>b;
        b = abs(b);
        long long n=0;
        int len = a.size();
        for(int i=0; i<len; i++) {
            if(a[i]=='-') continue;
            n = n*10 + a[i]-'0';
            n = n % b;
        }
        cs++;
        if(n) cout<<"Case "<<cs<<": No"<<endl;
        else cout<<"Case "<<cs<<": Yes"<<endl;
    }
    return 0;
    
}