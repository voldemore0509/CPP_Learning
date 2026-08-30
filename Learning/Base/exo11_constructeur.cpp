#include <iostream>

class CompteBancaire{   //PascalCase premier lettre en maj et camelCase le premier caracter en minuscule
    private:
        std::string prenom;
        double solde = 0;
    public:
        /*CompteBancaire(const std::string& prenom , const double& money){
            this->prenom = prenom;
            this->solde = money;
        }*/
        CompteBancaire(const std::string& prenom , const double& money):
        prenom(prenom), solde(money){}
        CompteBancaire(const std::string& prenom): CompteBancaire(prenom,0){
        }
        ~CompteBancaire(){
            std::cout << "destroy : " << this->prenom << std::endl;
        }
        void setPrenom(const std::string& prenom){
            this->prenom = prenom;  //accède au variable de la class
        }
        void drop_money(const double& money){
            this->solde += money;
        }
        void display(){
            std::cout << "prenom : " <<this->prenom << " ,solde : " << this->solde << std::endl;
        }
        void delete_argent(const double& money){
            solde = solde - money;
        }
        double get_solde()const{    //ajouter des detail que c un get
            return solde;
        }
        std::string get_prenom()const{
            return prenom;
        } 
};

int main(void){
    CompteBancaire *cb = new CompteBancaire("zoe",100);
    delete cb;
    CompteBancaire cb2("toto",15);
    CompteBancaire cb3("fantine");
    return 0;
}