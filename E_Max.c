#include<stdio.h>
#include<limits.h>
int main(){
    int n;
    // take input
    scanf("%d" , &n);
    // take a max variable
    int mx = INT_MIN;
    // loop
    for(int i = 1; i <= n; i++){
        // loop theke jei input gulo aslo ta val te stor kora
        int val;
        // loop theke input neoya
        scanf("%d" , &val);
        // check condition
        if(val > mx){
            // update mx value;
            mx = val;
        }
    }
    printf("%d", mx);

    return 0;
}