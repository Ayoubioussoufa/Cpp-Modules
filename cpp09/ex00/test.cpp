#include <iostream>
#include <map>

int main() {
    std::map<std::string, double> exchangeRates;

    // Populate the map
    exchangeRates["2009-01-02"] = 0.5;
    exchangeRates["2009-01-03"] = 0.6;
    exchangeRates["2009-01-04"] = 0.7;

    // Iterate over the map
    std::map<std::string, double>::iterator it;
    for (it = exchangeRates.begin(); it != exchangeRates.end(); ++it) {
        std::cout << "Date: " << it->first << ", Exchange rate: " << it->second << std::endl;
    }

    return 0;
}
