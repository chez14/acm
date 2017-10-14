#include<iostream>
#include<string>
#include<algorithm>
#include<cctype>

using namespace std;

int find_stop(string k, int start){
    for(int i=start; i<k.size(); i++){
        if(!isalpha(k[i]))
            return i;
    }
    return -1;
}

int hitung_kata(string k){
    int start,stop, jumlah=0;
    for(int i=0; i<k.size(); i++){
        if(isalpha(k[i])) {
            stop = find_stop(k, i);
            if(stop == -1){
                i = k.size();
            } else {
                i = stop-1;
            }
            jumlah++;
        }
    }
    return jumlah;
}
int main() {
    string kambing;
    while(getline(cin, kambing)){
        cout << hitung_kata(kambing) << endl;
    }
    return 0;
}