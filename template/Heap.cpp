#include<bits/stdc++.h>
using namespace std;
#define maxn 10005
#define rep(i,a,n) for(int i=a;i<=n;i++)
int a[maxn],len; 
inline void up(int x){
    while(x>1&&a[x]>a[x/2]){
        swap(a[x],a[x/2]);x/=2;
    }
}
inline void swap(int x,int y){
    int t=a[x];a[x]=a[y];a[y]=t;
}
inline void down(int x){
    while(2*x<=len&&a[2*x]>a[x]||((x<<1|1)<=len)&&a[x<<1|1]>a[x]) {
        if(a[x<<1|1]>a[x<<1]) swap(x,x<<1|1),x=(x<<1|1);
        else {
            swap(x,x<<1);x<<=1;
        }
    }
}
inline void insert(int x){
    a[len++]=x;up(len);
}
inline void hdelete(int x){
    int t=a[x];a[x]=a[len--];
    if(a[x]>t) up(x);else down(x);
}
inline void build(){
    for(int i=len/2;i>=1;i--) down(i);
}
//动态
int main(){
    cin>>len;rep(i,1,len) cin>>a[i];
    build();
    cout<<a[1]<<endl;
    return 0;
}