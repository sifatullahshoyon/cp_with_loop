// #include<stdio.h>
// int main(){
//     int x = 10; // TODO 10 11
//     printf("X: %d\n",x);

//     int y = x++; // TODO 10 11
//     printf("Y: %d\n",y);

//     int z = ++y; // TODO 12
//     printf("Z :%d\n", z++);
//     printf("Z %d\n", z);
//     return 0;
// }

// #include<stdio.h>
// int main(){
    
//     // ! post increment
//     int x = 10;
//     int y = x++;
//     printf("%d %d", x,y);
//     return 0;
//     // TODO: Output: 10 11

//      // ! pre increment
//     int x = 10;
//     int y = ++x;
//     printf("%d %d", x,y);
//     return 0;
//     // TODO: Output: 11 11
// }

// #include<stdio.h>
// int main(){
//     int x = 10; // 10
//     printf("1st line: %d\n" , x); 
//     ++x; // 11
//     printf("2st line: %d\n" , x); 
//     printf("%d" , ++x); // 12
//     return 0;
// }

#include<stdio.h>
int main(){
    int a = 10; // 10 11
    printf("A: %d\n", a); 
    int b = ++a; // 11 12
    printf("B: %d\n", b); 
    int c = b++; // 11 10
    printf("C: %d\n", c); 
    int d = --c; // 10
    printf("D: %d\n", d); 
    int e = d--; // 9
    printf("E: %d\n", e);   
    int f = e++; //  9 10
    printf("F: %d\n", f); // 10
    printf("%d", ++f); // 11
    return 0;
}