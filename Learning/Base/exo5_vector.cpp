#include <iostream>
#include <vector>

int *find_number(std::vector<int>&notes, int research_number){
    int i = 0;
    while(research_number != notes[i]){
        if(i < notes.size()){
            i ++;
        }
        else{
            break;
        }
    }
    std::cout << notes[i] << std::endl;
    return &(notes[i]); //plus précis que notes[i].
}

int main(void){
    std::vector<int>notes;
    notes.push_back(5);
    notes.push_back(7);
    notes.push_back(10);
    for(int i = 0 ; i < notes.size() ; i++){
        const int &note = notes[i];
        std::cout << note << std::endl;
    }
    int *pointer_notes = find_number(notes,7);
    *pointer_notes = 77;
    std::cout << pointer_notes << std::endl;
    std::cout << &notes[1] << std::endl;
    for(const int &note : notes){   //const int &note = notes[i];
        std::cout << note << std::endl;
    }
}