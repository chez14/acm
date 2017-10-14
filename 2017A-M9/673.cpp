#include<iostream>
#include<stack>
#include<string>
#include<algorithm>

using namespace std;

int main() {
    string a;
    int tc;
    cin >> tc;
    getline(cin, a);
    while(tc-->0){
        stack<char> kambing;
        getline(cin, a);
        a.erase(remove(a.begin(), a.end(), (char)13), a.end());
        a.erase(remove(a.begin(), a.end(), '\n'), a.end());
        for(char z:a){
            if(z == '[' || z == '('){
                //cout << "-> event: push " << z << endl;
                kambing.push(z);
            } else if(z==']' || z==')') {
                char temen = (z==']')?'[':'(';
                //cout << "-> event: pop  " << z << " of " << temen << endl;
                //cout << " ~ Top: " << kambing.top() << endl;
                if(kambing.empty() || kambing.top() != temen){
                    kambing.push('x');
                    break;
                }
                kambing.pop();
            }
        }
        cout << (kambing.empty()?"Yes":"No") << endl;
    }
}