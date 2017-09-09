#include "guerrier.h"

Guerrier::Guerrier()
        :Personnage("", 6000, 300, 50)
{
    S1P="/home/killian/Documents/GitHub/warlockArena/Images/Guerrier/stickman1Guerrier.jpg";
    S1APA1="/home/killian/Documents/GitHub/warlockArena/Images/Guerrier/stickman1AnimGuerrierAction1.jpg";
    S1APA2="/home/killian/Documents/GitHub/warlockArena/Images/Guerrier/stickman1AnimGuerrierAction2.jpg";
    S1APA3="/home/killian/Documents/GitHub/warlockArena/Images/Guerrier/stickman1AnimGuerrierAction3.jpg";
    S1PC="/home/killian/Documents/GitHub/warlockArena/Images/Guerrier/stickman1GuerrierCrown.jpg";
    S1C="/home/killian/Documents/GitHub/warlockArena/Images/Guerrier/stickman1Coffin.jpg";

    S2P="/home/killian/Documents/GitHub/warlockArena/Images/Guerrier/stickman2Guerrier.jpg";
    S2APA1="/home/killian/Documents/GitHub/warlockArena/Images/Guerrier/stickman2AnimGuerrierAction1.jpg";
    S2APA2="/home/killian/Documents/GitHub/warlockArena/Images/Guerrier/stickman2AnimGuerrierAction2.jpg";
    S2APA3="/home/killian/Documents/GitHub/warlockArena/Images/Guerrier/stickman2AnimGuerrierAction3.jpg";
    S2PC="/home/killian/Documents/GitHub/warlockArena/Images/Guerrier/stickman2GuerrierCrown.jpg";
    S2C="/home/killian/Documents/GitHub/warlockArena/Images/Guerrier/stickman2Coffin.jpg";

    nomAction1="Attaquer";
    infobulleNomAction1="Ocassione de 400 à 500 dommages";
    nomAction2="renforcement";
    infobulleNomAction2="Augmente votre armure de 50";
    nomAction3="Epée celeste";
    infobulleNomAction3="Ocassione des degats équivalent a 1/6 de la "
                        "vie manquante et retire 75 d'armure";
}

Guerrier::~Guerrier()
{}

void Guerrier::action1(Personnage &adversaire)
{
    uniform_int_distribution<int> distribution(0,100);
    carac degats = distribution(generator)+400;
    if(degats > adversaire.getarmure())
        degats -= adversaire.getarmure();
    else
        degats = 0;
    if(degats > adversaire.getvie())
        degats = adversaire.getvie();
    adversaire.setvie(adversaire.getvie()-degats);
}

void Guerrier::action2(Personnage &adversaire)
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
