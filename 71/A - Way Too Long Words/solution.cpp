#include <bits/stdc++.h>
using namespace std;
 
int main() {
    string word;
    int n,count=0;
    cin >> n;
    while(n--){
        string word;
        cin >> word;
 
        if(word.length()>10){
            count = word.length()-2;
            cout << word[0] << count << word[word.length()-1] << endl;
        }else{
        cout << word << endl;
    }
}
return 0;
}