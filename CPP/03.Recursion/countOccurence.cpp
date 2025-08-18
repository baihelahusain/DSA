#include <iostream>
#include <vector>
#include <set>
using namespace std;

// counts occurrences of k in vec recursively
int countRec(const vector<int>& vec, int k, int i = 0) {
    if (i == vec.size()) return 0;
    return (vec[i] == k) + countRec(vec, k, i + 1);
}

// prints occurrences for each unique number recursively
void printOccurrences(const vector<int>& vec, set<int>& done, int i = 0) {
    if (i == vec.size()) return;  // base case

    int x = vec[i];
    if (done.find(x) == done.end()) { // if not already counted
        cout << x << " occurs " << countRec(vec, x) << " times\n";
        done.insert(x);
    }

    printOccurrences(vec, done, i + 1); // move to next element
}

int main() {
    vector<int> vec = {1,2,3,6,2,3,2,1,1,4};
    set<int> done; // to avoid duplicates
    printOccurrences(vec, done);
}
