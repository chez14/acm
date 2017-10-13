#include<iostream>

using namespace std;

long long reverse(long long z){
    long long temp = 0;
    while(z>0){
        temp *= 10;
        temp += z%10;
        z /= 10;
    }
    return temp;
}
long long o=0;
bool is_palindrom(long long z){
    long long x = reverse(z);
    o=x;
    while(z > 0 || x > 0){
        if(z%10 != x%10)
            return false;
        z/=10;
        x/=10;
    }
    return true;
}

int main() {
    long long tc;
    cin >> tc;

    while(tc-->0){
        long long i=1, angka;
        cin >> angka;
        angka += reverse(angka);
        while(!is_palindrom(angka)){
            angka += o;
            i++;
        }
        cout << i << " " << angka << endl;
    }

    return 0;
}