// Manipulate strings - sort vector, print contents of vector

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void print_sum(string s){
  int n = s.length();
  vector <int> v;
  for(int i=0;i<n;i+=2){
    v.push_back(s[i]);
  }
  sort(v.begin(), v.end());
  cout<<(char)v[0];
  for(int i = 1;i < v.size(); ++i){
    cout<<"+"<<(char)v[i];
  }
  cout<<endl;
};

int main() {
  string s;
  cin>>s;
  print_sum(s);
  return 0;
}
