#include "personnage.h"

random_device Personnage::generator{};

double Personnage::turn=1;

Personnage::Personnage(const string _nom, const carac _viemax, const carac _manamax, const carac _armure)
          :nom(_nom), viemax(_viemax), manamax(_manamax), armuremax(_armure)
{
    vie=viemax;
    mana=manamax;
    armure=armuremax;
    degats=0;
}

Personnage::~Personnage()
{}

void Personnage::cheatcode_s()
{
  carac soin = viemax-vie;
  vie += soin;
}

void Personnage::cheatcode_os(Personnage &adversaire)
{
  carac dmg = adversaire.vie;
  adversaire.vie -= dmg;
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

carac Personnage::getdegats() const
{
    return degats;
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

void Personnage::decreasevie(carac _dmg)
{
    int dmg = _dmg-armure;
    if(dmg > vie)
        dmg = vie;
    if (dmg > 0)
        vie -= dmg;
}

void Personnage::setmana(carac _mana)
{
    mana = _mana;
}

void Personnage::setarmure(carac _armure)
{
    armure = _armure;
}

void Personnage::setdegats(carac _degats)
{
    degats = _degats;
}

void Personnage::increasedegats(carac _degats)
{
    degats += _degats;
}

double Personnage::getTurn()
{
    return turn;
}

void Personnage::increaseTurn(double _turnValue)
{
    turn+=_turnValue;
}

void Personnage::decreaseTurn(double _turnValue)
{
    turn-=_turnValue;
}

void Personnage::setTurn(double _turnValue)
{
    turn=_turnValue;
}

bool Personnage::getIsTurn()
{
    return isTurn;
}

void Personnage::setIsTurn(bool T)
{
    isTurn = T;
}
