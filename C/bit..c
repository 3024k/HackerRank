#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k) {
  //Write your code here.
  int mx_OR=0, mx_AND=0, mx_XOR = 0;
  int a,b;
  for(a = 1; a<n; a++){
      for(b=a+1;b<=n;b++){
          if(((a&b)>mx_AND) && ((a&b)<k)){
              mx_AND = (a&b);
          }
          if (((a|b)>mx_OR) && ((a|b) < k)) {
            mx_OR = (a|b);
          }
          if (((a^b) > mx_XOR) && ((a^b) < k) ){
            mx_XOR = (a^b);
          }
      }
  }
  printf("%d\n%d\n%d",mx_AND,mx_OR,mx_XOR);

}

int main() {
    int n, k;

    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);


    return 0;
}

