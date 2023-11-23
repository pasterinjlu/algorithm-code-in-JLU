#include<bits/stdc++.h>
int a[10005];
//二分查找的判定树
//[l,r]
//终止条件： [R+1,R]
int BS1(int n,int k){
    int l=0,r=n-1,mid=0;
    while(l<=r){
        mid=((l+r)>>1);
        if(a[mid]==k) return mid;
        else if(a[mid]<k) l=mid+1;
        else r=mid-1;
    }
}
//[L,r)
//中止条件 [L,L]
int BS2(int n,int k){
    int l=0,r=n,mid=0;
    while(l<r){
        mid=((l+r)>>1);
        if(a[mid]==k) return mid;
        else if(a[mid]<k) l=mid+1;
        else r=mid;
    }
}
//[l,R)
//锁定左侧边界
int BS3(int n,int k){
    int l=0,r=n,mid=0;
    while(l<r){
        mid=((l+r)>>1);
        if(a[mid]>=k) r=mid;
        else l=mid+1;
    }
    return l;
}
//[l,R)
//锁定右侧边界
int BS4(int n,int k){
    int l=0,r=n,mid=0;
    while(l<r){
        mid=((l+r)>>1);
        if(a[mid]>=k) r=mid;
        else l=mid+1;
    }
    return l;
}