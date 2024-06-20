//
//  main.cpp
//  ObjectOrientedProgrammingCpp
//
//  Created by Mick Maciel on 20/06/2024.
//

#include <iostream>
#include <string>

class BeersJCPStyles {
private:
    std::string beerStyle;
    std::string origin;
    float       minABV;
    float       maxABV;
    int         minIBU;
    int         maxIBU;
    int         minSRM;
    int         maxSRM;
    
public:
    //constructor
    BeersJCPStyles(const  std::string& beerStyle, std::string& origin, float minABV, float maxABV, int minIBU, int maxIBU,int minSRM,int maxSRM) : beerStyle(beerStyle), origin(origin), minABV(minABV), maxABV(maxABV), minIBU(minIBU), maxIBU(maxIBU), minSRM(minSRM), maxSRM(maxSRM){}
    
    //getter
    std::string getBeerStyle() const{
        return beerStyle;
    }
    
};



int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}
