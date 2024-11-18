#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

// Function to add two strings representing large integers
string addStrings(const string &s1, const string &s2) {
    string result;
    int carry = 0;
    
    int i = s1.size() - 1, j = s2.size() - 1;

    while (i >= 0 || j >= 0 || carry) {
        int sum = carry;
        if (i >= 0) sum += s1[i--] - '0';
        if (j >= 0) sum += s2[j--] - '0';
        result.push_back(sum % 10 + '0');
        carry = sum / 10;
    }

    reverse(result.begin(), result.end());
    return result;
}

// Function to multiply two strings representing large integers
string bigInteger(const string &str1, const string &str2) {
    // Handle base cases
    if (str1 == "0" || str2 == "0") return "0";
    if (str1 == "1") return str2;
    if (str2 == "1") return str1;

    // Get lengths of both numbers
    int n = max(str1.size(), str2.size());

    // Pad with leading zeros to make lengths equal
    string a = str1;
    string b = str2;
    a.insert(0, n - a.size(), '0');
    b.insert(0, n - b.size(), '0');

    // Base case for recursion
    if (n < 2) {
        return to_string((a[0] - '0') * (b[0] - '0')); // Direct multiplication for single digits
    }

    int half = n / 2;

    // Split the numbers into high and low parts
    string aL = a.substr(0, n - half);  // High part of a
    string aR = a.substr(n - half);      // Low part of a
    string bL = b.substr(0, n - half);  // High part of b
    string bR = b.substr(n - half);      // Low part of b

    // Recursive calculations
    string ac = bigInteger(aL, bL);                   // High * High
    string bd = bigInteger(aR, bR);                   // Low * Low
    string adPlusBC = addStrings(bigInteger(aL, bR), bigInteger(aR, bL)); // High * Low + Low * High

    // Combine the results
    string result = addStrings(ac + string(2 * (n - half), '0'), // ac * 10^(2 * half)
                               addStrings(adPlusBC + string(n - half, '0'), // (ad + bc) * 10^(half)
                                         bd)); // bd

    return result;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        string str1, str2;
        cin >> str1 >> str2;
        string res = bigInteger(str1, str2);
        cout << res << endl;
    }
    return 0;
}
