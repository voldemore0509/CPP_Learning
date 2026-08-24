#include <iostream>
enum class EAnimation{
    walk = 10, run , sprint
};
int main(void){
    EAnimation animation = EAnimation::run;
    switch(animation){
        case EAnimation::walk:
            std::cout << "walk" << std::endl;
            break;
        case EAnimation::run:   //permet de faire que run afficher sprint sans le dupliquer 
        case EAnimation::sprint:
            std::cout << "sprint" << std::endl;
            break;
        default :
            std::cout << "idle" << std::endl;
            break;
    }
    printf("%i\n",EAnimation::walk);
    return 0;
}