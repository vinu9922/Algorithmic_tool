#include <string>
#include <vector>
#include <algorithm>
#include <iterator>
#include <iostream>
using namespace std;

bool ahead_of(string left, string right) {
    // Try gluing the blocks both ways, and return true or false
    // based on which order produced a bigger result.
    string a = left+right;
    string b = right+left;
    return a > b;
}

int main() {
    int n;
    // Read the number of items
    cin >> n;
    vector<string> items;
    // Read the items themselves
    for (int i = 0 ; i != n ; i++) {
        string s;
        cin >> s;
        items.push_back(s);
    }
    // Sort using the custom comparer
    sort(items.begin(), items.end(), ahead_of);
    // Copy the result to the output
    ostream_iterator<string> out_it (cout, "");
    copy( items.begin(), items.end(), out_it );
    return 0;
}
