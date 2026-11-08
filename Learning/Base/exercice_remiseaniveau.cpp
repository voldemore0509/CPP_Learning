#include <iostream>
#include <stdio.h>
int init_size(){
    int size;
    printf("combien de jeu");
    scanf("%i",&size);
    std::cout << "jeu : " << size << std::endl;
    return size;
}

char **incrementation_list(int size){
    char **list = (char**)malloc(sizeof(char*)*size);
    for(int i = 0; i < size; i++){
        char *name = (char*)malloc(sizeof(char)*50);
        std::cout << "Nom du jeu : " << std::endl;
        scanf("%s",name);
        list[i] = name;
        std::cout << "jeu : " << name << std::endl;
    }
    return list; 
}

int main(void){
    int size_of_list  = init_size();
    char **list = incrementation_list(size_of_list);
    printf("%s",list[1]);
    return 0;
}