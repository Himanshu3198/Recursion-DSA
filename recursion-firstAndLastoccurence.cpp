// find first and last occurrance of given element in array using recursion 
// time and space complexity O(n)
#include<bits/stdc++.h>
using namespace std;


int firstoccur(int arr[],int n,int i,int key){
    if(i==n)
     {
         return -1;
     }

     if(arr[i]==key)
     {
         return i;

     }
     return firstoccur(arr,n,i+1,key);
}

 int lastoccur(int arr[],int n,int i,int key){

     if(i==n){
         return -1;
     }
     int restArray;
    //  cout<<"before resarrat\t"<<restArray<<"\n";
     restArray=lastoccur(arr,n,i+1,key);
    //  cout<<"this is restarray\t"<<restArray<<"\n";
     if(restArray!=-1){
         return restArray;
     }
     if(arr[i]==key){
         return i;
     }
     return -1;
 }

 int lastoccur2(int arr[],int n,int i,int key){

     if(i==-1)
     {
         return -1;
     }
     if(arr[i]==key)
     {
         return i;
     }
     return lastoccur2(arr,n,i-1,key);

    

 }

int main(){
    int arr[]={1,2,4,2,2,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    // cout<<firstoccur(arr,n,0,2)<<"\n"; 
    // cout<<lastoccur(arr,n,0,2)<<"\n";
    cout<<lastoccur2(arr,n,n-1,2)<<"\n";
}
