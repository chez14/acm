#include<iostream>
#include<string>
#include<vector>
#include<map>
#include<cctype>

using namespace std;

map<char, int> te;
void proses(string korban){
    for(char k:korban){
        if(!isalpha(k))
            continue;
        k = toupper(k);
        if(te.find(k) == te.end()){
            te[k] = 0;
        }
        te[k]++;
    }
}

map<int, vector<char>> post_proccess() {
    map<int, vector<char>> kambing;
    for(auto l: te) {
        //cout << l.second << " from " << l.first << endl;
        kambing[l.second].push_back(l.first);
    }
    return kambing;
}


int main() {
    string kambing;
    int tc;
    cin >> tc;
    getline(cin, kambing);
    while(tc-->0){
        getline(cin, kambing);
        proses(kambing);
    }
    map<int, vector<char>> guyu = post_proccess();
    for(auto g = guyu.rbegin(); g != guyu.rend(); g++)
        for(char k:g->second){
            cout << k << " " << g->first << endl;
        }

    return 0;
}