#include "customer.hh"
#include <iostream>
#include <random>
#include <utility>

int main(int argc, char const *argv[])
{
    // create a customer with some initioal values:
    Customer c{"Wolfgang Amadeus Mozart"};
    for (int val : {0, 8, 15}) {
        c.addValue(val);
    }
    std::cout << "c: " << c << std::endl;

    // insert the customer twice into a collection of customers
    std::vector<Customer> customers;
    customers.push_back(c);
    customers.push_back(std::move(c));
    std::cout << "c: " << c << '\n';


    // print all customers in teh collection
    std::cout << "customers:\n";
    for (const Customer& cust : customers) 
        std::cout << " " << cust << '\n';

    Customer c1{"George"};
    for (int val : {0, 1}) c1.addValue(val);
    Customer c2 = c1;

    std::cout << c1 << std::endl;
    std::cout << c2 << std::endl;



    return 0;
}
