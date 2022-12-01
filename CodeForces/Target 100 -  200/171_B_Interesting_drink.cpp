//       *Author: Md Sohanur Rahman Hridoy* ​

//In the name of ALLAH, the Most Gracious, the Most Merciful...

#pragma GCC optimize("Ofast")
#pragma GCC optimize("O3,unroll-loops")

#include"bits/stdc++.h"
#define int               long long
#define pb                push_back
#define ppb               pop_back
#define pf                push_front
#define ppf               pop_front
#define endl              '\n'
#define fo(i, n)          for(int i = 0; i < n; i++)
#define Fo(i,k,n)         for(int i = k;k<n?i<n:i>n;k<n?i++:i--)
using namespace std;

void solve(){
    int n; cin >> n;
    vector<int>f(1e5+1);
    vector<int>pf(1e5+1);
    vector<int>v;
    fo(i,n){
        int x; cin >> x;
        v.pb(x);
        f[v[i]]++;
    }
    pf[0] = 0;
    for(int i = 1; i<=1e5;i++){
        pf[i] = pf[i-1]+f[i];
    }
    int q; cin >> q;
    while (q--)
    {
        int x; cin >> x;
        if(x > 1e5){
            cout << n << endl;
        }else{
            cout << pf[x] << endl;
        }
    }
    
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    t = 1;
    //int cs = 1;
    //cin >> t;
    while (t--){
        //cout << "Case-#" << cs <<": ";
        solve();
        //cs++;
    }
}