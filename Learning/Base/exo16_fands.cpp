#include <iostream>

class Game{
    public :
    Game(const std::string &name , const std::string &category){
        this->name = name;
        this->category = category;
        this->id = last_id ++;
    }

    friend std::ostream & operator <<(std::ostream &os,const Game &game){
        return os << "name :" << game.name << ", category" << game.category << " and id" << game.id ;
    }

    private :

    std::string name;
    std::string category ;
    int id;
    static int last_id;
};

class Player{
    public :
    
    Player(const std::string &name , const std::string &password){
        this->name = name;
        this->password = password ;
        this->id = lasted_id ++;
    }
    
    const std::string & getName()const{
        return this->name;
    }

    int setName(const std::string &name){
        this->name = name;
        return 0; //aucun probleme
    }

    friend std::ostream & operator <<(std::ostream &os,const Player &player){
        return os << "name :" << player.name << ", password " << player.password << " and id " << player.id ;
    };
    
    private :
    std::string name;
    std::string password ;
    static int lasted_id;
    int id;

};

int Game::last_id = 0;
int Player::lasted_id = 1;  //initie le id

int main(){
    Game game("gta6","adulte");
    Game game1("fortnite","enfant");
    std::cout << game << "," << game1 << std::endl;
    Player p("voldemort0509","12345");
    Player p1("draft_user","54321");
    std::cout << p << "," << p1 << std::endl;
    std::cout << p.getName() << std::endl;
    std::cout << p.setName("vitality") << std::endl;
    std::cout << p.getName() << std::endl;
    return 0;
}

// instance : la valeur d'une variable