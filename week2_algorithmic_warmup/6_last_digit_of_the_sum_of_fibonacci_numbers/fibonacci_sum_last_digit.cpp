#include <iostream>
#include <math.h>

int fibonacci_sum_naive(long long n) {
    long long f0 = 0; 
    long long f1 = 1; 
  
    // Base case 
    if (n == 0) 
        return 0; 
    if (n == 1) 
        return 1; 
    else
    { 
        // Pisano period for % 10 is 60 
        long long rem = n % 60; 
  
        // Checking the remainder 
        if(rem == 0) 
           return 0; 
  
        // The loop will range from 2 to  
        // two terms after the remainder 
        for(long long i = 2; i < rem + 3; i++) 
        { 
           long long f = (f0 + f1) % 60; 
           f0 = f1; 
           f1 = f; 
        } 
          
        long long s = f1 - 1; 
        return s%10; 
    } 
}

int main() {
    long long n = 0;
    std::cin >> n;
    std::cout << fibonacci_sum_naive(n);
}
