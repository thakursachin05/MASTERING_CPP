// https://www.hackerrank.com/challenges/c-tutorial-pointer/problem?isFullScreen=true
// A program to demonstrate pointers in cpp


#include <stdio.h>

void update(int *a,int *b) {
    int temp = *a; 
    *a = *a + *b;
    if(temp- *b>0){
        *b = temp - *b;
    }
    else *b = *b - temp;
    
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}