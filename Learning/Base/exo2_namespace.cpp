#include <iostream>
using namespace std;    //evité de faire que des namespace , il faut utiliser quand on souhiate crée une caisse a outil , qui sont réutilisable
namespace geo{
    double PI = 3.14;
    double aire(double rayon){
    return PI*rayon*rayon;
    }

    double aire(double largeur,double longueur){
        return longueur * largeur;
    }
}
using namespace geo;
int main(void)
{
    cout << aire(1) << endl;
    cout << PI << endl;
    cout << "hello world" << endl;
}
