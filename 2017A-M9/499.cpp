#include<iostream>
#include<string>
#include<vector>
#include<map>
#include<cctype>

using namespace std;

map<int, vector<char>> proses(string korban){
    map<char, int> te;
    for(char k:korban){
        if(!isalpha(k))
            continue;

        if(te.find(k) == te.end()){
            te[k] = 0;
        }
        te[k]++;
    }

    map<int, vector<char>> kambing;
    for(auto l: te) {
        //cout << l.second << " from " << l.first << endl;
        kambing[l.second].push_back(l.first);
    }

    return kambing;
}


int main() {
    string kambing;
    while(getline(cin, kambing)){
        map<int, vector<char>> guyu = proses(kambing);
        for(char k:guyu.rbegin()->second){
            cout << k;
        }
        cout << " " << guyu.rbegin()->first << endl;
    }
    return 0;
}