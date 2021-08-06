// Time Complexity : O(1)
// Space Complexity : O(1)

#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll g1, s1, b1, g2, s2, b2;
        cin>>g1>>s1>>b1>>g2>>s2>>b2;
        
        if((g1+s1+b1)>(g2+s2+b2))    
            cout<<"1"<<endl;
        else 
            cout<<"2"<<endl;
    }
    
}
