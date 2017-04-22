
#include<stdio.h>
#include "include/MergeSort.h"
#include "include/GreedyKnapsack.h"
int main(void)
{   int m=80,n=6,i;
	int w[6]={20,15,10,23,18,30};
	int v[6]={40,25,16,19,23,32};
    double answer;
    MergeSort(w,v,1,6);
    answer=GreedyKnapsack(6,w,v,80);
    printf("%f",answer);
    return 0;
}

