#pragma once
#include <string>

class Goods {
private:
    std::string name;
    std::string date;
    double price;
    int count;
    int invoice;

public:
    Goods();
    Goods(std::string, std::string);
    Goods(std::string, std::string, double, int, int);
    ~Goods();

    void Init(std::string, std::string, double, int, int);
    void Read();
    void Display();
    std::string toString();

    void changePrice(double);
    void increase(int);
    void decrease(int);
    double cost();
};
