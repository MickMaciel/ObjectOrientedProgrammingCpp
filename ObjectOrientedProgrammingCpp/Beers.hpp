//
//  Beers.hpp
//  ObjectOrientedProgrammingCpp
//
//  Created by Mick Maciel on 20/06/2024.
//

#ifndef BEERS_H
#define BEERS_H

#include "BJCP.hpp"
#include <string>

/**
 * Classe derivada Beers que herda de BJCP.
 */
class Beers : public BJCP {
private:
    std::string style;   // Estilo específico da cerveja
    
public:
    // Construtor da classe Beers
    Beers(const std::string& beerStyle, const std::string& origin, float minABV, float maxABV, int minIBU, int maxIBU, int minSRM, int maxSRM, const std::string& style);

    // Getter para o estilo específico da cerveja
    std::string getStyle() const;

    // Sobrescrita do método para mostrar os parâmetros do estilo
    void showStyleParameters() const override;
};

#endif // BEERS_H
