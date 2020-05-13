#include <bits/stdc++.h> 
using namespace std; 
   
int solve(int low, int high, int T) 
{ 
    while (low <= high)
	 { 
        int mid = (low + high) / 2; 
  
        if ((mid * (mid + 1)) == T) 
            return mid; 
  
        if (mid > 0 && (mid * (mid + 1)) > T &&  
                        (mid * (mid - 1)) <= T) 
            return mid - 1; 
  
        if ((mid * (mid + 1)) > T) 
            high = mid - 1; 
  
        else
            low = mid + 1; 
     } 
    return -1; 
} 
  
int main() 
{ 
    int T = 15; 
  
    int ans = solve(1, T, 2 * T); 
  
    if (ans != -1) 
        ans--; 
  
    cout << "Number of stair steps = "
         << ans << endl; 
    return 0; 
} 

// output is Number of stair steps = 4
