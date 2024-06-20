//
//  BJCP.hpp
//  ObjectOrientedProgrammingCpp
//
//  Created by Mick Maciel on 20/06/2024.
//

#ifndef BJCP_H
#define BJCP_H

#include <string>

/**
 * Classe BJCP para representar os parâmetros de estilos de cerveja.
 * BJCP é a sigla para Beer Judge Certification Program.
 */

class BJCP {
private:
    std::string beerStyle;   // Nome do estilo de cerveja
    std::string origin;      // Origem do estilo
    float       minABV;      // Teor alcoólico mínimo
    float       maxABV;      // Teor alcoólico máximo
    int         minIBU;      // Amargor mínimo (IBU)
    int         maxIBU;      // Amargor máximo (IBU)
    int         minSRM;      // Cor mínima (SRM)
    int         maxSRM;      // Cor máxima (SRM)
    
public:
    
    // Construtor da classe BJCP
    BJCP(const std::string& beerStyle, const std::string& origin, float minABV, float maxABV, int minIBU, int maxIBU, int minSRM, int maxSRM);

    // Getters
    std::string getBeerStyle() const;
    std::string getOrigin() const;
    float getMinABV() const;
    float getMaxABV() const;
    int getMinIBU() const;
    int getMaxIBU() const;
    int getMinSRM() const;
    int getMaxSRM() const;

    // Setters
    void setBeerStyle(const std::string& beerStyle);
    void setOrigin(const std::string& origin);
    void setMinABV(float minABV);
    void setMaxABV(float maxABV);
    void setMinIBU(int minIBU);
    void setMaxIBU(int maxIBU);
    void setMinSRM(int minSRM);
    void setMaxSRM(int maxSRM);

    // Método virtual para mostrar os parâmetros do estilo
    virtual void showStyleParameters() const;
};

#endif // BJCP_H
