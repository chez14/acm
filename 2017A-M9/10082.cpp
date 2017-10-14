#include<map>
#include<iostream>
#include<cctype>

using namespace std;

const char mbee[] = "`1234567890-=qwertyuiop[]\\asdfghjkl;'zxcvbnm,./";

int main() {
    map<char, char> mapper;
    int max = sizeof(mbee)/sizeof(*mbee);
    for(int i=0; i<max; i++){
        mapper[toupper(mbee[i])] = toupper(mbee[(i-1 + max)%max]);
        //cout << "--  insert " << mbee[i] << " as " << mapper[mbee[i]] << endl;;
    }
    char kambing;

    string a;
    while(getline(cin, a)) {
        for(char x:a){
            if(mapper.find(x) == mapper.end() && isspace(x)){
                cout << x;
            } else {
                cout << mapper[x];
            }
        }
        cout << endl;
    }
    return 0;
}