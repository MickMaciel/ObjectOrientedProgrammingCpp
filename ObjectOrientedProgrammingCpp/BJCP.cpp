//
//  BJCP.cpp
//  ObjectOrientedProgrammingCpp
//
//  Created by Mick Maciel on 20/06/2024.
//

#include "BJCP.hpp"
#include <iostream>

// Implementação do construtor da classe BJCP
BJCP::BJCP(const std::string& beerStyle, const std::string& origin, float minABV, float maxABV, int minIBU, int maxIBU, int minSRM, int maxSRM)
: beerStyle(beerStyle), origin(origin), minABV(minABV), maxABV(maxABV), minIBU(minIBU), maxIBU(maxIBU), minSRM(minSRM), maxSRM(maxSRM) {}

// Getters
std::string BJCP::getBeerStyle() const {
    return beerStyle;
}

std::string BJCP::getOrigin() const {
    return origin;
}

float BJCP::getMinABV() const {
    return minABV;
}

float BJCP::getMaxABV() const {
    return maxABV;
}

int BJCP::getMinIBU() const {
    return minIBU;
}

int BJCP::getMaxIBU() const {
    return maxIBU;
}

int BJCP::getMinSRM() const {
    return minSRM;
}

int BJCP::getMaxSRM() const {
    return maxSRM;
}

// Setters
void BJCP::setBeerStyle(const std::string& beerStyle) {
    this->beerStyle = beerStyle;
}

void BJCP::setOrigin(const std::string& origin) {
    this->origin = origin;
}

void BJCP::setMinABV(float minABV) {
    this->minABV = minABV;
}

void BJCP::setMaxABV(float maxABV) {
    this->maxABV = maxABV;
}

void BJCP::setMinIBU(int minIBU) {
    this->minIBU = minIBU;
}

void BJCP::setMaxIBU(int maxIBU) {
    this->maxIBU = maxIBU;
}

void BJCP::setMinSRM(int minSRM) {
    this->minSRM = minSRM;
}

void BJCP::setMaxSRM(int maxSRM) {
    this->maxSRM = maxSRM;
}

// Implementação do método para mostrar os parâmetros do estilo
void BJCP::showStyleParameters() const {
    std::cout << "\nBeer Style: " << beerStyle << "\n";
    std::cout << "Country of Origin: " << origin << "\n";
    std::cout << "ABV min: " << minABV << "% - ABV max: " << maxABV << "%\n";
    std::cout << "IBU min: " << minIBU << " - IBU max: " << maxIBU << "\n";
    std::cout << "SRM min: " << minSRM << " - SRM max: " << maxSRM << "\n";
}


