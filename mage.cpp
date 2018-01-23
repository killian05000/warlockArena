#include "mage.h"
#include "QThread"

Mage::Mage()
    :Personnage("", 4000, 500, 0)
{
    S1P=":/Files/Images/Mage/stickman1Mage.jpg";
    S1APA1=":/Files/Images/Mage/stickman1AnimMageAction1.jpg";
    S1APA2=":/Files/Images/Mage/stickman1AnimMageAction2.jpg";
    S1APA3=":/Files/Images/Mage/stickman1AnimMageAction3.jpg";
    S1PC=":/Files/Images/Mage/stickman1MageCrown.jpg";
    S1C=":/Files/Images/Mage/stickman1Coffin.jpg";

    S2P=":/Files/Images/Mage/stickman2Mage.jpg";
    S2APA1=":/Files/Images/Mage/stickman2AnimMageAction1.jpg";
    S2APA2=":/Files/Images/Mage/stickman2AnimMageAction2.jpg";
    S2APA3=":/Files/Images/Mage/stickman2AnimMageAction3.jpg";
    S2PC=":/Files/Images/Mage/stickman2MageCrown.jpg";
    S2C=":/Files/Images/Mage/stickman2Coffin.jpg";

    nomAction1="Boule de Feu";
    infobulleNomAction1="Occasione de 300 à 600 degats";
    nomAction2="Soin";
    infobulleNomAction2="Vous soigne de 350 à 950 pdv et coute 100 pt de mana";
    nomAction3="Aura ténébreuse";
    infobulleNomAction3="Ocassione de 250 à 1100 degats et vous inflige"
                        " aussi de -150 à 900 degats";
    nomAction4="Libération arcanique";
    infobulleNomAction4="Ocassione 2000 dégats";
}

Mage::~Mage()
{}

void Mage::action1(Personnage &adversaire)
{
    uniform_int_distribution<int> distribution(300, 600);
    carac degats = distribution(generator);
    if(degats > adversaire.getarmure())
        degats -= adversaire.getarmure();
    else
        degats = 0;
    if(degats > adversaire.getvie())
        degats = adversaire.getvie();
    adversaire.setvie(adversaire.getvie()-degats);
}

void Mage::action2(Personnage &adversaire)
{
    uniform_int_distribution<int> distribution(150,750);
    carac soin = distribution(generator)+200;
    int manacost=100;

    if (mana < 100)
    {
        manacost = mana;
        soin = 0;
    }
    else if ((vie+soin) > viemax)
        soin = viemax-vie;

    vie += soin;
    mana -= manacost;
}

void Mage::action3(Personnage &adversaire)
{
    uniform_int_distribution<int> distribution(50,950);
    carac dmg = distribution(generator)+200;
    adversaire.decreasevie(dmg+degats);


    uniform_int_distribution<int> distribution2(-150,950);
    carac contrecoup = distribution2(generator);
    if (contrecoup > vie)
        contrecoup = vie;
    else if ((vie-contrecoup) > viemax)
        contrecoup = vie-viemax;
    if ((contrecoup > 0) && (mana <=475))
        mana+=25;
    vie -= contrecoup;
}

void Mage::action4(Personnage &adversaire)
{
    carac dmg = 50;
    carac nbc = mana/10;
    for (int i=0; i<nbc; ++i)
    {
        uniform_int_distribution<int> distribution2(1,2);
        carac who = distribution2(generator);
        QThread::msleep(30);
        if (who==1)
            adversaire.decreasevie(dmg+degats);
        else if (who==2)
            decreasevie(dmg+degats);
        MaFenetre::updatePlayerInfo();
    }
    mana = 0;
}

bool Mage::action1availible()
{
    return true;
}

bool Mage::action2availible()
{
    return (vie!=viemax && mana>=100);
}

bool Mage::action3availible()
{
    return true;
}

bool Mage::action4availible()
{
    return turn>=4;
}
