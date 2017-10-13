#include<iostream>
#include<string>

using namespace std;

bool is_vowel(char kambing){
    return (kambing == 'A' || kambing == 'a') ||
        (kambing == 'I' || kambing == 'i') ||
        (kambing == 'U' || kambing == 'u') ||
        (kambing == 'E' || kambing == 'e') ||
        (kambing == 'O' || kambing == 'o');
}

int find_stop(string k, int start){
    for(int i=start; i<k.size(); i++){
        if(!isalpha(k[i]))
            return i;
    }
    return -1;
}

string proccess(string k){
    int start,stop;
    string temp;
    for(int i=0; i<k.size(); i++){
        if(isalpha(k[i])) {
            start = i;
            stop = find_stop(k, i);
            string t = "";
            if(stop != -1)
                t = k.substr(start,stop-start);
            else
                t = k.substr(start);

            if(!is_vowel(t[0])){
                t += t[0];
                t.erase(0,1);
            }

            temp += t + "ay";
            if(stop == -1){
                i = k.size();
            } else {
                i = stop-1;
            }
        } else {
            temp += k[i];
        }
    }
    return temp;
}

int main() {
    string kambing;

    while(getline(cin, kambing)){
        cout << proccess(kambing) << endl;
    }

    return 0;
}