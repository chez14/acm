#include<cstdio>
#include<vector>
#include<cstring>
using namespace std;
int main(){
    char kambing[131];
    int tc=0;
    scanf("%d", &tc);
    fgets(kambing, 128, stdin);
    vector<char> ka;
    while(tc-->0){
        ka.clear();
        //scanf("%s", kambing);
        fgets(kambing, 128, stdin);
        // if(kambing[0] == ']' || kambing[0] == ')')
        //     ka.push_back('x');
        char *pos;
        if ((pos=strchr(kambing, '\n')) != NULL)
            *pos = '\0';
        int maks = strlen(kambing);
        for(int i=0; i<maks; i++ ) {
            if(kambing[i] == ']' || kambing[i] == ')') {
                char temen = (kambing[i] == ']'?'[':'(');
                //printf("<<{%c-%c}  ", kambing[i], temen);
                if(ka.empty() || ka.back() != temen){
                    ka.push_back('n');
                    break;
                } else {
                    ka.pop_back();
                }
            } else if(kambing[i] == '[' || kambing[i] == '(') {
                //printf("^{%c}  ", kambing[i]);
                ka.push_back(kambing[i]);
            }
        }
        //printf(" ||| ");
        printf("%s\n", (ka.empty()?"Yes":"No"));
    }
    return 0;
}