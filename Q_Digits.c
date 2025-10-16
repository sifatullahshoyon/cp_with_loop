#include<stdio.h>
int main(){
    int t;
    scanf("%d" , &t);
    // loop
    for(int i = 1; i <= t; i++){
         // the digits of that number from right to left separated by space.
        int n;
        scanf("%d" , &n);
        do{
            {
                printf("%d " , n % 10);
                n /= 10;
            }
        } while (n != 0);
        
        printf("\n");
    }

    return 0;
}