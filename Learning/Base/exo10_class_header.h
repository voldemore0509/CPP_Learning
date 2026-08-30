#ifndef exo10_class_header
#define exo10_class_header
#include <string>
class CompteBancaire{
    private:
        std::string prenom;
        double solde = 0;
    public:
        void setPrenom(const std::string& prenom);
        void drop_money(const double& money);
        void display();
        void delete_argent(const double& money);
        double get_solde()const;
        std::string get_prenom()const;
};
#endif