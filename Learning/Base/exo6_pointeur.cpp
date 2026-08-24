#include <iostream>
int *number(int value){
    int *pointeur = new int(value); //allocation pour 1 value
    return pointeur;
}

int *numbers(int sizeofboard , int value){
    int *pointeur = new int[sizeofboard];   //allocation pour plusieurs value
    int *first = pointeur;
    for(int i = 0; i < sizeofboard ; i++){
        *pointeur = value;
        pointeur ++;
    }
    return first;
}

int main(void){
    int *nb = number(42);
    std::cout << nb[0] << std::endl;    //permet d'afficher lma valeuyr et non l'adresse , + nb est un tableau
    delete nb;
    int size = 10;
    int *more_nb = numbers(size,42);
    for(int i = 0; i < size ; i++){
        std::cout << more_nb[i] << std::endl;
    }
    delete[] more_nb;   //vu que cela est un tableau placé des crochet devant permet de supprimer tout les valeur du tableau
    return 0;
}