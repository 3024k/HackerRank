#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char s[1024];
    int i,len;

    scanf("%[^\n]", s);

    len = strlen(s);
    i=0;
    //Write your logic to print the tokens of the sentence here.
    while(i<len){
        if (s[i] != ' ') {
          printf("%c", s[i]);

        }
        else{
            printf("\n");
        }
        i++;
    }
    return 0;
}


