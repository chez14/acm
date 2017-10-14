#include<map>
#include<iostream>
#include<cctype>
#include<string>

using namespace std;

const char mbee[] = "`1234567890-=qwertyuiop[]\\asdfghjkl;'zxcvbnm,./";

int main() {
    map<char, char> mapper;
    int max = sizeof(mbee)/sizeof(*mbee);
    //cout << "max: " << max << endl;
    for(int i=0; i<max; i++){
        mapper[mbee[i]] = mbee[(i-2 + max)%max];
        //cout << "--  insert " << mbee[i] << " as " << mapper[mbee[i]] << endl;;
    }
    string a;
    while(getline(cin, a)) {
        for(char x:a){
            x = tolower(x);
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