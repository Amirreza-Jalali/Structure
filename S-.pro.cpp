#include "/Users/apple/Desktop/computer/bits.cpp"
//#include<bits/stdc++.h>
#define int long long
using namespace std;

//Amirreza jalai   

void solve()
{
    int n;
    cout<<"n :";
    cin>>n;
    int k;
    cout<<"k :";
    cin>>k;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cout<<"a :";
        cin>>a[i];
    }
    int b[n];
    int j=0;
    for(int i=k;i<n;i++)
    {
        b[j]=a[i];
        j++;
    }
    for(int i=0;i<k;i++)
    {
        b[j]=a[i];
        j++;
    }
    cout<<"--------------------------\n";
    for(int i=0;i<n;i++)
    {
        cout<<b[i]<< "  ";
    }
    cout<<"\n---------------------------";

}
int32_t main()
{
    solve();
}