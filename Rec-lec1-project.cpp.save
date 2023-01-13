#include <iostream>
#include <stdio.h>

using namespace std;

float fun_call(int x, char action_type[12]){
    int sum=0;
    if (x == 0)
        return 0;
    else if (action_type == "ascending"){
        fun_call(x-1, "ascending");
        printf("\n%d ",x);
    }
     else if (action_type == "descending"){

        printf("\n%d ",x);
        fun_call(x-1, "descending");
     }
     else if (action_type == "addall"){

        x += fun_call(x-1, "addall");
        return x;
     }


}

int main(){
    int x;

    cout<< "Please Enter a number: ";
    cin>>x;
    cout<<"\n";

    cout<<"\t ***Here Are the sequence starting from 1 ***";
    fun_call(x, "ascending");
    cout<<"\n";

    cout<<"\t ***Here Are the Descending sequence ***";
    fun_call(x, "descending");
    cout<<"\n";

    cout<<"\t ***Here is the Sum of starting from 1 ***\n";
    cout<<fun_call(x, "addall");
    cout<<"\n";




}
