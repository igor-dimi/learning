#include "customerimpl.hh"
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

void foo(std::string&& arg)
{
    std::cout << arg << std::endl;
}



int main(int argc, char const *argv[])
{
    std::vector<Customer> coll;
    for (int i = 12; i > 0; i--) {
        coll.push_back(Customer{"TestCustomer " + std::to_string(i - 5)});
    }


    std::cout << "--- sort(): \n";
    std::sort(coll.begin(), coll.end(), [] (
       const Customer& c1, const Customer& c2) {
        return c1.getName() < c2.getName();
       });

    
    return 0;
}
