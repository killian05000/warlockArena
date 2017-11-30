#include "personnage.h"

random_device Personnage::generator{};

Personnage::Personnage(const string _nom, const carac _viemax, const carac _manamax, const carac _armure)
          :nom(_nom), viemax(_viemax), manamax(_manamax), armure(_armure),
           nomAction1("Attaquer"), infobulleNomAction1("Ocassione de 400 à 500 dommages"),
           nomAction2("Soigner"), infobulleNomAction2("Soigne de 550 à 1250 hp et coute 100 pt de mana"),
           nomAction3("Peine capitale"), infobulleNomAction3("Ocassione de 250 à 1100 degats et vous inflige aussi de -150 à 900 degats")
{
    vie=viemax;
    mana=manamax;
}

Personnage::~Personnage()
{}

//void Personnage::action1(Personnage &adversaire)
//{}

//void Personnage::action2(Personnage &adversaire)
//{}

//void Personnage::action3(Personnage &adversaire)
//{}

//bool Personnage::action2availible()
//{}

void Personnage::cheatcode_s()
{
  carac soin = viemax-vie;
  vie += soin;
}

void Personnage::cheatcode_os(Personnage &adversaire)
{
  carac degats = adversaire.vie;
  adversaire.vie -= degats;
}

carac Personnage::getviemax()const
{
    return viemax;
}

carac Personnage::getvie()const
{
  return vie;
}

carac Personnage::getmanamax()const
{
    return manamax;
}
carac Personnage::getmana()const
{
    return mana;
}

carac Personnage::getarmure()const
{
    return armure;
}

string Personnage::getnom()const
{
    return nom;
}

void Personnage::setnom(string _nom)
{
    nom = _nom;
}

void Personnage::setvie(carac _vie)
{
    vie = _vie;
}

void Personnage::setmana(carac _mana)
{
    mana = _mana;
}

void Personnage::setarmure(carac _armure)
{
    armure = _armure;
}
