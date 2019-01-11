#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n,i,sum;
    scanf("%d",&n);
    int N[n];
    for(i=0;i<n;i++){
        scanf("%d",&N[i]);
    }
    sum = 0;
    for (i = 0; i < n; i++) {
      sum += N[i];
    }
    printf("%d",sum);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}


