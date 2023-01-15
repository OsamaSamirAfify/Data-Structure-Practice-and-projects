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

int to_power(int x, int y){
    int z;
    if (y == 0)
        return 1;
    z = to_power(x, y/2);
    z *= z;

    if (y%2 != 0)
        z *= x;
    return z;


}

int main(){

    int in_num, in_power;
    long double nout;
    char in_function;
    do{
    cout<<"Please Select the Function. (Fibonacci \"Type f\" or Power \"Type p\": ";
    cin>>in_function;
    cout<<"\n";

    if (in_function == 'f'){
        printf("Please Enter a number to git its Fibonacci: ");

        cin>>in_num;


        nout = fibo(in_num);
        cout<< nout<<endl;
    }
    else if (in_function == 'p'){
        printf("Please Enter the Main Number: ");
        cin>>in_num;
        printf("\nPlease Enter the Power: ");
        cin>>in_power;

        nout = to_power(in_num, in_power);
        cout<<"\n";

        cout<< nout<<endl;


    }
    }while(in_function != 'f' && in_function != 'p' );
}
