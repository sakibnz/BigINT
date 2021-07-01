// Round a Big Double Number

#include<bits/stdc++.h>
using namespace std;
int main() {
    string a;
    cin>>a;
    for(int i=0; i<a.length; i++) {
        if(a[i]=='.') {
            for(int j=i+2; j<a.length; j++) {
                if(a[j]-'0'>=5) {
                    a[j-1] = a[j-1] + 1
                }
            }
            if(a[i+1]-'0'>=5) {
                a[i-1] = a[i-1]-'0'+1+'0';
                a[i] = '\0';
                break;
            }
        }
    }
}
