#include<cstdio>

int main() {
    int tc=0;
    printf("Lumberjacks:\n");
    scanf("%d", &tc);
    while(tc-->0) {
        bool a=true, b=true;
        int temp;
        scanf("%d", &temp);
        int la=temp, lb=temp;
        for(int i=0; i<9; i++){
            scanf("%d", &temp);
            a &= temp > la;
            b &= temp < lb;
            la=temp;
            lb=temp;
        }
        if(a || b){
            printf("Ordered\n");
        } else {
            printf("Unordered\n");
        }
    }
}