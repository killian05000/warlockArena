#ifndef DEF_PERSONNAGE
#define DEF_PERSONNAGE

#include <string>
#include <random>

using namespace std;

typedef int carac;

class Personnage
{
    protected:
      string nom;
      carac viemax;
      carac vie;
      carac manamax;
      carac mana;
      carac armure;

      carac bonus;

      //static random_device generator;

    public:

      static random_device generator;

      string S1P;
      string S1APA1;
      string S1APA2;
      string S1APA3;
      string S1PC;
      string S1C;

      string S2P;
      string S2APA1;
      string S2APA2;
      string S2APA3;
      string S2PC;
      string S2C;

      string nomAction1;
      string infobulleNomAction1;
      string nomAction2;
      string infobulleNomAction2;
      string nomAction3;
      string infobulleNomAction3;


      Personnage(string _nom, const carac _viemax, const carac _manamax, const carac _armure); // rajouter armure, degats, puissance ?
      Personnage(const Personnage &source);
      virtual ~Personnage();

      virtual void operator=(const Personnage &source);

      virtual void action1(Personnage &adversaire);
      virtual void action2();
      virtual void action3(Personnage &adversaire);

      void cheatcode_s();
      void cheatcode_os(Personnage &adversaire);

      string getnom()const;
      carac getvie()const;
      carac getmana()const;
      carac getviemax()const;
      carac getmanamax()const;
      carac getarmure()const;

      void setnom(string _nom);
      void setvie(carac _vie);
      void setmana(carac _mana);
      void setarmure(carac _armure);
      void setbonus(carac _bonus);
};

#endif // DEF_PERSONNAGE
