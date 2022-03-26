#include <string>

enum States {
  OFF,
  WAIT,
  ACCEPT,
  CHECK,
  COOK
};

class Automata {
  private:
    int cash;
    std::string* menu;
    int* prices;
    States state;
    int option;
    
  public:
    Automata();
    void on();
    void off();
    void coin(int money);
    void getMenu();
    States getState();
    void choice(int _choice);
    int cancel();
    bool check();
    void cook();
    int finish();
 };
