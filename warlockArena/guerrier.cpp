#include "guerrier.h"

Guerrier::Guerrier(string _nom, const carac _viemax, const carac _manamax, const carac _armure)
        :Personnage(_nom, _viemax, _manamax, _armure),
         nomAction1("Attaquer"), infobulleNomAction1("Ocassione de 400 à 500 dommages"),
         nomAction2("renforcement"), infobulleNomAction2("Augmente votre armure de 50"),
         nomAction3("Epée celeste"), infobulleNomAction3("Ocassione des degats équivalent a 1/6 de la vie manquante et retire 75 d'armure")
{
    armure+=50;
}

Guerrier::~Guerrier()
{}

Guerrier::Guerrier(const Guerrier &source)
          :Personnage(source.nom, source.viemax, source.manamax, source.armure),
           nomAction1(source.nomAction1), infobulleNomAction1(source.infobulleNomAction1),
           nomAction2(source.nomAction2), infobulleNomAction2(source.infobulleNomAction2),
           nomAction3(source.nomAction2), infobulleNomAction3(source.infobulleNomAction3)
{}

void Guerrier::operator =(const Guerrier &source)
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

void Guerrier::action1(Personnage &adversaire)
{
    uniform_int_distribution<int> distribution(0,100);
    carac degats = distribution(generator)+400+bonus;
    if(degats > adversaire.getarmure())
        degats -= adversaire.getarmure();
    else
        degats = 0;
    if(degats > adversaire.getvie())
        degats = adversaire.getvie();
    adversaire.setvie(adversaire.getvie()-degats);
}

void Guerrier::action2()
{
    armure += 50;
}

void Guerrier::action3(Personnage &adversaire)
{
    carac degats = ((viemax-vie)/6)+200;
    if (degats > adversaire.getarmure())
        degats -= adversaire.getarmure();
    else
        degats = 0;
    if (degats > adversaire.getvie())
        degats = adversaire.getvie();
    adversaire.setvie(adversaire.getvie()-degats);
    armure -= 50;
}
