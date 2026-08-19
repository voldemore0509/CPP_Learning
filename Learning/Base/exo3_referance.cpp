#include <iostream>
void swap(int &a , int &b);
int main(void){
    int a = 5;
    int b = 10;
    swap(a,b);
    return 0;
}

void swap(int &a , int &b){
    int c = a;
    a = b;
    b = c;
}