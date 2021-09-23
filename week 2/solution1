#include<bits/stdc++.h>
using namespace std;

int Keys(vector<int>a,int key)
{
    int i;
     for(i=0;i<a.size();i++)
     {
         if(a[i]==key)
         {
             return i;
         }
     }
     return -1;
}

void copies(vector<int>a,int key)
{
    int i,cont=0;
     for(i=0;i<a.size();i++)
     {
         if(a[i]==key)
         {
             cont+=1;
         }
     }
     cout<<"Duplicate key"<<cont<<endl;
}

int main()
{
    int key,x,n,i;
    vector<int>a;
    cout<<"Enter the limit"<<endl;
    cin>>n;
    cout<<"Enter the sorted arrays"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>x;
        a.push_back(x);

    }
    cout<<"Sorted Array"<<endl;
    for(i=0;i<a.size();i++)
    {
        cout<<a[i]<<endl;
    }
    cout<<"Enter the key to be found"<<endl;
    cin>>key;
    int p=Keys(a,key);
    if(p==-1)
    {
        cout<<"Key not found"<<endl;
    }
    else{
        cout<<"Key found at :"<<p<<endl;
    }
    copies(a,key);
    return 0;
}
