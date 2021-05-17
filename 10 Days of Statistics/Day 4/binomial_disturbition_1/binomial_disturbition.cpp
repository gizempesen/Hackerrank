#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iomanip>

using namespace std;

int fact(int n){  
    if(n == 1 || n == 0)
        return 1;
    return (n * fact(n-1));
}
double binomial_dist(int x , int n , float p){
    int f = fact(n) / (fact(x)*fact(n-x)) ;
    double powers = pow(p,x) * (pow((1-p),(n-x)));
    return f * powers;
}
int main() {
     cout << setprecision(3) << fixed << (binomial_dist(3,6,(1.09/2.09)) +
     binomial_dist(4,6,(1.09/2.09)) + binomial_dist(5,6,(1.09/2.09)) 
    + binomial_dist(6,6,(1.09/2.09))) ;
    return 0;
}
