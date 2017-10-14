#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

int main() {
    //long long a,b;
    double a ,b;
    while(cin >> a >> b){
        cout << fixed << setprecision(0) << pow(b, 1.0/a) << endl;
    }

    return 0;
}