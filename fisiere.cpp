#include <iostream>
#include <fstream>

int main(){
    std::ofstream outFile("data.txt");
    outFile << "Salut, lume!";
    outFile.close();

    std::ifstream inFile("data.txt");
    std::string line;
    while(getline(inFile, line)){
        std::cout << line << std::endl;
    }

    inFile.close();

    return 0;
}