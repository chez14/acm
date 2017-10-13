#include<cstdio>
bool is_leap(int year){
    return (year%100 || !(year%400)) && (!(year%4));
}

bool is_huluculu(int year){
    return !(year%15);
}

bool is_pseudo_bulukulu(int year){
    return !(year%55);
}

int main() {
    int year;
    while(scanf("%d", &year)==1){
        bool leap = is_leap(year);
        bool huluculu = is_huluculu(year);
        bool bulukulu = is_pseudo_bulukulu(year);
        if(!leap && !huluculu && !bulukulu){
            printf("This is an ordinary year.\n\n");
            continue;
        }
        if(leap)
            printf("This is leap year.\n");
        if(huluculu)
            printf("This is huluculu festival year.\n");
        if(leap && bulukulu)
            printf("This is bulukulu festival year.\n");
        printf("\n");
    }
}