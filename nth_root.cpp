#include<bits/stdc++.h>
using namespace std;
double pow(double mid , int n)
{
    double ans = 1.0;
    for(int i = 1;i<=n;i++)
    ans *= mid;
    return ans;
}
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n , m;
        cin>>m >>n;
        double low = 1.0 , high = m ;
        double ans = 0.0;
        while(high-low > 1e-6)
        {
            double mid = (high + low)/ 2.0;
            if(pow(mid , n) <= m)
            {
                ans = mid;
                low = mid;
            }
            else 
            high = mid;
        }
        cout<<ans<<endl;
    }
}
