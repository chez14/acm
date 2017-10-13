#include<iostream>

using namespace std;

int main() {
    int tc;
    cin >> tc;
    bool first = true;
    while(tc-->0){
        int a, freq;
        cin >> a >> freq;
        for(int i=0; i<freq; i++){
            if(!first)
                cout << endl;
            first = false;
            for(int j=1; j<=a; j++){
                for(int k=0; k<j; k++){
                    cout << j;
                }
                cout << endl;
            }
            for(int j=a-1; j>0; j--){
                for(int k=0; k<j; k++){
                    cout << j;
                }
                cout << endl;
            }
        }
    }
    return 0;
}