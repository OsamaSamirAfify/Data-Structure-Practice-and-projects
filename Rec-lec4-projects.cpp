#include <iostream>
#include <map>
#include <algorithm>
#include <vector>
#include <cmath>

using namespace std;
int x[3]= {5, 2, 7}, big_digit=0;

int get_biggest(int i, int s){
    int calc = 0, next ,next_digit = 0;
    if (s > big_digit)
        big_digit = s;

    if (i == 2)
        return x[i];
    if (i+1 < 2)
    next_digit = x[i+1] ; 
    next = get_biggest(i+1, x[i+1]);

    // current = x[i];

    if ( big_digit > s ){
         calc =  next * 10;
         calc += s;
    }
    else {
        calc =  s * pow(10, i);
        calc += x[i+1];
    }
    cout<<"\nIn function, Before returning Calc value, is =: "<<calc;
    return calc;



}




int main(){
    
    int result = get_biggest(0, x[0]);
    cout<< "\nFinal Output: "<<result;



}