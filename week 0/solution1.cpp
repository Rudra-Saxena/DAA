#include<iostream>
using namespace std;

int searching(int a[],int n, int k){
   int i;
    for(i=0;i<n;i++){
        if(k==a[i]){
            return i;
        }
    }
}
int main(){
 int a[10],n,k,i;
 cout<<"Enter the limit of the array: "<<endl;
 cin>>n;
 cout<<"Enter the elements of the array: "<<endl;
 for(i=0;i<n;i++){
    cin>>a[i];
 }
 cout<<"Enter the elements to be found: "<<endl;
 cin>>k;
 int result=searching(a,n,k);
 if(result==-1){
    cout<<"Element not found "<<endl;
 }
 else{
    cout<<"Element found at: "<<result<<" index"<<endl;
 }

 return 0;
}
