#include <iostream>

long long gcd(int a, int b) { 
   if (b == 0) 
      return a; 
   return gcd(b, a % b);  
} 

int main() {
  long a, b;
  std::cin >> a >> b;
  long long gcd1=1; 
   gcd1=a*b;
   std::cout<<gcd1/gcd(a,b); 
  return 0;
}




