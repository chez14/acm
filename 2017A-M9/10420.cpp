#include<iostream>
#include<map>
#include<string>

using namespace std;

int main() {
    map<string, int> kambing;
    char nama[100];
    string kota;
    int tc = 0;
    cin >> tc;
    while( tc -- > 0) {
        cin >> kota;
        cin.getline(nama, 100);
        if(kambing.find(kota) == kambing.end()) {
            kambing[kota] = 0;
        }
        kambing[kota]++;
    }
    for(auto elem : kambing) {
       cout << elem.first << " " << elem.second << endl;
    }
}