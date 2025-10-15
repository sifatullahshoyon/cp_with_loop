#include<stdio.h>
int main(){
    
    // for(int i = 1; i<=5; ++i){
    //     printf("%d\n",i);
    // }

    // post increment
    int x = 10;
    int y = x++;
    printf("%d %d", x,y);
    return 0;
    // TODO: Output: 10 11

     // pre increment
    int x = 10;
    int y = ++x;
    printf("%d %d", x,y);
    return 0;
    // TODO: Output: 11 11

    
}