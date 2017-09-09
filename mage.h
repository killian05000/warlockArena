#ifndef DEF_MAGE
#define DEF_MAGE

#include "personnage.h"


class Mage : public Personnage
{
    private:


    public:

//    string S1P="/home/killian/Documents/GitHub/warlockArena/Images/Mage/stickman1Mage.jpg";
//    string S1APA1="/home/killian/Documents/GitHub/warlockArena/Images/Mage/stickman1AnimMageAction1.jpg";
//    string S1APA2="/home/killian/Documents/GitHub/warlockArena/Images/Mage/stickman1AnimMageAction2.jpg";
//    string S1APA3="/home/killian/Documents/GitHub/warlockArena/Images/Mage/stickman1AnimMageAction3.jpg";
//    string S1PC="/home/killian/Documents/GitHub/warlockArena/Images/Mage/stickman1MageCrown.jpg";
//    string S1C="/home/killian/Documents/GitHub/warlockArena/Images/Mage/stickman1Coffin.jpg";

//    string S2P="/home/killian/Documents/GitHub/warlockArena/Images/Mage/stickman2Mage.jpg";
//    string S2APA1="/home/killian/Documents/GitHub/warlockArena/Images/Mage/stickman2AnimMageAction1.jpg";
//    string S2APA2="/home/killian/Documents/GitHub/warlockArena/Images/Mage/stickman2AnimMageAction2.jpg";
//    string S2APA3="/home/killian/Documents/GitHub/warlockArena/Images/Mage/stickman2AnimMageAction3.jpg";
//    string S2PC="/home/killian/Documents/GitHub/warlockArena/Images/Mage/stickman2MageCrown.jpg";
//    string S2C="/home/killian/Documents/GitHub/warlockArena/Images/Mage/stickman2Coffin.jpg";


//    string nomAction1;
//    string infobulleNomAction1;
//    string nomAction2;
//    string infobulleNomAction2;
//    string nomAction3;
//    string infobulleNomAction3;

    Mage();
    virtual ~Mage();

    virtual void action1(Personnage &adversaire);
    virtual void action2(Personnage &adversaire);
    virtual void action3(Personnage &adversaire);
};

#endif // DEF_MAGE
