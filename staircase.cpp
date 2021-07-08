#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* readline();

// Complete the staircase function below.
void staircase(int n) {


}

int main()
{
int i,n;
scanf("%d",&n);
for(i=0;i<n;i++)
{
   for(int j=0;j<(n-i)-1;j++)
     {
      printf(" ");
     }

   for (int k=0;k<(i+1);++k){
      printf("#"); }
      printf("\n");


}

return 0;


}
