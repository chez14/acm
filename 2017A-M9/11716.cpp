#include<iostream>
#include<string>
#include<cmath>
#include<algorithm>

using namespace std;

int main() {
    int tc;
    cin >> tc;
    string kambing;
    getline(cin, kambing);
    while(tc-->0){
        getline(cin, kambing);
        kambing.erase(remove(kambing.begin(), kambing.end(), (char)13), kambing.end());
        kambing.erase(remove(kambing.begin(), kambing.end(), '\n'), kambing.end());
        int length = sqrt(kambing.size());
        // cout << "---- len: " << kambing.length() << " :::: " << length << endl;
        // //cout << "---- char akhir: " << (int)kambing.at(kambing.length()) << endl;
        // for(int i=0; i<kambing.size(); i++) {
        //     cout << (int)kambing.at(i) << " ";
        // }
        // cout << endl;
        if((kambing.size()) != (length*length)){
            cout << "INVALID" << endl;
            continue;
        }
        for(int i=0; i<length; i++){
            for(int j=0; j<length; j++){
                cout << kambing.at((i+(j*length))%kambing.length());
            }
        }
        cout << endl;
    }
    return 0;
}