#include <iostream>
#include "bigint.h"
using namespace std;

int main() {
    bigint a("347237823479327478743");     // big integer initialization with String
    bigint b(68) ;        // big integer initialization with integer 
    bigint c = 123 ; // big integer intialization with Integer using '='
    bigint d ;    

    d = a + b ;
    cout << d << endl ;

    d = a - b - 1 ;
    cout << d << endl ;

    d = a*b;
    cout << d << endl ;

    d = a/b ;
    cout << d << endl ;                             

    cout << big_sqrt(a) << endl; 

    cout << big_pow(a, b) << endl;

    cout << big_max(a,b) << " " << big_min(a,b) << endl ;

    big_swap(a, b);
    cout << a << " " << b ;

    cout << big_gcd(a, c) << endl;   

    cout << big_lcm(a, c) << endl;  

    cout << big_fact(c) << endl;         

    cout << big_isPrime(a) << endl ;

    cout << big_isPalindrome(b) << endl; 

    cout << big_reverse(c) << endl; 

    return 0 ;
}