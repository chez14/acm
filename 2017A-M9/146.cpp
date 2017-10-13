#include<iostream>
#include<algorithm>
#include<string>
#include<cstring>

using namespace std;

int main() {
    string ka;
    while(cin >> ka){
        if(ka == "#"){
            break;
        }
        char kambing[100];
        strcpy(kambing, ka.c_str());
        if(next_permutation(kambing,kambing+ka.size())){
            cout << kambing << endl;
        } else {
            cout << "No Successor" << endl;
        }
    }
    return 0;
}