#include<cstdio>

int get_digit(int real){
    int temp = 0;
    while(real > 9){
        temp = real;
        int t = 0;
        while(temp > 0){
            t += temp%10;
            temp /= 10;
            //printf("-- Preparing %d\n", temp);
        }
        real = t;
        //printf("=== FINISHED %d\n", real);
    }
    return real;
}

int main() {
    int k;
    while(scanf("%d", &k) == 1) {
        if(k == 0)
            break;
        printf("%d\n", get_digit(k));
    }
    return 0;
}