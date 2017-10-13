#include<iostream>

using namespace std;

int main() {
    int hay;
    while(cin >> hay){
        int temp = 0;
        for(int i=0; i<4; i++){
            temp = (temp<<8) | ((hay>>(8*i))&0xFF);
        }
        cout << hay << " converts to " << temp << endl;
    }
    
    return 0;
}