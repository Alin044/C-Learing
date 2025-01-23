#include <iostream>
#include <vector>



int main(){ 


    
    std :: vector<int> v;
    v.push_back(10); // adauga element la sfirsitul vectorului
    v.emplace_back(20); // Similar cu push_back, dar mai eficient pentru obiecte complexe.
    int x = v.at(0); // acceseaza un element de la o pozitie
    std::cout << std::endl << x << std::endl;
    x = v[0];
    std::cout << std::endl << x << std::endl;
    int first = v.front(); // returneaza primul element
    int last = v.back(); // returneaza ultimul element
    int b = v.size();
    int cap = v.capacity(); // returneaza capacitatea alocata in memorie
    if(v.empty()) std::cout << std::endl << "Vectorul este gol" << std::endl;
    v.pop_back(); // sterge ultimul element;
    v.clear(); // goleste vectorul
    v.erase(v.begin() + 2); // sterge al 3-lea element;
    v.erase(v.begin(), v.begin() + 3); // sterge primele 3 elemente;
    v.insert(v.begin() + 1, 15); // insereaza un element pe o pozitie

    std::vector<int> v2 = {1, 2, 3};
    v.swap(v2); // schimba continulul lui v cu v2

    v.assign(3, 100); //atribuie n copii ale unei valori

    //Iterarea prin vector
        //indici
    for(int i = 0; i < v.size(); i++){
        std::cout << v[i] << " ";
    }

        //iteratori
    for(auto it  = v.begin(); it != v.end(); it++){
        std::cout << *it << " ";
    }
        //range based
    for(int x : v){
        std::cout << x << " ";
    }




    return 0;
}

// Un vector în C++ este un container din STL (Standard Template Library) care stochează elemente într-o ordine specifică 
// și permite accesul aleator la ele. Este similar cu un array, dar are avantajul că poate redimensiona dinamic memoria.