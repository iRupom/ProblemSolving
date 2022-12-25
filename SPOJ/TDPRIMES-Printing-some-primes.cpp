#include<bits/stdc++.h>
using namespace std;
 
int n=99998953;
 
int status[3200000];
 
bool check(int n,int pos)
{
    return (bool)(n&(1<<pos));
}
 
int Set(int n,int pos)
{
    return n | (1<<pos);
}
 
void seive()
{
 
    int limit=sqrt(n);
 
    for(int i=3; i<=limit; i+=2)
    {
        if(!check(status[i/32],i%32))
        {
 
            for(int j=i*i; j<=n; j+=i*2)
                status[j/32]=Set(status[j/32],j%32);
        }
    }
 
    puts("2");
 
    int s=1;
 
    for(int i=3;i<=n;i+=2)
        if(check(status[i/32],i%32)==0)
        {
            s++;
            if(s%100==1)
                cout<<i<<endl;
        }
}
 
int main()
{
    seive();
 
    return 0;
}
