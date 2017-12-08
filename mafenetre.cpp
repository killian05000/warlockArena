#include "mafenetre.h"
#include "personnage.h"
#include <QDebug>

MaFenetre::MaFenetre(QWidget *parent)
         : QWidget(parent), player1(nullptr), player2(nullptr)
{
    welcomeMessage = new QLabel("Bienvenue dans Warlock Arena !", this);
    welcomeMessage->setAlignment(Qt::AlignCenter);
    welcomeMessage->setFont(QFont("Sketch Block", 30));

    pseudo1 = new QLineEdit;
    pseudo1->setMaxLength(20);
    pseudo1->setFixedWidth(pseudo1->sizeHint().width());

    pseudo2 = new QLineEdit;
    pseudo2->setMaxLength(20);
    pseudo2->setFixedWidth(pseudo2->sizeHint().width());

    FLayout = new QFormLayout;
    FLayout->addRow("Pseudo du joueur 1 :", pseudo1);
    FLayout->addRow("Pseudo du joueur 2 :", pseudo2);
    FLayout->setFormAlignment(Qt::AlignRight);

    champSelectj1 = new QComboBox(this);
    champSelectj1->addItem("Guerrier");
    champSelectj1->addItem("Mage");

    champSelectj2 = new QComboBox(this);
    champSelectj2->addItem("Guerrier");
    champSelectj2->addItem("Mage");

    boutonValider = new QPushButton("Valider", this);
    boutonValider->setStyleSheet("margin-top: 100px; padding: 3px; padding-left: 10px; padding-right: 10px;");

    //------------Images--------------//

    LabelStickman1 = new QLabel(this);
    LabelStickman2= new QLabel(this);

    //--------Affichage des carac-------//

    displayPseudo1 = new QLabel(this);
    displayPseudo1->setAlignment(Qt::AlignCenter);
    displayPseudo1->setMinimumHeight(75);
    displayPseudo2 = new QLabel(this);
    displayPseudo2->setAlignment(Qt::AlignCenter);

    turncounter = new QLabel(this);
    turncounter->setAlignment(Qt::AlignCenter);
    turncounter->setFont(QFont("Sketch Block", 40));

    pdvj1 = new QLabel(this);
    pdvj1->setStyleSheet("color: #FF0000");
    pdvbarj1 = new QProgressBar(this);
    pdvbarj1->setOrientation(Qt::Vertical);
    pdvbarj1->setStyleSheet("selection-background-color: #3ADF00;");

    manaj1 = new QLabel(this);
    manaj1->setStyleSheet("color : #357AB7");
    manabarj1 = new QProgressBar(this);
    manabarj1->setOrientation(Qt::Vertical);
    manabarj1->setStyleSheet("selection-background-color: #357AB7");

    armurej1 = new QLabel(this);
    armurej1->setStyleSheet("color: #FF8000;");

    pdvj2 = new QLabel(this);
    pdvj2->setStyleSheet("color : #FF0000");
    pdvj2->setAlignment(Qt::AlignRight);
    pdvbarj2 = new QProgressBar(this);
    pdvbarj2->setOrientation(Qt::Vertical);
    pdvbarj2->setStyleSheet("selection-background-color: #3ADF00;");

    manaj2 = new QLabel(this);
    manaj2->setStyleSheet("color : #357AB7");
    manaj2->setAlignment(Qt::AlignRight);
    manabarj2 = new QProgressBar(this);
    manabarj2->setOrientation(Qt::Vertical);
    manabarj2->setStyleSheet("selection-background-color: #357AB7");

    armurej2 = new QLabel(this);
    armurej2->setAlignment(Qt::AlignRight);
    armurej2->setStyleSheet("color : #FF8000");

    //--------Timer's Animations---------//

    timerj1Action1 = new QTimer(this);
    timerj1Action1->setSingleShot(true);
    timerj1Action1off = new QTimer(this);
    timerj1Action1off->setSingleShot(true);

    timerj1Action2 = new QTimer(this);
    timerj1Action2->setSingleShot(true);
    timerj1Action2off = new QTimer(this);
    timerj1Action2off->setSingleShot(true);

    timerj1Action3 = new QTimer(this);
    timerj1Action3->setSingleShot(true);
    timerj1Action3off = new QTimer(this);
    timerj1Action3off->setSingleShot(true);

    timerj2Action1 = new QTimer(this);
    timerj2Action1->setSingleShot(true);
    timerj2Action1off = new QTimer(this);
    timerj2Action1off->setSingleShot(true);

    timerj2Action2 = new QTimer(this);
    timerj2Action2->setSingleShot(true);
    timerj2Action2off = new QTimer(this);
    timerj2Action2off->setSingleShot(true);

    timerj2Action3 = new QTimer(this);
    timerj2Action3->setSingleShot(true);
    timerj2Action3off = new QTimer(this);
    timerj2Action3off->setSingleShot(true);

    timerbeforedead = new QTimer(this);
    timerbeforedead->setSingleShot(true);

    //----------Les compétences------------//

    player1Action1 = new QPushButton(this);
    player1Action2 = new QPushButton(this);
    player1Action3 = new QPushButton(this);
    player1Action4 = new QPushButton(this);

    player2Action1 = new QPushButton(this);
    player2Action2 = new QPushButton(this);
    player2Action3 = new QPushButton(this);
    player2Action4 = new QPushButton(this);

    reset = new QPushButton("recommencer", this);
    precedent = new QPushButton(" précédent ", this);
    precedent->setFixedSize(reset->sizeHint());

    //------------Les Layouts-------------//

    page1 = new QWidget(this);
    page2 = new QWidget(this);

    SLayout = new QStackedLayout;
    GLayoutp1 = new QGridLayout();
    GLayoutp2 = new QGridLayout();

    page1->setLayout(GLayoutp1);
    page2->setLayout(GLayoutp2);
    SLayout->insertWidget(0, page1);
    SLayout->insertWidget(1, page2);

    setLayout(SLayout);
    SLayout->setCurrentIndex(0);


    GLayoutp1->addWidget(welcomeMessage, 0, 0, 2, 5);
    GLayoutp1->addLayout(FLayout, 2, 0, 2, 3);
    GLayoutp1->addWidget(boutonValider, 4, 0, 1, 5, Qt::AlignHCenter);
    GLayoutp1->addWidget(champSelectj1, 2, 3, 1, 2, Qt::AlignLeft);
    GLayoutp1->addWidget(champSelectj2, 3, 3, 1, 2, Qt::AlignLeft);


    GLayoutp2->addWidget(reset, 0, 5);
    GLayoutp2->addWidget(precedent, 0, 1);
    GLayoutp2->addWidget(turncounter, 0, 2, 2, 3);
    GLayoutp2->addWidget(displayPseudo1, 1, 2, 1, 1);
    GLayoutp2->addWidget(displayPseudo2, 1, 4, 1, 1);
    GLayoutp2->addWidget(LabelStickman1, 2, 2, 10, 1);
    GLayoutp2->addWidget(LabelStickman2, 2, 4, 10, 1);
    GLayoutp2->addWidget(pdvj1, 2, 1);
    GLayoutp2->addWidget(manaj1, 3, 1);
    GLayoutp2->addWidget(armurej1, 4, 1);
    GLayoutp2->addWidget(pdvj2, 2, 5);
    GLayoutp2->addWidget(manaj2, 3, 5);
    GLayoutp2->addWidget(armurej2, 4, 5);
    GLayoutp2->addWidget(pdvbarj1, 2, 0, 10, 1);
    GLayoutp2->addWidget(pdvbarj2, 2, 6, 10, 1);
    GLayoutp2->addWidget(manabarj1, 8, 1, 4, 1);
    GLayoutp2->addWidget(manabarj2, 8, 5, 4, 1, Qt::AlignRight);
    GLayoutp2->addWidget(player1Action1, 12, 2);
    GLayoutp2->addWidget(player1Action2, 13, 2);
    GLayoutp2->addWidget(player1Action3, 14, 2);
    GLayoutp2->addWidget(player1Action4, 15, 2);
    GLayoutp2->addWidget(player2Action1, 12, 4);
    GLayoutp2->addWidget(player2Action2, 13, 4);
    GLayoutp2->addWidget(player2Action3, 14, 4);
    GLayoutp2->addWidget(player2Action4, 15, 4);

    //-------------------------Bontons utilisateur-----------------------------//

    connect(pseudo2, &QLineEdit::returnPressed, this, &MaFenetre::createPlayers);
    connect(boutonValider, &QPushButton::clicked, this, &MaFenetre::createPlayers);

    connect(player1Action1, &QPushButton::clicked, this, &MaFenetre::funcplayer1Action1);
    connect(player1Action2, &QPushButton::clicked, this, &MaFenetre::funcplayer1Action2);
    connect(player1Action3, &QPushButton::clicked, this, &MaFenetre::funcplayer1Action3);
    connect(player1Action4, &QPushButton::clicked, this, &MaFenetre::funcplayer1Action4);
    connect(player2Action1, &QPushButton::clicked, this, &MaFenetre::funcplayer2Action1);
    connect(player2Action2, &QPushButton::clicked, this, &MaFenetre::funcplayer2Action2);
    connect(player2Action3, &QPushButton::clicked, this, &MaFenetre::funcplayer2Action3);
    connect(player2Action4, &QPushButton::clicked, this, &MaFenetre::funcplayer2Action4);

    connect(reset, &QPushButton::clicked, this, &MaFenetre::funcreset);
    connect(precedent, &QPushButton::clicked, this, &MaFenetre::funcprecedent);

    //---------------------------Anim's connect---------------------------------//

    connect(timerj1Action1, &QTimer::timeout, this, &MaFenetre::funcanimj1Action1);
    connect(timerj1Action1off, &QTimer::timeout, this, &MaFenetre::updatePlayerInfo);
    connect(timerj1Action2, &QTimer::timeout, this, &MaFenetre::funcanimj1Action2);
    connect(timerj1Action2off, &QTimer::timeout, this, &MaFenetre::updatePlayerInfo);
    connect(timerj1Action3, &QTimer::timeout, this, &MaFenetre::funcanimj1Action3);
    connect(timerj1Action3off, &QTimer::timeout, this, &MaFenetre::updatePlayerInfo);

    connect(timerj2Action1, &QTimer::timeout, this, &MaFenetre::funcanimj2Action1);
    connect(timerj2Action1off, &QTimer::timeout, this, &MaFenetre::updatePlayerInfo);
    connect(timerj2Action2, &QTimer::timeout, this, &MaFenetre::funcanimj2Action2);
    connect(timerj2Action2off, &QTimer::timeout, this, &MaFenetre::updatePlayerInfo);
    connect(timerj2Action3, &QTimer::timeout, this, &MaFenetre::funcanimj2Action3);
    connect(timerj2Action3off, &QTimer::timeout, this, &MaFenetre::updatePlayerInfo);
    connect(timerbeforedead, &QTimer::timeout, this, &MaFenetre::funcbeforedead);
}

void MaFenetre::createPlayers()
{

    if (champSelectj1->currentText()=="Guerrier")
        player1 = new Guerrier();
    else if (champSelectj1->currentText()=="Mage")
        player1 = new Mage();

    if (champSelectj2->currentText()=="Guerrier")
        player2 = new Guerrier();
    else if (champSelectj2->currentText()=="Mage")
        player2 = new Mage();


    stickman1 = new QPixmap(QString::fromStdString(player1->S1P));
    stickman1animAction1 = new QPixmap(QString::fromStdString(player1->S1APA1));
    stickman1animAction2 = new QPixmap(QString::fromStdString(player1->S1APA2));
    stickman1animAction3 = new QPixmap(QString::fromStdString(player1->S1APA3));
    stickman1crown = new QPixmap(QString::fromStdString(player1->S1PC));
    stickman1coffin = new QPixmap(QString::fromStdString(player1->S1C));
    LabelStickman1->setPixmap(*stickman1);

    stickman2 = new QPixmap(QString::fromStdString(player2->S2P));
    stickman2animAction1 = new QPixmap(QString::fromStdString(player2->S2APA1));
    stickman2animAction2 = new QPixmap(QString::fromStdString(player2->S2APA2));
    stickman2animAction3 = new QPixmap(QString::fromStdString(player2->S2APA3));
    stickman2crown = new QPixmap(QString::fromStdString(player2->S2PC));
    stickman2coffin = new QPixmap(QString::fromStdString(player2->S2C));
    LabelStickman2->setPixmap(*stickman2);


    pdvbarj1->setMaximum(player1->getviemax());
    manabarj1->setMaximum(player1->getmanamax());
    pdvbarj2->setMaximum(player2->getviemax());
    manabarj2->setMaximum(player2->getmanamax());


    player1Action1->setText(QString::fromStdString(player1->nomAction1));
    player1Action1->setToolTip(QString::fromStdString(player1->infobulleNomAction1));
    player1Action2->setText(QString::fromStdString(player1->nomAction2));
    player1Action2->setToolTip(QString::fromStdString(player1->infobulleNomAction2));
    player1Action3->setText(QString::fromStdString(player1->nomAction3));
    player1Action3->setToolTip(QString::fromStdString(player1->infobulleNomAction3));
    player1Action4->setText(QString::fromStdString(player1->nomAction4));
    player1Action4->setToolTip(QString::fromStdString(player1->infobulleNomAction4));

    player2Action1->setText(QString::fromStdString(player2->nomAction1));
    player2Action1->setToolTip(QString::fromStdString(player2->infobulleNomAction1));
    player2Action2->setText(QString::fromStdString(player2->nomAction2));
    player2Action2->setToolTip(QString::fromStdString(player2->infobulleNomAction2));
    player2Action3->setText(QString::fromStdString(player2->nomAction3));
    player2Action3->setToolTip(QString::fromStdString(player2->infobulleNomAction3));
    player2Action4->setText(QString::fromStdString(player2->nomAction4));
    player2Action4->setToolTip(QString::fromStdString(player2->infobulleNomAction4));

    setnomplayer1();
    setnomplayer2();

    funcquicommence();
    updatePlayerInfo();
}

//--------Anim du player 1--------//

void MaFenetre::funcanimj1Action1()
{
    LabelStickman1->setPixmap(*stickman1animAction1);
    timerj1Action1off->start(500);
}

void MaFenetre::funcanimj1Action2()
{
    LabelStickman1->setPixmap(*stickman1animAction2);
    timerj1Action2off->start(500);
}

void MaFenetre::funcanimj1Action3()
{
    LabelStickman1->setPixmap(*stickman1animAction3);
    timerj1Action3off->start(500);
}

//--------Anim du player 2-------//

void MaFenetre::funcanimj2Action1()
{
    LabelStickman2->setPixmap(*stickman2animAction1);
    timerj2Action1off->start(500);
}

void MaFenetre::funcanimj2Action2()
{
    LabelStickman2->setPixmap(*stickman2animAction2);
    timerj2Action2off->start(500);
}

void MaFenetre::funcanimj2Action3()
{
    LabelStickman2->setPixmap(*stickman2animAction3);
    timerj2Action3off->start(500);
}

//--------Autres fonctions-------//

void MaFenetre::funcquicommence()
{
    random_device generator;
    uniform_int_distribution<int> distribution(1,2);
    carac quicommence = distribution(generator);

    if (quicommence == 1)
        endactionplayer2();
    else
        endactionplayer1();
    Personnage::decreaseTurn(0.5);
}

void MaFenetre::setnomplayer1()
{
    player1->setnom(pseudo1->text().toStdString());
    SLayout->setCurrentIndex(1);
    updatePlayerInfo();
}

void MaFenetre::setnomplayer2()
{
    player2->setnom(pseudo2->text().toStdString());
    SLayout->setCurrentIndex(1);
    updatePlayerInfo();
}

void MaFenetre::affectpdvbarj1()
{
    pdvbarj1->setValue(player1->getvie());
}

void MaFenetre::affectpdvbarj2()
{
    pdvbarj2->setValue(player2->getvie());
}

void MaFenetre::affectmanabarj1()
{
    manabarj1->setValue(player1->getmana());
}

void MaFenetre::affectmanabarj2()
{
    manabarj2->setValue(player2->getmana());
}

void MaFenetre::funcplayer1Action1()
{
    player1->action1(*player2);
    timerj1Action1->start(100);
    endactionplayer1();
    updatePlayerInfo();
}

void MaFenetre::funcplayer1Action2()
{
    player1->action2(*player2);
    timerj1Action2->start(100);
    endactionplayer1();
    updatePlayerInfo();
}

void MaFenetre::funcplayer1Action3()
{
    player1->action3(*player2);
    timerj1Action3->start(100);
    endactionplayer1();
    updatePlayerInfo();
}

void MaFenetre::funcplayer1Action4()
{
    player1->action4(*player2);
    timerj1Action3->start(100);
    endactionplayer1();
    updatePlayerInfo();
}

void MaFenetre::funcplayer2Action1()
{
    player2->action1(*player1);
    timerj2Action1->start(100);
    endactionplayer2();
    updatePlayerInfo();
}

void MaFenetre::funcplayer2Action2()
{
    player2->action2(*player1);
    timerj2Action2->start(100);
    endactionplayer2();
    updatePlayerInfo();
}

void MaFenetre::funcplayer2Action3()
{
    player2->action3(*player1);
    timerj2Action3->start(100);
    endactionplayer2();
    updatePlayerInfo();
}

void MaFenetre::funcplayer2Action4()
{
    player2->action4(*player1);
    timerj2Action3->start(100);
    endactionplayer2();
    updatePlayerInfo();
}

void MaFenetre::funcprecedent()
{
    SLayout->setCurrentIndex(0);
    pseudo1->setText("");
    pseudo2->setText("");
    funcreset();
}

void MaFenetre::funcreset()
{
    player1->setvie(player1->getviemax());
    player1->setmana(player1->getmanamax());
    player1->setarmure(player1->getarmuremax());
    player1->setdegats(0);
    player2->setvie(player2->getviemax());
    player2->setmana(player2->getmanamax());
    player2->setarmure(player2->getarmuremax());
    player2->setdegats(0);
    Personnage::setTurn(1);

    player1Action1->setEnabled(1);
    player1Action2->setEnabled(1);
    player1Action3->setEnabled(1);
    player2Action4->setEnabled(1);
    player2Action1->setEnabled(1);
    player2Action2->setEnabled(1);
    player2Action3->setEnabled(1);
    player2Action4->setEnabled(1);

    LabelStickman1->setPixmap(*stickman1);
    LabelStickman2->setPixmap(*stickman2);

    funcquicommence();
    updatePlayerInfo();
}

void MaFenetre::endactionplayer1()
{
    player1->setIsTurn(false);
    player2->setIsTurn(true);

    player1Action1->setDisabled(1);
    player1Action2->setDisabled(1);
    player1Action3->setDisabled(1);
    player1Action4->setDisabled(1);

    player2Action1->setDisabled(1);
    player2Action2->setDisabled(1);
    player2Action3->setDisabled(1);
    player2Action4->setDisabled(1);

    Personnage::increaseTurn(0.5);

    if ((player2->getvie() !=0) && (player1->getvie() != 0))
    {
        if (player2->action1availible())
            player2Action1->setEnabled(1);
        if (player2->action2availible())
            player2Action2->setEnabled(1);
        if (player2->action3availible())
            player2Action3->setEnabled(1);
        if (player2->action4availible())
            player2Action4->setEnabled(1);
    }
}

void MaFenetre::endactionplayer2()
{
    player2->setIsTurn(false);
    player1->setIsTurn(true);

    player2Action1->setDisabled(1);
    player2Action2->setDisabled(1);
    player2Action3->setDisabled(1);
    player2Action4->setDisabled(1);

    player1Action1->setDisabled(1);
    player1Action2->setDisabled(1);
    player1Action3->setDisabled(1);
    player1Action4->setDisabled(1);

    Personnage::increaseTurn(0.5);

    if ((player1->getvie() != 0) && (player2->getvie() != 0))
    {
        if (player1->action1availible())
            player1Action1->setEnabled(1);
        if (player1->action2availible())
            player1Action2->setEnabled(1);
        if (player1->action3availible())
            player1Action3->setEnabled(1);
        if (player1->action4availible())
            player1Action4->setEnabled(1);
    }
}

void MaFenetre::updatePlayerInfo()
{
    displayPseudo1->setText(QString::fromStdString(player1->getnom()));
    pdvj1->setText(QString::number(player1->getvie()));
    manaj1->setText(QString::number(player1->getmana()));
    armurej1->setText(QString::number(player1->getarmure()));
    affectpdvbarj1();
    affectmanabarj1();


    displayPseudo2->setText(QString::fromStdString(player2->getnom()));
    pdvj2->setText(QString::number(player2->getvie()));
    manaj2->setText(QString::number(player2->getmana()));
    armurej2->setText(QString::number(player2->getarmure()));
    affectpdvbarj2();
    affectmanabarj2();

    if (Personnage::getTurn()-int(Personnage::getTurn())==0)
        turncounter->setText(QString::number(Personnage::getTurn()));

    if((((double)player1->getvie()/player1->getviemax())*100.) >= 60.)
    {
        pdvbarj1->setStyleSheet("selection-background-color: #3ADF00;");
        pdvj1->setStyleSheet("color : #3ADF00");
    }
    if((((double)player1->getvie()/player1->getviemax())*100.) < 60.)
    {
        pdvbarj1->setStyleSheet("selection-background-color: #FFFF00;");
        pdvj1->setStyleSheet("color : #FFFF00");
    }
    if((((double)player1->getvie()/player1->getviemax())*100.) < 25.)
    {
        pdvbarj1->setStyleSheet("selection-background-color: #FF0000;");
        pdvj1->setStyleSheet("color : #FF0000");
    }

    if((((double)player2->getvie()/player2->getviemax())*100.) >= 60.)
    {
        pdvbarj2->setStyleSheet("selection-background-color: #3ADF00;");
        pdvj2->setStyleSheet("color : #3ADF00");
    }
    if((((double)player2->getvie()/player2->getviemax())*100.) < 60.)
    {
        pdvbarj2->setStyleSheet("selection-background-color: #FFFF00;");
        pdvj2->setStyleSheet("color : #FFFF00");
    }
    if((((double)player2->getvie()/player2->getviemax())*100.) < 25.)
    {
        pdvbarj2->setStyleSheet("selection-background-color: #FF0000;");
        pdvj2->setStyleSheet("color : #FF0000");
    }

//    if ((player1->getvie()==0) || (player2->getvie()==0))
//        funcbeforedead();
    timerbeforedead->start(500);
}

void MaFenetre::funcbeforedead()
{
    if((player1->getvie() == 0) && (player2->getvie() == 0))
    {
        LabelStickman1->setPixmap(*stickman1coffin);
        LabelStickman2->setPixmap(*stickman2coffin);
//        player1->setarmure(0);
//        player2->setarmure(0);
    }
    else if (player2->getvie() == 0)
    {
        LabelStickman1->setPixmap(*stickman1crown);
        LabelStickman2->setPixmap(*stickman2coffin);
    }
    else if (player1->getvie() == 0)
    {
        LabelStickman2->setPixmap(*stickman2crown);
        LabelStickman1->setPixmap(*stickman1coffin);
    }
    else
    {
        LabelStickman1->setPixmap(*stickman1);
        LabelStickman2->setPixmap(*stickman2);
    }
}

void MaFenetre::keyPressEvent(QKeyEvent *event)
{
    if ((event->key() == Qt::Key_A) || (event->key() == Qt::Key_Z) || (event->key() == Qt::Key_E) || (event->key() == Qt::Key_R))
    {
        if ((player1->getvie()!=0) && (player2->getvie()!=0))
        {
            if (event->key() == Qt::Key_A)
            {
                if ((player1->getIsTurn()) && (player2->getIsTurn()==false) && (player1->action1availible()))
                    funcplayer1Action1();
                else if ((player2->getIsTurn()) && (player1->getIsTurn()==false) && (player2->action1availible()))
                    funcplayer2Action1();
            }
            if (event->key() == Qt::Key_Z)
            {
                if ((player1->getIsTurn()) && (player2->getIsTurn()==false) && (player1->action2availible()))
                    funcplayer1Action2();
                else if ((player2->getIsTurn()) && (player1->getIsTurn()==false) && (player2->action2availible()))
                    funcplayer2Action2();
            }
            if (event->key() == Qt::Key_E)
            {
                if ((player1->getIsTurn()) && (player2->getIsTurn()==false) && (player1->action3availible()))
                    funcplayer1Action3();
                else if ((player2->getIsTurn()) && (player1->getIsTurn()==false) && (player2->action3availible()))
                    funcplayer2Action3();
            }
            if (event->key() == Qt::Key_R)
            {
                if ((player1->getIsTurn()) && (player2->getIsTurn()==false) && (player1->action4availible()))
                    funcplayer1Action4();
                else if ((player2->getIsTurn()) && (player1->getIsTurn()==false) && (player2->action4availible()))
                    funcplayer2Action4();
            }
        }
    }
}
