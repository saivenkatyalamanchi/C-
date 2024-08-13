#include<iostream>
#include<string>
using namespace std;

int countSubstrings(string s, int n){
        int ans = 0;
        int i = 0;

        while(i < n){
                int cnt0 = 0;
                int cnt1 = 0;

                if(s[i] == '0'){
                        while(i < n && s[i] == '0'){
                                i++;
                                cnt0++;
                        }

                        int j = i;

                        while(j < n && s[j] == '1'){
                                j++;
                                cnt1++;
                        }

                        ans += min(cnt1,cnt0);
                }
                else{
                        while(i < n && s[i] == '1'){
                                i++;
                                cnt1++;
                        }

                        int j = i;

                        while(j < n && s[j] == '0'){
                                j++;
                                cnt0++;
                        }

                        ans += min(cnt1,cnt0);
                }
        }

        return ans;
}

int main(){
        string s = "010011";
        int n = s.size();
        cout << countSubstrings(s,n) << endl;
        return 0;
}