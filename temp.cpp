#include <iostream>
using namespace std;

bool dangerous(string s){
    int n = s.length();
    int cur_length = 1;
    for(int i=0;i<n;i++){
        if(i<=n-1 && s[i] == s[i+1]){
            cur_length++;
        } else {
            if(cur_length >=7){
                return true;
            }
            cur_length = 1;
        }
    }
    if(cur_length<7){
        return false;
    }
};

int main() {
    string s;
    cin>>s;

    if(dangerous(s)){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}
