#include <iostream>
#include <ctime>
using namespace std;
int main(){
    srand(time(0)); //Establim que cada execució sigui un nombre diferent
    int Num = rand() % 100;// Rand() crea un nombre aleatori, el cual amb %100 el reduim entre  0 i 99 
    int resposta;// Variable on guardarem la resposta
    int Temps = 0;
    std::cout << "Benvingut a endevinar el numero secret!\n";
    cout << "Quin es el numero secret???\n"; // mostrem la pregunta
     cin >> resposta;// guardem resposta
     while (resposta != Num) { // Bucle per anar preguntan la resposta mentres sigui el numero incorrecte
         Temps++; // Cada torn s'afegeix 1 al contador de torns
         if (resposta >= Num) {// Si la resposta es mes gran al numero secret
             cout << " el numero es mes petit!\n";  } // Surt aquesta resposta
         if (resposta <= Num) {// Si la resposta es mes petita al numero secret
             cout << "el numero es mes gran!\n";}// Surt aquesta resposta
         cout << "Torna a intentar: ";// en els dos casos, responem que es torni a intentar
         cin >> resposta;  } // Demanem la  resposta 
         cout << "Correcte!!! has tardat els seguents torns:"<< +Temps; // Si la resposta es correcte, avisem que ha guanyat i mostrem el torns que ha necesitat
    return 0;
}

