#include <iostream>
void swap(int &a , int &b);
void display(const int &number);
int main(void){
    int a = 5;
    int b = 10;
    const int &ref_a = a;
    display(ref_a);
    swap(a,b);
    display(ref_a);
    return 0;
}

void swap(int &a , int &b){
    int c = a;
    a = b;
    b = c;
}

void display(const int &number){
    std::cout << number << std::endl;
}