#include <iostream>
class Fraction{
    public:
    
    Fraction(const float &diviseur,const float &dividande){
        this->diviseur = diviseur;  //on met this car on as 2 varioable ici qui ont ler meme nom
        this->dividande = dividande;
    }

    friend std::ostream& operator << (std::ostream &os,const Fraction &f){
        return os << f.diviseur << "/" << f.dividande ;
    }    

    Fraction & operator+= (const Fraction &f){
        this->diviseur = f.diviseur + this->diviseur;
        return *this;
    }

    Fraction & operator-= (const Fraction &f){
        this->diviseur = this->diviseur - f.diviseur;
        return *this;
    }


    private:
    
    float diviseur ;
    float dividande ;
};

int main(void){
    Fraction f1(4.5,10);
    Fraction f2(16,10);
    f1 += f2;   //f1 = f1 + f2
    f1 -= f2;   //f1 = f1 + f2
    std::cout << f1 << f2 << std::endl;
}