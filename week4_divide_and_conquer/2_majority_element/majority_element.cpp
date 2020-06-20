#include <algorithm>
#include <iostream>
#include <vector>
#include <unordered_map> 

using std::vector;
using namespace std;



int get_majority_element(vector<int> &a, int left, int right) {
	
unordered_map<int, int> myHashMap; 
    for(int i = 0; i < a.size(); i++) 
        myHashMap[a[i]]++; 
    int count = 0; 
    for(auto i : myHashMap) 
    { 
        if(i.second > a.size() / 2) 
        { 
            count =1; 
            return 1; 
        } 
    } 
    if(count == 0) 
        return 0; 
}

int main() {
  int n;
  std::cin >> n;
  vector<int> a(n);
  for (size_t i = 0; i < a.size(); ++i) {
    std::cin >> a[i];
  }
  std::cout << get_majority_element(a, 0, a.size())<<"\n" ;
}
