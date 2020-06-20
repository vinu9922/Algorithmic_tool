#include <iostream>
#include <vector>
#include <algorithm>

int MaxPairwiseProduct(const std::vector<int>& numbers,int max_no,int position) {
    int max_product = max_no;
    int n = numbers.size();
	int max_no1=-999;
    for (int first = 0; first < n; ++first) {
        if(numbers[first]>max_no1 && first!=position )
        {
        	max_no=numbers[first];
        }
    }
	max_product=max_product*max_no1;
    return max_product;
}

int main() {
    int n,max_no1=-999,position,product=0;
    std::cin >> n;
    std::vector<int> numbers(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> numbers[i];
	if(numbers[i]>max_no1)
	{
		max_no1==numbers[i];
		position=i;
	}
    }

     product=MaxPairwiseProduct(numbers,max_no1,position);
     std::cout << product;
     
    return 0;
}
