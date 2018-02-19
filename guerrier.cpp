#include "guerrier.h"

Guerrier::Guerrier()
        :Personnage("", 6000, 300, 50)
{
    S1P=":/Files/Images/Guerrier/stickman1Guerrier.jpg";
    S1APA1=":/Files/Images/Guerrier/stickman1AnimGuerrierAction1.jpg";
    S1APA2=":/Files/Images/Guerrier/stickman1AnimGuerrierAction2.jpg";
    S1APA3=":/Files/Images/Guerrier/stickman1AnimGuerrierAction3.jpg";
    S1PC=":/Files/Images/Guerrier/stickman1GuerrierCrown.jpg";
    S1C=":/Files/Images/Guerrier/stickman1Coffin.jpg";

    S2P=":/Files/Images/Guerrier/stickman2Guerrier.jpg";
    S2APA1=":/Files/Images/Guerrier/stickman2AnimGuerrierAction1.jpg";
    S2APA2=":/Files/Images/Guerrier/stickman2AnimGuerrierAction2.jpg";
    S2APA3=":/Files/Images/Guerrier/stickman2AnimGuerrierAction3.jpg";
    S2PC=":/Files/Images/Guerrier/stickman2GuerrierCrown.jpg";
    S2C=":/Files/Images/Guerrier/stickman2Coffin.jpg";

    nomAction1="Attaquer";
    infobulleNomAction1="Ocassione de 400 à 500 degats";
    nomAction2="renforcement";
    infobulleNomAction2="Augmente votre armure de 50";
    nomAction3="Epée celeste";
    infobulleNomAction3="Consomme l'armure et gagne des dégats "
                        "suplémentaire égaux a 50%";
    nomAction4="Epée du jugement";
    infobulleNomAction4="Ocassione des degats équivalent a 1/6 de la "
                        "vie manquante et retire 75 d'armure";
}

Guerrier::~Guerrier()
{}

void Guerrier::action1(Personnage &adversaire)
{
    uniform_int_distribution<int> distribution(0,100);
    carac dmg = distribution(generator)+400;
    adversaire.decreasevie(dmg+degats);
}

void Guerrier::action2(Personnage *) // on specifie pas comme ça on a pas un "unused parameter "adversaire"
{
    if (armure < 500)
        armure += 50;
}

void Guerrier::action3(Personnage *) // on specifie pas comme ça on a pas un "unused parameter "adversaire"
{
    if (armure > 0)
    {
        degats += armure/2;
        armure = 0;
    }
}

void Guerrier::action4(Personnage &adversaire)
{
    carac dmg = ((viemax-vie)/6)+200;
    adversaire.decreasevie(dmg+degats);
    armure -= 50;
}

bool Guerrier::action1availible()
{
    return true;
}

bool Guerrier::action2availible()
{
    return true;
}

bool Guerrier::action3availible()
{
    return true;
}

bool Guerrier::action4availible()
{
    return turn>=4;
}
