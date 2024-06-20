//
//  Beers.cpp
//  ObjectOrientedProgrammingCpp
//
//  Created by Mick Maciel on 20/06/2024.
//

#include "Beers.hpp"
#include <iostream>

// Implementação do construtor da classe Beers
Beers::Beers(const std::string& beerStyle, const std::string& origin, float minABV, float maxABV, int minIBU, int maxIBU, int minSRM, int maxSRM, const std::string& style)
: BJCP(beerStyle, origin, minABV, maxABV, minIBU, maxIBU, minSRM, maxSRM), style(style) {}

// Getter para o estilo específico da cerveja
std::string Beers::getStyle() const {
    return style;
}

// Sobrescrita do método para mostrar os parâmetros do estilo
void Beers::showStyleParameters() const {
    BJCP::showStyleParameters();
    std::cout << "Family Style: " << style << std::endl;
}
