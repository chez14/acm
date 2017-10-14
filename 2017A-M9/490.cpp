#include<iostream>
#include<string>
#include<vector>
using namespace std;
int max(int a, int b){
    return a>b?a:b;
}
int main() {
    int maxz=0;
    vector<string> kambing;
    string ka;
    while(getline(cin, ka)){
        maxz = max(maxz, ka.size());
        kambing.push_back(ka);
    }

    for(int i=0; i<maxz; i++){
        for(int j=kambing.size()-1; j>=0; j--){
            if(kambing[j].length() <= i)
                cout << " ";
            else
                cout << kambing[j].at(i);
        }
        cout <<endl;
    }
    return 0;
}