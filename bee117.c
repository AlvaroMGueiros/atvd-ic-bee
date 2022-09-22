#include <stdio.h>

int main()
{
   double n,media,c=0,x=0;
  
     while(1)
  {
     if(x==2)
    break;
  scanf("%lf", &n);
     if(n>=0 && n<=10){
       x++;
       c+=n;
     }
   else
 printf("nota invalida\n");
     }
    media=c/2.00;
 printf("media = %.2lf\n", media);

}
