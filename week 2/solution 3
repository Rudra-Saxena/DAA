#include<bits/stdc++.h>
using namespace std;

void pairs(vector<int>a, int key)
{
    int i,j,cont=0;
    for(i=0;i<a.size();i++)
    {
        for(j=i+1;j<a.size();j++)
        {
            if(a[i]-a[j]==key || a[i]-a[j]==-key)
            {
                cont+=1;
            }
        }
    }
    cout<<"Total Pairs: "<<cont<<endl;
}

int main()
{
    int key,n,x,i;
    vector<int>a;
    cout<<"Enter the limit"<<endl;
    cin>>n;
    cout<<"Enter the elements of the array"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>x;
        a.push_back(x);
    }
    cout<<"The Array"<<endl;
    for(i=0;i<n;i++)
    {

        cout<<a[i]<<endl;
    }
    cout<<"Enter the key"<<endl;
    cin>>key;
    pairs(a,key);
    return 0;
}
