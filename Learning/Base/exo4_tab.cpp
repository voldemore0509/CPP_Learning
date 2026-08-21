#include <iostream>
#include <array>
#include <string>
void display_array(std::array <int,5> &note);
int main(void){
    std::array<int , 5>note = {10,11,19,14,20};    //<> = chevrons , <> != >> ou << .
    std::array<std::string , 2> nom =  {"desire","doue"}; // creation d'objet 
    std::cout << note.size() << std::endl;
    std::cout << note[1] << std::endl;
    std::cout << nom.size() << std::endl;
    std::cout << nom[0] << std::endl;
    display_array(note);
};
void display_array(std::array <int,5> &note){
    for(int i = 0;i < note.size(); i++)
    {
        std::cout << note[i] << std::endl;
    }
}