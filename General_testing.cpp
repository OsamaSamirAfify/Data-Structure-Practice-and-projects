#include <stdio.h>
#include <stdlib.h>

int main() {

char *c= (char*)malloc(1); *c='a'-32; printf("\n%c ",(int)*c);
}