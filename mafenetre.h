#ifndef DEF_MAFENETRE
#define DEF_MAFENETRE

#include "personnage.h"
#include "guerrier.h"
#include "mage.h"
#include <QApplication>
#include <QWidget>
#include <QGridLayout>
#include <QFormLayout>
#include <QLineEdit>
#include <QGridLayout>
#include <QLabel>
#include <QPushButton>
#include <QPixmap>
#include <QLCDNumber>
#include <QStackedLayout>
#include <QProgressBar>
#include <QTimer>
#include <QComboBox>
#include <QKeyEvent>

class MaFenetre : public QWidget
{
    Q_OBJECT

    public:
        explicit MaFenetre(QWidget *parent = 0);

    public: // public slots:

        void createPlayers();

        void setnomplayer1();
        void setnomplayer2();

        void funcplayer1Action1();
        void funcplayer1Action2();
        void funcplayer1Action3();
        void funcplayer1Action4();
        void funcplayer2Action1();
        void funcplayer2Action2();
        void funcplayer2Action3();
        void funcplayer2Action4();

        void endactionplayer1();
        void endactionplayer2();

        void affectpdvbarj1();
        void affectpdvbarj2();
        void affectmanabarj1();
        void affectmanabarj2();

        void funcreset();
        void funcprecedent();
        void funcquicommence();

        void funcanimj1Action1();
        void funcanimj1Action2();
        void funcanimj1Action3();
        void funcanimj2Action1();
        void funcanimj2Action2();
        void funcanimj2Action3();
        void funcbeforedead();

        void keyPressEvent(QKeyEvent *event);

    private:

        void updatePlayerInfo();

        Personnage *player1;
        Personnage *player2;

        //----Organisation de la page----//

        QFormLayout *FLayout;
        QGridLayout *GLayoutp1;
        QGridLayout *GLayoutp2;
        QStackedLayout *SLayout;
        QWidget *page1;
        QWidget *page2;

        QLabel *welcomeMessage;
        QLineEdit *pseudo1;
        QLineEdit *pseudo2;
        QComboBox *champSelectj1;
        QComboBox *champSelectj2;
        QPushButton *boutonValider;

        QLabel *displayPseudo1;
        QLabel *displayPseudo2;
        QLabel *turncounter;

        //----Partie Animation----//

        QLabel *LabelStickman1;
        QPixmap *stickman1;
        QPixmap *stickman1animAction1;
        QPixmap *stickman1animAction2;
        QPixmap *stickman1animAction3;
        QPixmap *stickman1crown;
        QPixmap *stickman1coffin;
        QLabel *LabelStickman2;
        QPixmap *stickman2;
        QPixmap *stickman2animAction1;
        QPixmap *stickman2animAction2;
        QPixmap *stickman2animAction3;
        QPixmap *stickman2crown;
        QPixmap *stickman2coffin;

        QTimer *timerj1Action1;
        QTimer *timerj1Action1off;
        QTimer *timerj1Action2;
        QTimer *timerj1Action2off;
        QTimer *timerj1Action3;
        QTimer *timerj1Action3off;
        QTimer *timerj2Action1;
        QTimer *timerj2Action1off;
        QTimer *timerj2Action2;
        QTimer *timerj2Action2off;
        QTimer *timerj2Action3;
        QTimer *timerj2Action3off;
        QTimer *timerbeforedead;

        //----Vie/mana et barres----//

        QLabel *pdvj1;
        QLabel *manaj1;
        QLabel *armurej1;
        QProgressBar *pdvbarj1;
        QProgressBar *manabarj1;

        QLabel *pdvj2;
        QLabel *manaj2;
        QLabel *armurej2;
        QProgressBar *pdvbarj2;
        QProgressBar *manabarj2;

        //----Boutons utilisateur----//

        QPushButton *player1Action1;
        QPushButton *player1Action2;
        QPushButton *player1Action3;
        QPushButton *player1Action4;

        QPushButton *player2Action1;        
        QPushButton *player2Action2;
        QPushButton *player2Action3;
        QPushButton *player2Action4;

        QPushButton *reset;
        QPushButton *precedent;
};

#endif // DEF_MAFENETRE
