#include<iostream>
#include<cmath>
#include<string>
#include<map>
#include<vector>
#include<set>
#include<cctype>
#include<algorithm>

using namespace std;
void print__(map<string, set<string>> uname, map<string, int> project) {
    map<int, vector<string>> project_sorter;
    for(auto u:uname){
        if(u.second.size() == 1){
            for(auto z:u.second) {
                project[z]++;
            }
        }
    }
    for(auto x: project) {
        project_sorter[x.second].push_back(x.first);
        //cout << x.first << " " << x.second << endl;
    }
    for(auto i=project_sorter.rbegin(); i!= project_sorter.rend(); i++){
        for(auto z:i->second){
            cout << z << " " << i->first << endl;
        }
    }
}
int main() {
    map<string, set<string>> uname;
    map<string, int> project;
    string temp, current;
    while(getline(cin, temp)){
        temp.erase(remove(temp.begin(), temp.end(), (char)13), temp.end());
        temp.erase(remove(temp.begin(), temp.end(), '\n'), temp.end());
        if(isdigit(temp[0])){
            if(temp[0] == '0')
                break;
            print__(uname, project);
            uname.clear();
            project.clear();
            continue;
        }
        if(isupper(temp[0])) {
            current = temp;
            project[current]=0;
        } else {
            uname[temp].insert(current);
        }
    }
    return 0;
}