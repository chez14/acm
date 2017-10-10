#include<cstdio>
#include<cstring>

int main(){ 
    char kambing[1002];
    bool buka = true;
    while(fgets(kambing, 1000, stdin)){
        int len = strlen(kambing);
        // if(kambing[len-1] == '\n')
        //     kambing[len-1] = '\0';
        for(int i=0; i<len; i++) {
            if(kambing[i] == '"'){
                if(buka)
                    printf("``");
                else
                    printf("''");
                buka = !buka;
            } else {
                printf("%c", kambing[i]);
            }
        }
    }
    return 0;
}