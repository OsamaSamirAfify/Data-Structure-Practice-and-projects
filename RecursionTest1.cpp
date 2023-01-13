#include <iostream>
#include <vector>

using namespace std;

void funcall(int x){
    if (x == 0)
        return;
    cout<<"Before Calling, X is = "<<x<<endl;
    funcall(x-1);
    cout<<"After Calling, X is = "<<x<<endl;


}

int main(){
    int x;
    cout<<"Enter The number to test the recursion";
    cin>>x;

    funcall(x);

}
