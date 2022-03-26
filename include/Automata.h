#include <string>

enum States
{
  OFF,
  WAIT,
  ACCEPT,
  CHECK,
  COOK
};

class Automata
{
  private:
    int cash;
    string* menu;
    int* prices;
    States state;
    bool check(int _choice);
    void cook();
    
  public:
    Automata();
    void on();
    void off();
    void coin(int money);
    string etMenu();
    States getState();
    void choice(int _choice);
    int cancel();
    int finish();
 };
