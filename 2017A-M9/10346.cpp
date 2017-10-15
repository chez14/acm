#include<iostream>

using namespace std;

int main() {
    int a, b;
    while(cin >> a >> b){
        int total = a;
        while(a >= b){
            total += a/b;
            a = a/b + a%b;
        }
        cout << total << endl;
    }

    return 0;
}