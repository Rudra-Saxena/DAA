#include<iostream>
using namespace std;

int LS(int a[],int n,int key, int loop)
{
    int i,j;
     for(j=0;j<loop;j++)
      {
    for(i=0;i<n;i++)
    {
        if(a[i]==key)
        {
            return i;
        }
    }
    return -1;
      }
}

int main()
{
    int loop,n,i,j,a[10],key;
    cout<<"Enter the number of test cases"<<endl;
    cin>>loop;
    for(j=0;j<loop;j++)
    {
        cout<<"Enter the limit"<<endl;
        cin>>n;
        cout<<"Enter the elements"<<endl;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        cout<<"Enter the key"<<endl;
        cin>>key;
        int p=LS(a,n,key,loop);
        if(p==-1)
          {
            cout<<"Element not found"<<endl;
          }
         else{
            cout<<"Present"<<p<<endl;
           }
    }


}

