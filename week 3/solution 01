#include<iostream>
using namespace std;

void insertion(int a[],int n){
    int i,j,key;
    for(i=0;i<n;i++)
    {
        key=a[i];
        j=i-1;
        while(j>=0 && key<a[j])
        {
            a[j+1]=a[j];
            j=j-1;
        }
        a[j+1]=key;
    }
}

int main(){
  int a[10],n,i,j,cases;
  cout<<"Enter the number of test cases"<<endl;
  cin>>cases;
  for(j=0;j<cases;j++)
  {
  cout<<"Enter the limit"<<endl;
  cin>>n;
  cout<<"Enter the array elements"<<endl;
  for(i=0;i<n;i++)
  {
      cin>>a[i];
  }
  insertion(a,n);
  cout<<"Sorted array"<<endl;
  for(i=0;i<n;i++)
  {
      cout<<a[i]<<endl;
  }
  }
  return 0;
}
0
