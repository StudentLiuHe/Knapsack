#include "include/GreedyKnapsack.h"
void MergeSort(int w[],int v[],int p,int r)
{   int q;
    if(p<r)
    {
        q=(p+r)/2;
        MergeSort(w,v,p,q);
        MergeSort(w,v,q+1,r);
        Merge(w,v,p,q,r);
    }
}
