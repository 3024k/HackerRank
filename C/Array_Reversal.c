#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i;
    scanf("%d",&n);
    int N[n];
    for(i=0;i<n;i++){
        scanf("%d",&N[i]);
    }
    for(i=n-1;i>=0;i--){
        printf("%d ",N[i]);
    }
}


