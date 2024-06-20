//
//  main.cpp
//  ObjectOrientedProgrammingCpp
//
//  Created by Mick Maciel on 20/06/2024.
//



#include <iostream>
#include "Beers.hpp"

int main(int argc, const char * argv[]) {
    // Mensagem inicial
    std::cout << "BJCP Beer Styles!\n";
    
    // Criando um objeto da classe Beers e mostrando seus parâmetros
    Beers ipa("IPA", "England", 5.5, 7.5, 40, 60, 6, 14, "India Pale Ale");
    ipa.showStyleParameters();

    return 0;
}

