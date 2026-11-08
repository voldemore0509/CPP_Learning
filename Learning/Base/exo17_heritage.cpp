#include <iostream>

class Geurrier:public Player{
    public:
    Geurrier(const std::string &name ,const int &age):Player(name){
        this->name = name;
        this->age = age;
    }

    private :
    int age;
};

class Ennemie:public Player{
    public :
    Ennemie(const std::string &name ,const int &pv):Player(name){
        this->name = name;
        this->pv = pv;
    };

    private :
    int pv;
};

class Player{
    public :
    Player(const std::string name){
        this->name = name;
    }
    
    protected :
    std::string name;
};

int main(void){
    return 0;
}