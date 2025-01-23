#include <iostream>
#include <vector>

void modificaVector(std::vector<int>& vec){
    for(int& elem : vec){
        elem *= 2;
    }
}

int& gasesteElement(std::vector<int>& vec, int index){
    if(index >= 0 && index < vec.size()){
        return vec[index];
    }
    throw std::out_of_range("Index invalid");
}

int main(){
    std::vector<int> numere = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    modificaVector(numere);

    std::cout << "Vector modificat : ";
    for(int num : numere){
        std::cout << num << " ";
    }
    
    int x = 10;
    int& ref = x;

    ref = 20; // modificam valoare lui x prin referinta


    return 0;
}