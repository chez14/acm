#include<iostream>
#include<string>
#include<cctype>

using namespace std;

void print(char k, int d){
    while(d-->0)
        cout << k;
}

void proses(string perintah){
    int temp=0;
    for(char kambing:perintah){
        if(isdigit(kambing)){
            temp += kambing - '0';
        } else {
            if(kambing == 'b') {
                print(' ', temp);
                temp=0;
            } else if(kambing == '!') {
                cout << endl;
                temp=0;
            } else {
                print(kambing, temp);
                temp=0;
            }
        }
    }
    cout << endl;
}

int main() {
    string kam;

    while(getline(cin, kam)){
        proses(kam);
    }

    return 0;
}