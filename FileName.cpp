#include <iostream>
#include <string>
using namespace std;

class Goods {
private:
    string name;
    string date;
    double price;
    int count;
    int invoice;

public:
    // 1. Конструктор за замовчуванням
    Goods() {
        name = "";
        date = "";
        price = 0.0;
        count = 0;
        invoice = 0;
        cout << "Конструктор за замовчуванням викликано" << endl;
    }

    // 2. Конструктор з параметрами
    Goods(string n, string d, double p, int c, int inv) {
        name = n;
        date = d;
        price = p;
        count = c;
        invoice = inv;
        cout << "Конструктор з параметрами викликано" << endl;
    }

    // 3. Конструктор копіювання
    Goods(const Goods& other) {
        name = other.name;
        date = other.date;
        price = other.price;
        count = other.count;
        invoice = other.invoice;
        cout << "Конструктор копiювання викликано" << endl;
    }

    // Деструктор
    ~Goods() {
        cout << "Деструктор викликано" << endl;
    }

    // Init
    void Init(string n, string d, double p, int c, int inv) {
        name = n;
        date = d;
        price = p;
        count = c;
        invoice = inv;
    }

    // Read
    void Read() {
        cout << "Введiть: назва дата цiна кiлькiсть накладна:" << endl;
        cin >> name >> date >> price >> count >> invoice;
    }

    // Display
    void Display() const {
        cout << "Goods(" << name << ", " << date << ", "
            << price << ", " << count << ", " << invoice << ")" << endl;
    }

    // toString
    string toString() const {
        return "Goods(" + name + ", " + date + ", " +
            to_string(price) + ", " + to_string(count) + ", " +
            to_string(invoice) + ", total=" + to_string(cost()) + ")";
    }

    // Операції
    void changePrice(double p) {
        price = p;
    }

    void increase(int x) {
        count += x;
    }

    void decrease(int x) {
        if (count >= x) count -= x;
    }

    double cost() const {
        return price * count;
    }
};


int main() {
    setlocale(LC_ALL, "ukr");

    cout << "\nСтворюємо товар g1 (введення користувача):\n";
    Goods g1;
    g1.Read();

    cout << "\nСтворюємо товар g2 (введення користувача):\n";
    Goods g2;
    g2.Read();

    cout << "\nСтворюємо товар g3 (через Init):\n";
    Goods g3;
    g3.Init("TV", "2025-01-05", 12000, 2, 15);

    cout << "\n=== Введенi товари ===\n";
    cout << "g1 = "; g1.Display();
    cout << "g2 = "; g2.Display();
    cout << "g3 = "; g3.Display();

    cout << "\n=== Операцiї з g1 та g2 ===\n";
    cout << "Вартiсть g1 = " << g1.cost() << endl;
    cout << "Вартiсть g2 = " << g2.cost() << endl;

    cout << "\nЗмiнємо цiну g1:\nНова цiна = 15000\n";
    g1.changePrice(15000);
    cout << "g1 = " << g1.toString() << endl;

    cout << "\nЗбiльшуємо кiлькiсть g2 на 5:\n";
    g2.increase(5);
    cout << "g2 = " << g2.toString() << endl;

    cout << "\nЗменшуємо кiлькiсть g3 на 1:\n";
    g3.decrease(1);
    cout << "g3 = " << g3.toString() << endl;

    cout << "\n=== Завершення програми ===\n";

    return 0;
}
