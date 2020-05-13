#include <bits/stdc++.h> 
using namespace std; 
  
double Square(double n, double i, double j) 
{ 
    double mid = (i + j) / 2; 
    double mul = mid * mid; 
  

    if ((mul == n) || (abs(mul - n) < 0.00001)) 
        return mid; 
  
    else if (mul < n) 
        return Square(n, mid, j); 
  
    else
        return Square(n, i, mid); 
} 
  
void findSqrt(double n) 
{ 
    double i = 1; 
  
    bool found = false; 
    while (!found) { 
  
        if (i * i == n) { 
            cout << fixed << setprecision(0) << i; 
            found = true; 
        } 
        else if (i * i > n) { 
  
            double res = Square(n, i - 1, i); 
            cout << fixed << setprecision(5) << res; 
            found = true; 
        } 
        i++; 
    } 
} 
  
int main() 
{ 
    double n = 7; 
  
    findSqrt(n); 
  
    return 0; 
} 
//output is 2.4575
