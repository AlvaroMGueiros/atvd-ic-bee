#include <stdio.h>

int main() {

  int N,i,x,y,z;

    i = 1;
    scanf("%i",&N);

    if (1<N && N <1000){
        while(i<=N){
            x = pow(i,1);
            y = pow (i,2);
            z = pow (i,3);
            printf("%i %i %i\n",x,y,z);
            i++;
         }
    }

    return 0;
}
