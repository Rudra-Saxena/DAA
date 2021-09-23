#include<bits/stdc++.h>
using namespace std;

int indices(vector<int>a)
{
    int i,j=0,k=0;
    cout<<"Array"<<endl;
    for(i=0;i<a.size();i++)
    {
        cout<<a[i]<<endl;
    }
    i=0;

    for(i=0;i<a.size();i++)
    {
        for(j=i+1;j<a.size();j++)
        {
            for(k=0;k<a.size();k++)
            {
               if(a[i]+a[j]==a[k])
           {
               cout<<i<<j<<k<<endl;
           }
            }
        }
    }
}

int main()
{
    int i,n,x;
    vector<int>a;

    cout<<"Enter size"<<endl;
    cin>>n;
    cout<<"Enter the elements of the array"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>x;
        a.push_back(x);
    }
    indices(a);
}
