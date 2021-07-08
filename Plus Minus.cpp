#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int n;
    float positive=0,negative=0,zero=0;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0;i < n;i++){
       scanf("%d",&arr[i]);
        if(arr[i]>0)
            positive++;
           else if(arr[i]<0)
               negative++;
               else
               zero++;
    }
    printf("%.5f\n%.5f\n%.5f",(float)positive/n,(float)negative/n,(float)zero/n);
    return 0;
}

