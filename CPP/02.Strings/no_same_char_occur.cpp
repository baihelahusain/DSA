#include<iostream>
#include<string>
using namespace std;

int countDuplicateGroups(const string &s) {
    unordered_map<char, int> freqMap;
    for (char c : s) {
        freqMap[c]++;
    }

    unordered_map<int, int> freqCountMap;
    for (auto &p : freqMap) {
        freqCountMap[p.second]++;  // frequency → how many chars have this freq
    }

    int result = 0;
    for (auto &p : freqCountMap) {
        if (p.second >= 2) {
            result += p.second; // add number of chars in this frequency group
        }
    }
    return result;
}

int main() {
    string s1 = "aabbccdde";
    cout << countDuplicateGroups(s1) << endl; // O/p: 4

    string s2 = "xyzzzz";
    cout << countDuplicateGroups(s2) << endl; // O/p: 2

    string s3 = "abc"; 
    cout << countDuplicateGroups(s3) << endl; // O/p: 0

    return 0;
}
