#include <iostream>

using namespace std;

class Chef {
    public:
        void makeChicken() {
            cout << "The chef makes chicken" << endl;
        }

        void makeSalad() {
            cout << "The chef makes salad" << endl;
        }

        void makeSpecialDish() {
            cout << "The chef makes bbq ribs" << endl;
        }
};

class ItalianChef : public Chef {
  public:
      void makePasta() {
        cout << "The chef makes pasta" << endl;
      }
      void makeSpecialDish() {
        cout << "The chef makes Gelato" << endl;
      }
};



int main() {



    ItalianChef italianChef1;
    italianChef1.makePasta();
    italianChef1.makeSpecialDish();
    return 0;
}