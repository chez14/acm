#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

/*
    Because dealine is getting closer, why don't we find-review-copy-paste?
    source: https://stackoverflow.com/a/4654718/4721245
*/
bool is_number(const std::string& s) {
    return !s.empty() && std::find_if(s.begin(), 
        s.end(), [](char c) { return !isdigit(c); }) == s.end();
}

string translate_ascii_code_to_something_much_better_to_see_hehehehehe(string kambing) {
    reverse(kambing.begin(), kambing.end());
    string temp="";
    for(int i=0; i<kambing.size();){
        int ascii = ((int)kambing.at(i++) - '0') * 10;
        ascii += (int)kambing.at(i++) - '0';
        if((ascii/10)%10 == 1) {
            ascii *= 10;
            ascii += (int)kambing.at(i++) - '0';
        }

        temp += (char)ascii;
    }

    return temp;
}


int main() {
    string kambing;
    while(getline(cin, kambing)){
        kambing.erase(remove(kambing.begin(), kambing.end(), (char)13), kambing.end());
        kambing.erase(remove(kambing.begin(), kambing.end(), '\n'), kambing.end());
        if(is_number(kambing)){
            cout << translate_ascii_code_to_something_much_better_to_see_hehehehehe(kambing) << endl;
        } else {
            string temp;
            reverse(kambing.begin(), kambing.end());
            for(int i=kambing.size()-1; i>=0; i--){
                temp += to_string(kambing.at(i));
            }
            reverse(temp.begin(), temp.end());
            cout << temp << endl;
        }
    }
    return 0;
}