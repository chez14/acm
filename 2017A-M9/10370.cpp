#include<iostream>
#include<iomanip>

using namespace std;

int main() {
    int tc;
    cin >> tc;
    while(tc-->0){
        int n;
        cin >> n;
        int k[n];
        double jum=0;
        for(int i=0; i<n; i++){
            cin >> k[i];
            jum += k[i];
        }
        jum /= n;
        int ok=0;
        for(int i=0; i<n; i++){
            if(k[i]>jum){
                ok++;
            }
        }
        cout << fixed << setprecision(3);
        cout << ((double)ok/(double)n * 100.0) << '%'<< endl;
    }
    return 0;
}