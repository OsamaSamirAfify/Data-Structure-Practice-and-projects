#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <vector>

using namespace std;

int main(){

    cout<< sizeof(int)<<endl;

    int i, *x= (int *) malloc(9999999999999*sizeof(int));

    if (x== NULL){
        cout<<"No Memory";
        return 0;
    }
        

    for (i=0; i<5; i++)
        x[i] = i*2;
    
    for (i=0; i<5; i++)
        printf("%d ", x[i]);

    cout<<endl;

    float *p; p = (float *)malloc(4);
    p[0]=5; 
    printf("%f",p[0]);

}