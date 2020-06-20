#include <iostream>

int fibonacci_fast(int n) {
    // write your code here
    
    int i;
	long long prev=0,current=1,sum=0;
    if(n==0)
    return 0;
    else if(n==1)
    return 1;
    else
    {
    	  
		for(i=2;i<=n;i++)
		{
			sum=(prev+current)%10;
			prev=current;
			current=sum;
		}
    }
    
    

    return sum;
}

int main() {
    int n;
    std::cin >> n;
    int c = fibonacci_fast(n) ;
    std::cout << c << '\n';
    }
