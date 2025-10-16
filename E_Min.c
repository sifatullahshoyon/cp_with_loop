#include<stdio.h>
#include<limits.h>
int main(){
    int n;
    // take input
    scanf("%d" , &n);
    // take a Max variable
    int mx = INT_MAX;
   
    // loop
    for(int i = 1; i <= n; i++){
        // loop number store
        int val;
        // take loop input
        scanf("%d", &val);
        // condition
        if(val < mx){
            mx = val;
        }
    }
    printf("%d" , mx);
    return 0;
}