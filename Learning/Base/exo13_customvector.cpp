#include <iostream>

class MyVector{
    private:
    int *stock_number = nullptr;    //== NULL
    int size = 0;
    
    public:
    void add(int value){
        if(size == 0){
            stock_number = (int *)malloc(sizeof (int));    
            stock_number[size] = value;
            size ++; //crée un système de parcours 
        }
        else if(size != 0){
            size ++;
            int *reallocation_stock_number = (int *)malloc(sizeof (int)*size);
            for(int i = 0 ; i < (size-1) ;  i++){
                reallocation_stock_number[i] = stock_number[i];
            }
            reallocation_stock_number[size] = value;
            clear_class();
            *stock_number = *reallocation_stock_number;  //met le même emplacement mémoire (mise a jour)
        }
    }
    double getsize(){
        return size;
    }

    int get(int index){
        return stock_number[index];
    }

    void clear_class(){
        free(stock_number);
    }
};

int main(void){
    MyVector tab;
    tab.add(10);
    tab.add(16);
    tab.add(15); 
    for(int i = 0; i < tab.getsize() ; i++){
        std::cout << tab.get(i) << std::endl;
    }
    return 0;
}