#include <iostream>
#include <stdio.h>
#include <iostream>

using namespace std;

long double fibo(int x){
    if (x < 2)
        return x;
    else if (x == 2)
        return 1;

    return fibo(x-1) + fibo(x-2);

}

int main(){
    int in_num;
    long double nout;
    printf("Please Enter a number to git its Fibonacci: ");

    cin>>in_num;


    nout = fibo(in_num);
    cout<< nout<<endl;
}
