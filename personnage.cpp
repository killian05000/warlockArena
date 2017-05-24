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

Personnage::Personnage(const Personnage &source)
          :nom(source.nom), viemax(source.viemax), manamax(source.manamax), armure(source.armure),
           nomAction1(source.nomAction1), infobulleNomAction1(source.infobulleNomAction1),
           nomAction2(source.nomAction2), infobulleNomAction2(source.infobulleNomAction2),
           nomAction3(source.nomAction2), infobulleNomAction3(source.infobulleNomAction3)
{}

void Personnage::operator =(const Personnage &source)
{
    nom=source.nom;
    viemax=source.viemax;
    manamax=source.manamax;
    armure=source.armure;
    nomAction1=source.nomAction1;
    infobulleNomAction1=source.infobulleNomAction1;
    nomAction2=source.nomAction2;
    infobulleNomAction2=source.infobulleNomAction2;
    nomAction3=source.nomAction2;
    infobulleNomAction3=source.infobulleNomAction3;
}



//void Personnage::action1(Personnage &adversaire)
//{
//  uniform_int_distribution<int> distribution(0,100);
//  carac degats = distribution(generator)+400+bonus;
//  if(adversaire.vie < degats)
//    degats = adversaire.vie;
//  if(adversaire.armure < degats)
//  {
//      degats -= adversaire.armure;
//      adversaire.vie -= degats;
//  }
//}

//void Personnage::action2()
//{
//  uniform_int_distribution<int> distribution(150,850);
//  carac soin = distribution(generator)+400;

//  int manacost=100;

//  if (mana < 100)
//  {
//      manacost = mana;
//      soin = 0;
//  }
//  else if ((vie+soin) > viemax)
//      soin = viemax-vie;

//  vie += soin;
//  mana -= manacost;
//}

//void Personnage::action3(Personnage &adversaire)
//{
//  uniform_int_distribution<int> distribution(50,950);
//  carac degats = distribution(generator)+200;
//  if(adversaire.vie < degats)
//    degats = adversaire.vie;
//  adversaire.vie -= degats;

//  uniform_int_distribution<int> distribution2(-150,900);
//  int contrecoup = distribution2(generator);
//  if (int (vie) < contrecoup)
//    contrecoup = vie;
//  if ((vie-contrecoup) > viemax)
//      contrecoup = vie-viemax;
//  vie -= contrecoup;
//}

void Personnage::action1(Personnage &adversaire)
{}

void Personnage::action2()
{}

void Personnage::action3(Personnage &adversaire)
{}

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

void Personnage::setbonus(carac _bonus)
{

    bonus = _bonus;
}
