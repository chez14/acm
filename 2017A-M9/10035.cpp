#include<stdio.h>

int get_carry(int a, int b) {
    int temp=0, tmp=0, carry=0;
    while(a > 0 || b > 0){
        tmp = (a%10+b%10+carry)/10;
        temp += ( tmp >= 1) ? 1 : 0;
        carry = tmp;
        a/= 10; b /= 10;
    }
    return temp;
}

int main() {
    int a, b;
    while(scanf("%d %d", &a, &b)){
        if(a==b && a==0)
            break;
        int z = get_carry(a,b);
        if(z == 0)
            printf("No ");
        else
            printf("%d ", z);
        
        printf("carry operation%s\n", (z>1?"s.":"."));
    }
    return 0;
}