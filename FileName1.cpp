#include "FileName.h"
#include <iostream>

Goods::Goods() {
    name = "";
    date = "";
    price = 0;
    count = 0;
    invoice = 0;
}

Goods::Goods(std::string n, std::string d) {
    name = n;
    date = d;
    price = 0;
    count = 0;
    invoice = 0;
}

Goods::Goods(std::string n, std::string d, double p, int c, int inv) {
    name = n;
    date = d;
    price = p;
    count = c;
    invoice = inv;
}

Goods::~Goods() {}

void Goods::Init(std::string n, std::string d, double p, int c, int inv) {
    name = n;
    date = d;
    price = p;
    count = c;
    invoice = inv;
}

void Goods::Read() {
    std::cin >> name;
    std::cin >> date;
    std::cin >> price;
    std::cin >> count;
    std::cin >> invoice;
}

void Goods::Display() {
    std::cout << name << " " << date << " " << price << " " << count << " " << invoice << std::endl;
}

std::string Goods::toString() {
    return name + " " + date + " " + std::to_string(price) + " " + std::to_string(count) + " " + std::to_string(invoice) + " " + std::to_string(cost());
}

void Goods::changePrice(double p) {
    price = p;
}

void Goods::increase(int x) {
    count += x;
}

void Goods::decrease(int x) {
    if (count >= x) count -= x;
}

double Goods::cost() {
    return price * count;
}
