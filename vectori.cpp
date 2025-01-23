#include <iostream>
#include <vector>
#include <algorithm>


int main(){ 
    std::vector <float> nr;
    for(int i = 0; i < 5; i++) nr.push_back(i);
    for(auto it = nr.begin(); it != nr.end(); it++) std::cout << *it << std::endl;

    //stergerea elementelor
    std::vector<int> element;
    element = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    for(auto it = element.begin(); it != element.end();){
        if(*it % 2 == 0){
            it = element.erase(it);
        }else it++;
    }
    for(int i : element) std::cout << i << " ";

    //problema 3: inserare si sortare
    std::vector<int> v1 = {1, 3, 5, 7, 9};
    int x = 4;
    auto it = lower_bound(v1.begin(), v1.end(), x);
    v1.insert(it, x);

    //problema 4: binary search
    std::vector<int> v4 = {1, 3, 5, 7, 9};
    int y = 5;
    bool exists = binary_search(v4.begin(), v4.end(), y);
    if(exists) std::cout << " Exista in vector " << std::endl;
    else std::cout << " Nu exista in vector " << std::endl;

    


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