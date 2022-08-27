#include<bits/stdc++.h>
using namespace std;
bool binarysearch(int a[],int n,int x){
    int l=0;int r=n-1;
    while(l<=r){
  int mid=(l+r)/2;
if(a[mid]==x){return true;}
else if(a[mid]<x){l=mid+1;}
else {r=mid-1;}

    }
    return false;
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;++i){
        cin>>a[i];
    }
cout<<binarysearch(a,n,5);
    return 0;
}