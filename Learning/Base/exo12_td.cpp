#include <iostream>
#include <stdlib.h>

int main(void){
    int tab[3] = {1,10,16};
    for(int i = 0; i < 3; i++){
        std::cout << tab[i] << std::endl;
    } 
    int *tab1 = (int*)malloc(sizeof (int) *3);
    for(int i = 0; i < 3; i++){
        tab1[i] = i;
        std::cout << tab1[i] << std::endl;
    } 

    int *tab2 = (int*)malloc(sizeof (int)*4);
    for(int i = 0; i < 3; i++){
        tab2[i] = tab1[i];
        std::cout << tab2[i] << std::endl;
    } 
    tab2[3] = 15;
    std::cout << tab2[3] << std::endl;
    free(tab1);
    free(tab2);
    return 0;
}