#include<bits/stdc++.h>
using namespace std;

int main()
{
   int t;
   cin>>t;
   while(t--){
    int n,m;
    cin>>n>>m;
    vector<vector<int>>ar(n,vector<int>(m,0));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>ar[i][j];
        }
    }
    set<vector<int>>s;
    for(int i=0;i<n;i++){
        auto v=ar[i];
        s.insert(v);
    }
    vector<vector<int>>ans;
    for(auto v:s)
        ans.push_back(v);
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[0].size();j++){
            cout<<ans[i][j]<<' ';
        }
        cout<<endl;
      }
   }
}
