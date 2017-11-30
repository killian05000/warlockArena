#include "personnage.h"

random_device Personnage::generator{};

Personnage::Personnage(const string _nom, const carac _viemax, const carac _manamax, const carac _armure)
          :nom(_nom), viemax(_viemax), manamax(_manamax), armuremax(_armure)
{
    vie=viemax;
    mana=manamax;
    armure=armuremax;
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

carac Personnage::getarmuremax() const
{
    return armuremax;
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
