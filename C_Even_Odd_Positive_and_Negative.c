#include<stdio.h>
int main(){
    int n;
    int x;
    int even = 0, odd = 0, pos = 0, neg = 0;
    scanf("%d" , &n);
    for(int i = 1; i <= n; i++){ 
        // যেহেতু আমি জানি না যে, আমার ইনপুট আসলে কত পর্যন্ত থাকবে তাই আমি লুপ চালিয়ে ফাইলের সকল ইনপুট কে নিয়ে নিলাম এবং x variable এ stor করে রাখলাম।
        scanf("%d", &x);

        // printf("%d\n", x);

        // TODO : Even & Odd Check Condition
        if(x % 2 == 0){
            even++;
        }else{
            odd++;
        }
        // TODO : Positive & Negative Check Condition
        if(x > 0){
            pos++;
        } else if(x < 0){
            neg++;
        }
    }
    printf("Even: %d\n", even);
    printf("Odd: %d\n", odd);
    printf("Positive: %d\n", pos);
    printf("Negative: %d\n", neg);
        
    return 0;
}