#include<bits/stdc++.h>
using namespace std;
#define maxn 205
#define rep(i,a,n) for(int i=a;i<=n;i++)
int n;
struct node{
    int nxt,v,w;
}e[maxn],cnt;
int head[maxn],vis[27][27],in[maxn];
void add(int u,int v,int w){
    e[++cnt].nxt=head[u];
    e[cnt].v=v;e[cnt].w=w;
    head[u]=cnt;
}
string s[105];
int main(){
    cin>>n>>s[1];rep(i,2,n){
        cin>>s[i];int len1=s[i-1].size(),len2=s[i].size();
        rep(j,0,min(len1-1,len2-1)){
            if(s[i][j]!=s[i-1][j]) continue;
            if(!vis[s[i-1][j]][s[i][j]])add(s[i-1][j],s[i][j],0),vis[s[i-1][j][s[i][j]]]=1,in[s[i][j]]++;
        }
    }
    
    return 0;
}