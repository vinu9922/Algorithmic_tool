#include <iostream>
#include <vector>
#include <string.h>
#include <math.h>

using std::cin;
using std::cout;
using std::vector;
using std::max;

int compute_min_refills(int dist, int tank, int* stops,int n) {

	 int numRefills = 0;
    int currentRefill = 0;
    int lastRefill = 0;
   
    
    
    if ((stops[n] + tank) < dist) {
    	
        return -1;
    }
	
	
    while (currentRefill <= n) {
        lastRefill = currentRefill; 
       
 	 
		while ( (currentRefill<=n)){
			
		
			if((stops[currentRefill+1 ] - stops[lastRefill]) <= tank)
		    	{
		    		currentRefill = currentRefill + 1; 
		       
		    	}
		    	else break;
		    
		}
        
        if (currentRefill == lastRefill) {
            //cout << "-1";
            return -1;
        }
        else  if(currentRefill <= n)
        {
            //
            numRefills = numRefills + 1;
	 
        }
        
        
    }
    return numRefills; 
}


int main() {
    int d = 0;
    cin >> d;
    int m = 0;
    cin >> m;
    int n = 0;
    cin >> n;

    int stops[n];
	
	
    for (size_t i = 1; i <= n; i++)
       { cin >> stops[i];}
        
	stops[0]=0;stops[n+1]=d;
    cout << compute_min_refills(d, m, stops,n) << "\n";

    return 0;
}

