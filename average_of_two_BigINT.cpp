#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    for(int test=1; test<=t; test++) {
        //sum
        string str1, str2, avg;
        cin>>str1>>str2;
        vector<long long> tsum;

        if(str1.length()>str2.length()) swap(str1, str2);
        int n1 = str1.length(), n2 = str2.length();
        int diff = n2-n1, carry = 0;
        for(int i=n1-1; i>=0; i--) {
            int sum = (str1[i]-'0') + (str2[i+diff]-'0') + carry;
            tsum.emplace_back(sum%10);
            carry = sum/10;
        }
        for(int i=diff-1; i>=0; i--) {
            int sum = (str2[i]-'0') + carry;
            tsum.emplace_back(sum%10);
            carry = sum/10;
        }
        if(carry)
            tsum.emplace_back(carry);
        reverse(tsum.begin(), tsum.end());

        //average
        int len = tsum.size(), n=0;
        for(int i=0; i<len; i++) {
            n = n*10 + tsum[i];
            if(i==0 && n/2==0)
                n = n%2;
            else {
                avg.push_back(n/2 + '0');
                n = n%2;
            }
        }
        cout<<"Case "<<test<<": "<<avg<<endl;
    }
    return 0;
}
