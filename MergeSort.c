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
int Merge(int w[],int v[],int p,int q,int r)
{
	int N = 20;
    int n1,n2,i,j,L1[N],R1[N],L2[N],R2[N],t;
    n1=q-p+1;
    n2=r-q;
    for(i=1;i<=n1;i++)
     {
         L1[i]=w[p+i-1];
         L2[i]=v[p+i-1];
     }
    for(j=1;j<=n2;j++)
    {
        R1[j]=w[q+j];
        R2[j]=v[q+j];
    }
    L1[n1+1]=1;
    R1[n2+1]=1;
    L2[n1+1]=0;
    R2[n2+1]=0;
    i=1;
    j=1;
    for(t=p;t<=r;t++)
    {   if(L2[i]/(L1[i]*1.0)>=R2[j]/(1.0*R1[j]))
        {   w[t]=L1[i];
            v[t]=L2[i];
            i=i+1;
        }
        else
        {  w[t]=R1[j];
            v[t]=R2[j];
            j=j+1;
        }
    }
    return 0;
}

