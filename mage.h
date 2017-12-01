#ifndef DEF_MAGE
#define DEF_MAGE

#include "personnage.h"


class Mage : public Personnage
{
    private:


    public:

        Mage();
        virtual ~Mage();

        virtual void action1(Personnage &adversaire);
        virtual void action2(Personnage &adversaire);
        virtual void action3(Personnage &adversaire);
        virtual void action4(Personnage &adversaire);

        virtual bool action1availible();
        virtual bool action2availible();
        virtual bool action3availible();
        virtual bool action4availible();
};

#endif // DEF_MAGE
