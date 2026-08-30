#include <iostream>
#include "exo10_class_header.h"
void CompteBancaire::setPrenom(const std::string& prenom){
    this->prenom = prenom;
}
void CompteBancaire::drop_money(const double& money){
    this->solde = money;
}
void CompteBancaire::delete_argent(const double& money){
    solde = solde - money;
}
void CompteBancaire::display(){
    std::cout << "prenom : " << this->prenom << "Solde : " << this->solde << std::endl;
}
double CompteBancaire::get_solde()const{
    return this->solde;
}
std::string CompteBancaire::get_prenom()const{
    return this->prenom;
}
int main(void){
}