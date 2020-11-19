#include <iostream>
using namespace std;

int main()
{
  long n;
  while(cin >> n){
    long a=0, c=0, b=0, m;
    long k = 2;
    m = n;
    long t[n+1];
    for(int i=0;i<=n;i++){
      t[i] = 0;
    }

    while(n>1)
    {
      while(n%k == 0)
      {
        t[k-1] += 1;
        n /= k;
      }
      k++;
    }
    while(c<m)
    {
      if(t[c]==0)
      {
        cout<<"";
      }
      if(t[c]==1)
      {
        cout<<c+1;
        break;
      }
      if(t[c]>1)
      {
        cout<<c+1<<"^"<<t[c];
        break;
      }
      c=c+1;
    }

    c=c+1;

    while(c<m)
    {
      if(t[c]==0)
      {
        cout<<"";
      }
      if(t[c]==1)
      {
        cout<<" * "<<c+1;
      }
      if(t[c]>1)
      {
        cout<<" * "<<c+1<<"^"<<t[c];
      }
      c=c+1;
    }
    cout<<'\n';
  }
}
