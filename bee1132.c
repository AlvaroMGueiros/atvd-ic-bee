#include<stdio.h>
int main(){
    int X, Y, i;
    scanf("%d%d", &X,&Y);
    if (X > Y) {
        int total = 0;
        for (i = Y; i <= X; i++) {
            if (i % 13 != 0) {
                total += i;
            }
        }
