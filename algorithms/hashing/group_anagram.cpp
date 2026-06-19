#include <iostream>
using namespace std;

vector<string> anagram(vector<string>& words){
  unordered_map<string, vector<string>> map;
  string word =  " ", key = " ";
  for(int i=0; i<words.size(); i++){
    word = words[i];
    sort(word.begin(), word.end());
    key = word;
    map[] = 
  }

}

int main(){}