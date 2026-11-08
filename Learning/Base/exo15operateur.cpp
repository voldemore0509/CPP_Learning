#include <iostream>

class Operateur{
    public :

    Operateur (const double &a, const double &b){
        this->diviseur = a;
        this->dividande = b;
    }

    friend std::ostream &operator <<(std::ostream &os,const Operateur &f){
        return os<< f.dividande << "/" << f.diviseur << std::endl;
    }

    Operateur &operator*= (const Operateur &o){
        this->diviseur = o.diviseur + this->diviseur;
        return *this;
    }

    Operateur & operator/= (const Operateur &o2){
        this->diviseur = o2.diviseur / this->dividande;
        return *this;
    }

    private : 
    
    double diviseur ;
    double dividande ;
};


int main(void){
    Operateur operateur1(10,8);
    Operateur operateur2(16,7);
    operateur1 *= operateur2;
    std::cout << operateur1 << operateur2 << std::endl;
    operateur1 /= operateur2;
    std::cout << operateur1 << operateur2 << std::endl;
    return 0;
}