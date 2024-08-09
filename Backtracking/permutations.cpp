#include<iostream>
#include<string.h>
using namespace std;

void permutations(string str, string ans){

        if(str.size() == 0){
                cout << ans << " ";
                return;
        }
        int n = str.size();
        for(int i=0;i<str.size();i++) {
                char ch = str[i];
                string newString = str.substr(0,i) + str.substr(i+1,n-i-1);
                permutations(newString, ans+ch);
        }
}

int main(){
        string str = "abc";
        string ans = "";
        permutations(str, ans);
        return 0;
}