#include <iostream>
#include <stdio.h>
#include <iostream>

using namespace std;

long double fibo(int x){
    if (x < 2)
        return x;
    else if (x <= 4)
        return x-1;

    return fibo(x-1) + fibo(x-2);

}

int to_power(int x, int y){
    
    if (y == 0)
        return 1;
    int z = to_power(x, y/2);
    z *= z;

    if (y%2 != 0)
        z *= x;
    return z;


}

long long get_factroial(int x){
    if (x == 1)
        return 1;
    return x*get_factroial(x-1);


}

int main(){

    int in_num, in_power;
    long double nout;
    string in_function;
    const string Fi="fi", Fa="fa", p="p";
    do{
    cout<<"Please Select the Function. (Fibonacci \"Type fi\", Factorial \"Type fa\", or Power \"Type p\": ";
    cin>>in_function;
    cout<<"\n";

    if (in_function == Fi){
        printf("Please Enter a number to git its Fibonacci: ");

        cin>>in_num;


        nout = fibo(in_num);
        cout<< nout<<endl;
    }
    else if (in_function == p){
        printf("Please Enter the Main Number: ");
        cin>>in_num;
        printf("\nPlease Enter the Power: ");
        cin>>in_power;

        nout = to_power(in_num, in_power);
        cout<<"\n";

        cout<< nout<<endl;
    }
    else if (in_function == Fa){
        printf("Please Enter the Number to Get Its Factorial: ");
        cin>>in_num;

        nout = get_factroial(in_num);
        cout<<"\nResult is: "<<nout<<endl;

    }
    }while(in_function != Fi && in_function != p && in_function != Fa );
}
