#include <iostream>
#include <string>
class CompteBancaire{
    private:
        std::string prenom;
        double solde = 0;
    public:
        void setPrenom(std::string prenom){
            this->prenom = prenom;
        }
        void drop_money(double money){
            this->solde += money;
        }
        void display(){
            std::cout << "prenom : " <<this->prenom << " ,solde : " << this->solde << std::endl;
        }
};

int main(void){
    CompteBancaire cb;
    cb.setPrenom("Tya");
    cb.drop_money(14.10);
    cb.display(); 
    return 0;
}