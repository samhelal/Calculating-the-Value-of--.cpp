/*(Calculating the Value of π) Calculate the value of π from the infinite series
Print a table that shows the value of π approximated by computing the first 200,000
terms of this series. How many terms do you have to use before you first get a value
that begins with 3.14159? (c++ how to program )*/

#include<iostream>
#include<iomanip>

using namespace std ;

int main (){

    cout << setprecision(5) << fixed ;
    double total (0)  ;
    int n(1) , x(1) , y(3) , num(3.14159);

    cout << setprecision(5) << fixed ;

    while( n <= 200000 & total < 3.14159 ){
        
        total = total + ( (4/ static_cast<double>(x)) - (4/ static_cast<double>(y)) ) ;
        cout << setw(4) << n << setw(20) << total <<  endl ;
        x+=4 ;
        y+=4 ; 
        n++ ;
  
    }

    cout << "\n terms = " << n << endl; 


}