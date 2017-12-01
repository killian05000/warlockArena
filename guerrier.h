#ifndef DEF_GUERRIER
#define DEF_GUERRIER

#include <personnage.h>


class Guerrier : public Personnage
{
    private:


    public:

        Guerrier();
        virtual ~Guerrier();

        virtual void action1(Personnage &adversaire);
        virtual void action2(Personnage &adversaire);
        virtual void action3(Personnage &adversaire);
        virtual void action4(Personnage &adversaire);

        virtual bool action1availible();
        virtual bool action2availible();
        virtual bool action3availible();
        virtual bool action4availible();
};

#endif // DEF_GUERRIER
