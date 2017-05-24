#ifndef DEF_GUERRIER
#define DEF_GUERRIER

#include <personnage.h>


class Guerrier : public Personnage
{
    private:


    public:
        string S1P="/home/killian/Documents/GitHub/warlockArena/Images/Guerrier/stickman1Guerrier.jpg";
        string S1APA1="/home/killian/Documents/GitHub/warlockArena/Images/Guerrier/stickman1AnimGuerrierAction1.jpg";
        string S1APA2="/home/killian/Documents/GitHub/warlockArena/Images/Guerrier/stickman1AnimGuerrierAction2.jpg";
        string S1APA3="/home/killian/Documents/GitHub/warlockArena/Images/Guerrier/stickman1AnimGuerrierAction3.jpg";
        string S1PC="/home/killian/Documents/GitHub/warlockArena/Images/Guerrier/stickman1GuerrierCrown.jpg";
        string S1C="/home/killian/Documents/GitHub/warlockArena/Images/Guerrier/stickman1Coffin.jpg";

        string S2P="/home/killian/Documents/GitHub/warlockArena/Images/Guerrier/stickman2Guerrier.jpg";
        string S2APA1="/home/killian/Documents/GitHub/warlockArena/Images/Guerrier/stickman2AnimGuerrierAction1.jpg";
        string S2APA2="/home/killian/Documents/GitHub/warlockArena/Images/Guerrier/stickman2AnimGuerrierAction2.jpg";
        string S2APA3="/home/killian/Documents/GitHub/warlockArena/Images/Guerrier/stickman2AnimGuerrierAction3.jpg";
        string S2PC="/home/killian/Documents/GitHub/warlockArena/Images/Guerrier/stickman2GuerrierCrown.jpg";
        string S2C="/home/killian/Documents/GitHub/warlockArena/Images/Guerrier/stickman2Coffin.jpg";


        string nomAction1;
        string infobulleNomAction1;
        string nomAction2;
        string infobulleNomAction2;
        string nomAction3;
        string infobulleNomAction3;

        Guerrier(string _nom, const carac _viemax, const carac _manamax, const carac _armure);
        Guerrier(const Guerrier &source);
        virtual ~Guerrier();

        virtual void operator=(const Guerrier &source);

        virtual void action1(Personnage &adversaire);
        virtual void action2();
        virtual void action3(Personnage &adversaire);
};

#endif // DEF_GUERRIER
