#include "include/GreedyKnapsack.h"
double GreedyKnapsack(int n,int w[],int v[],int m)
{   int i=1,t=m;
    double ans=0;
    while(t>0&&i<=n)
    {
        if(t/(1.0*w[i])>1)
      {
         t=t-w[i];
         ans=ans+v[i];
      }
        else
     {
       ans=ans+(t/(1.0*w[i])*v[i]);
       t=0;
     }
       i=i+1;
   }
   return ans;
}
