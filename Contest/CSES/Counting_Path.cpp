#include <bits/stdc++.h>
using namespace std;
#define F first
#define S second
#define pb push_back
#define int ll
#define f(i,x,n) for(__int128 i=x;i<n;i++)
#define all(c) c.begin(),c.end()
using ll = long long;
using pii = pair<int,int>;
const int MOD = 1e9+7, N = 1e5 + 10;
 
void test(){
   __int128 n;
   scanf("%llu",&n);
   if(int(n) == 1){
      cout << "-1\n";
      return;
   }
   f(i,0,n-2){
      cout << "5";
   }
   cout << "54\n";
   return;
}
 
int32_t main(){
   // ios::sync_with_stdio(false);
   // cin.tie(NULL);
   int tt = 1;
   cin >> tt;
   f(i,0,tt) test();   
   return 0;
}