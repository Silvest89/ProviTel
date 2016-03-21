/********************************************************************************
** Form generated from reading UI file 'provitel.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROVITEL_H
#define UI_PROVITEL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "intelmessages.h"
#include "planets.h"
#include "provimap.h"

QT_BEGIN_NAMESPACE

class Ui_ProviTel
{
public:
    QAction *actionSound;
    QWidget *centralWidget;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;
    QDockWidget *dockWidget;
    ProviMap *proviMap;
    Planets *PZRFE3;
    Planets *PLF2KP;
    Planets *PK1L1J;
    Planets *PMVCJE;
    Planets *PFYH5B;
    Planets *PBK4YC;
    Planets *P8P9BM;
    Planets *P3DCQU;
    Planets *P3KBJ0;
    Planets *P0BHLZ;
    Planets *PIMGAB;
    Planets *P18XAC;
    Planets *P3GXFU;
    Planets *PVKIT7;
    Planets *PISR7P;
    Planets *PDPJD4;
    Planets *PQRK85;
    Planets *P5IO8U;
    Planets *PFC3YI;
    Planets *PUHYMT;
    Planets *P49GCR;
    Planets *P9UY4H;
    Planets *PHGKI6;
    Planets *PYQB22;
    Planets *PH6CX8;
    Planets *PSHINTAHT;
    Planets *PD6WS1;
    Planets *PSII89;
    Planets *PD61AG;
    Planets *PYMPWL;
    Planets *PKARI;
    Planets *P9FOB2;
    Planets *P4BNQN;
    Planets *PG5EN2;
    Planets *PASSAH;
    Planets *PYWS0Z;
    Planets *PXHQ7V;
    Planets *PKBP7G;
    Planets *PDITAL;
    Planets *PBWPLZ;
    Planets *PTUO0T;
    Planets *PEYCML;
    Planets *PY9MDG;
    Planets *PJEIVE;
    Planets *PDNR7M;
    Planets *PK1Y5H;
    Planets *POY5JQ;
    Planets *PNRMSH;
    Planets *PIWZ3C;
    Planets *PZQZ3Y;
    Planets *POXIYV;
    Planets *PGAOTH;
    Planets *PTA3T3;
    Planets *PUL7I8;
    Planets *PBRN97;
    Planets *PERVKP;
    Planets *PS25CK;
    Planets *P2TEGJ;
    Planets *PAY24L;
    Planets *PX6ABY;
    Planets *PXR3NM;
    Planets *PR3K7K;
    Planets *P8BVLX;
    Planets *PGB22J;
    Planets *PMISABA;
    Planets *PN8XAL;
    Planets *P18GZM;
    Planets *P11I53;
    Planets *PZTLPU;
    Planets *PAYYCU;
    Planets *P2VCS5;
    Planets *PH9J8N;
    Planets *PC1HAB;
    Planets *PGA9P0;
    Planets *PHP6Z6;
    Planets *P7YWVS;
    Planets *PTXJII;
    Planets *P7MDS1;
    Planets *PTRPFU;
    Planets *PMH9CS;
    Planets *PFX7EM;
    Planets *PDGTMI;
    Planets *PFSW3C;
    Planets *PTURI6;
    Planets *PS9AX;
    Planets *P6OQJV;
    Planets *P08ZJJ;
    Planets *PX4WZD;
    Planets *PI7S1S;
    Planets *PG7AQ7;
    Planets *PQBLBV;
    Planets *PF9EKX;
    Planets *PI539;
    Planets *PINQWR;
    Planets *PGN7XY;
    Planets *PQOSRRI;
    Planets *PFDTOO;
    Planets *P5KGPY;
    QDockWidget *dockWidget_3;
    QWidget *dockWidgetContents_6;
    QVBoxLayout *verticalLayout_3;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    IntelMessages *listView;

    void setupUi(QMainWindow *ProviTel)
    {
        if (ProviTel->objectName().isEmpty())
            ProviTel->setObjectName(QStringLiteral("ProviTel"));
        ProviTel->resize(1600, 900);
        ProviTel->setAutoFillBackground(false);
        ProviTel->setDockNestingEnabled(false);
        actionSound = new QAction(ProviTel);
        actionSound->setObjectName(QStringLiteral("actionSound"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/images/sound_icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSound->setIcon(icon);
        centralWidget = new QWidget(ProviTel);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        ProviTel->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(ProviTel);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1600, 21));
        ProviTel->setMenuBar(menuBar);
        mainToolBar = new QToolBar(ProviTel);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        ProviTel->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(ProviTel);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        ProviTel->setStatusBar(statusBar);
        dockWidget = new QDockWidget(ProviTel);
        dockWidget->setObjectName(QStringLiteral("dockWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(dockWidget->sizePolicy().hasHeightForWidth());
        dockWidget->setSizePolicy(sizePolicy);
        dockWidget->setMinimumSize(QSize(1150, 522));
        dockWidget->setAutoFillBackground(false);
        dockWidget->setStyleSheet(QStringLiteral(""));
        dockWidget->setFeatures(QDockWidget::DockWidgetFloatable|QDockWidget::DockWidgetMovable);
        dockWidget->setAllowedAreas(Qt::LeftDockWidgetArea|Qt::RightDockWidgetArea);
        proviMap = new ProviMap();
        proviMap->setObjectName(QStringLiteral("proviMap"));
        sizePolicy.setHeightForWidth(proviMap->sizePolicy().hasHeightForWidth());
        proviMap->setSizePolicy(sizePolicy);
        proviMap->setMinimumSize(QSize(1150, 500));
        proviMap->setAutoFillBackground(false);
        proviMap->setStyleSheet(QLatin1String("QWidget { background-color: white;}\n"
"\n"
"QPushButton {\n"
"    background-color: white;\n"
"    border-style: outset;\n"
"    border-width: 1px;\n"
"    border-radius: 15px;\n"
"    border-color: black;\n"
"    font:  11px;\n"
"}"));
        PZRFE3 = new Planets(proviMap);
        PZRFE3->setObjectName(QStringLiteral("PZRFE3"));
        PZRFE3->setGeometry(QRect(220, 210, 61, 31));
        PLF2KP = new Planets(proviMap);
        PLF2KP->setObjectName(QStringLiteral("PLF2KP"));
        PLF2KP->setGeometry(QRect(10, 30, 61, 31));
        PK1L1J = new Planets(proviMap);
        PK1L1J->setObjectName(QStringLiteral("PK1L1J"));
        PK1L1J->setGeometry(QRect(10, 250, 61, 31));
        PMVCJE = new Planets(proviMap);
        PMVCJE->setObjectName(QStringLiteral("PMVCJE"));
        PMVCJE->setGeometry(QRect(70, 190, 61, 31));
        PFYH5B = new Planets(proviMap);
        PFYH5B->setObjectName(QStringLiteral("PFYH5B"));
        PFYH5B->setGeometry(QRect(290, 30, 61, 31));
        PBK4YC = new Planets(proviMap);
        PBK4YC->setObjectName(QStringLiteral("PBK4YC"));
        PBK4YC->setGeometry(QRect(100, 70, 61, 31));
        P8P9BM = new Planets(proviMap);
        P8P9BM->setObjectName(QStringLiteral("P8P9BM"));
        P8P9BM->setGeometry(QRect(420, 30, 61, 31));
        P3DCQU = new Planets(proviMap);
        P3DCQU->setObjectName(QStringLiteral("P3DCQU"));
        P3DCQU->setGeometry(QRect(290, 120, 61, 31));
        P3KBJ0 = new Planets(proviMap);
        P3KBJ0->setObjectName(QStringLiteral("P3KBJ0"));
        P3KBJ0->setGeometry(QRect(290, 170, 61, 31));
        P0BHLZ = new Planets(proviMap);
        P0BHLZ->setObjectName(QStringLiteral("P0BHLZ"));
        P0BHLZ->setGeometry(QRect(220, 80, 61, 31));
        PIMGAB = new Planets(proviMap);
        PIMGAB->setObjectName(QStringLiteral("PIMGAB"));
        PIMGAB->setGeometry(QRect(150, 120, 61, 31));
        P18XAC = new Planets(proviMap);
        P18XAC->setObjectName(QStringLiteral("P18XAC"));
        P18XAC->setGeometry(QRect(150, 170, 61, 31));
        P3GXFU = new Planets(proviMap);
        P3GXFU->setObjectName(QStringLiteral("P3GXFU"));
        P3GXFU->setGeometry(QRect(550, 50, 61, 31));
        PVKIT7 = new Planets(proviMap);
        PVKIT7->setObjectName(QStringLiteral("PVKIT7"));
        PVKIT7->setGeometry(QRect(650, 30, 61, 31));
        PISR7P = new Planets(proviMap);
        PISR7P->setObjectName(QStringLiteral("PISR7P"));
        PISR7P->setGeometry(QRect(290, 240, 61, 31));
        PDPJD4 = new Planets(proviMap);
        PDPJD4->setObjectName(QStringLiteral("PDPJD4"));
        PDPJD4->setGeometry(QRect(380, 220, 61, 31));
        PQRK85 = new Planets(proviMap);
        PQRK85->setObjectName(QStringLiteral("PQRK85"));
        PQRK85->setGeometry(QRect(460, 210, 61, 31));
        P5IO8U = new Planets(proviMap);
        P5IO8U->setObjectName(QStringLiteral("P5IO8U"));
        P5IO8U->setGeometry(QRect(400, 150, 61, 31));
        PFC3YI = new Planets(proviMap);
        PFC3YI->setObjectName(QStringLiteral("PFC3YI"));
        PFC3YI->setGeometry(QRect(490, 130, 61, 31));
        PUHYMT = new Planets(proviMap);
        PUHYMT->setObjectName(QStringLiteral("PUHYMT"));
        PUHYMT->setGeometry(QRect(540, 200, 61, 31));
        P49GCR = new Planets(proviMap);
        P49GCR->setObjectName(QStringLiteral("P49GCR"));
        P49GCR->setGeometry(QRect(590, 120, 61, 31));
        P9UY4H = new Planets(proviMap);
        P9UY4H->setObjectName(QStringLiteral("P9UY4H"));
        P9UY4H->setGeometry(QRect(630, 200, 61, 31));
        PHGKI6 = new Planets(proviMap);
        PHGKI6->setObjectName(QStringLiteral("PHGKI6"));
        PHGKI6->setGeometry(QRect(740, 10, 61, 31));
        PYQB22 = new Planets(proviMap);
        PYQB22->setObjectName(QStringLiteral("PYQB22"));
        PYQB22->setGeometry(QRect(830, 10, 61, 31));
        PH6CX8 = new Planets(proviMap);
        PH6CX8->setObjectName(QStringLiteral("PH6CX8"));
        PH6CX8->setGeometry(QRect(700, 150, 61, 31));
        PSHINTAHT = new Planets(proviMap);
        PSHINTAHT->setObjectName(QStringLiteral("PSHINTAHT"));
        PSHINTAHT->setGeometry(QRect(770, 90, 61, 31));
        PD6WS1 = new Planets(proviMap);
        PD6WS1->setObjectName(QStringLiteral("PD6WS1"));
        PD6WS1->setGeometry(QRect(860, 70, 61, 31));
        PSII89 = new Planets(proviMap);
        PSII89->setObjectName(QStringLiteral("PSII89"));
        PSII89->setGeometry(QRect(950, 50, 61, 31));
        PD61AG = new Planets(proviMap);
        PD61AG->setObjectName(QStringLiteral("PD61AG"));
        PD61AG->setGeometry(QRect(790, 140, 61, 31));
        PYMPWL = new Planets(proviMap);
        PYMPWL->setObjectName(QStringLiteral("PYMPWL"));
        PYMPWL->setGeometry(QRect(880, 130, 61, 31));
        PKARI = new Planets(proviMap);
        PKARI->setObjectName(QStringLiteral("PKARI"));
        PKARI->setGeometry(QRect(980, 120, 61, 31));
        P9FOB2 = new Planets(proviMap);
        P9FOB2->setObjectName(QStringLiteral("P9FOB2"));
        P9FOB2->setGeometry(QRect(750, 210, 61, 31));
        P4BNQN = new Planets(proviMap);
        P4BNQN->setObjectName(QStringLiteral("P4BNQN"));
        P4BNQN->setGeometry(QRect(680, 250, 61, 31));
        PG5EN2 = new Planets(proviMap);
        PG5EN2->setObjectName(QStringLiteral("PG5EN2"));
        PG5EN2->setGeometry(QRect(870, 210, 61, 31));
        PASSAH = new Planets(proviMap);
        PASSAH->setObjectName(QStringLiteral("PASSAH"));
        PASSAH->setGeometry(QRect(980, 210, 61, 31));
        PYWS0Z = new Planets(proviMap);
        PYWS0Z->setObjectName(QStringLiteral("PYWS0Z"));
        PYWS0Z->setGeometry(QRect(750, 290, 61, 31));
        PXHQ7V = new Planets(proviMap);
        PXHQ7V->setObjectName(QStringLiteral("PXHQ7V"));
        PXHQ7V->setGeometry(QRect(820, 290, 61, 31));
        PKBP7G = new Planets(proviMap);
        PKBP7G->setObjectName(QStringLiteral("PKBP7G"));
        PKBP7G->setGeometry(QRect(910, 290, 61, 31));
        PDITAL = new Planets(proviMap);
        PDITAL->setObjectName(QStringLiteral("PDITAL"));
        PDITAL->setGeometry(QRect(980, 290, 61, 31));
        PBWPLZ = new Planets(proviMap);
        PBWPLZ->setObjectName(QStringLiteral("PBWPLZ"));
        PBWPLZ->setGeometry(QRect(910, 360, 61, 31));
        PTUO0T = new Planets(proviMap);
        PTUO0T->setObjectName(QStringLiteral("PTUO0T"));
        PTUO0T->setGeometry(QRect(910, 420, 61, 31));
        PEYCML = new Planets(proviMap);
        PEYCML->setObjectName(QStringLiteral("PEYCML"));
        PEYCML->setGeometry(QRect(850, 470, 61, 31));
        PY9MDG = new Planets(proviMap);
        PY9MDG->setObjectName(QStringLiteral("PY9MDG"));
        PY9MDG->setGeometry(QRect(970, 470, 61, 31));
        PJEIVE = new Planets(proviMap);
        PJEIVE->setObjectName(QStringLiteral("PJEIVE"));
        PJEIVE->setGeometry(QRect(780, 360, 61, 31));
        PDNR7M = new Planets(proviMap);
        PDNR7M->setObjectName(QStringLiteral("PDNR7M"));
        PDNR7M->setGeometry(QRect(780, 410, 61, 31));
        PK1Y5H = new Planets(proviMap);
        PK1Y5H->setObjectName(QStringLiteral("PK1Y5H"));
        PK1Y5H->setGeometry(QRect(780, 460, 61, 31));
        POY5JQ = new Planets(proviMap);
        POY5JQ->setObjectName(QStringLiteral("POY5JQ"));
        POY5JQ->setGeometry(QRect(690, 360, 61, 31));
        PNRMSH = new Planets(proviMap);
        PNRMSH->setObjectName(QStringLiteral("PNRMSH"));
        PNRMSH->setGeometry(QRect(690, 410, 61, 31));
        PIWZ3C = new Planets(proviMap);
        PIWZ3C->setObjectName(QStringLiteral("PIWZ3C"));
        PIWZ3C->setGeometry(QRect(690, 460, 61, 31));
        PZQZ3Y = new Planets(proviMap);
        PZQZ3Y->setObjectName(QStringLiteral("PZQZ3Y"));
        PZQZ3Y->setGeometry(QRect(570, 260, 61, 31));
        POXIYV = new Planets(proviMap);
        POXIYV->setObjectName(QStringLiteral("POXIYV"));
        POXIYV->setGeometry(QRect(420, 270, 61, 31));
        PGAOTH = new Planets(proviMap);
        PGAOTH->setObjectName(QStringLiteral("PGAOTH"));
        PGAOTH->setGeometry(QRect(530, 310, 61, 31));
        PTA3T3 = new Planets(proviMap);
        PTA3T3->setObjectName(QStringLiteral("PTA3T3"));
        PTA3T3->setGeometry(QRect(600, 350, 61, 31));
        PUL7I8 = new Planets(proviMap);
        PUL7I8->setObjectName(QStringLiteral("PUL7I8"));
        PUL7I8->setGeometry(QRect(450, 320, 61, 31));
        PBRN97 = new Planets(proviMap);
        PBRN97->setObjectName(QStringLiteral("PBRN97"));
        PBRN97->setGeometry(QRect(330, 290, 61, 31));
        PERVKP = new Planets(proviMap);
        PERVKP->setObjectName(QStringLiteral("PERVKP"));
        PERVKP->setGeometry(QRect(370, 340, 61, 31));
        PS25CK = new Planets(proviMap);
        PS25CK->setObjectName(QStringLiteral("PS25CK"));
        PS25CK->setGeometry(QRect(240, 320, 61, 31));
        P2TEGJ = new Planets(proviMap);
        P2TEGJ->setObjectName(QStringLiteral("P2TEGJ"));
        P2TEGJ->setGeometry(QRect(140, 300, 61, 31));
        PAY24L = new Planets(proviMap);
        PAY24L->setObjectName(QStringLiteral("PAY24L"));
        PAY24L->setGeometry(QRect(10, 350, 61, 31));
        PX6ABY = new Planets(proviMap);
        PX6ABY->setObjectName(QStringLiteral("PX6ABY"));
        PX6ABY->setGeometry(QRect(10, 460, 61, 31));
        PXR3NM = new Planets(proviMap);
        PXR3NM->setObjectName(QStringLiteral("PXR3NM"));
        PXR3NM->setGeometry(QRect(10, 520, 61, 31));
        PR3K7K = new Planets(proviMap);
        PR3K7K->setObjectName(QStringLiteral("PR3K7K"));
        PR3K7K->setGeometry(QRect(20, 630, 61, 31));
        P8BVLX = new Planets(proviMap);
        P8BVLX->setObjectName(QStringLiteral("P8BVLX"));
        P8BVLX->setGeometry(QRect(110, 460, 61, 31));
        PGB22J = new Planets(proviMap);
        PGB22J->setObjectName(QStringLiteral("PGB22J"));
        PGB22J->setGeometry(QRect(110, 520, 61, 31));
        PMISABA = new Planets(proviMap);
        PMISABA->setObjectName(QStringLiteral("PMISABA"));
        PMISABA->setGeometry(QRect(10, 740, 61, 31));
        PN8XAL = new Planets(proviMap);
        PN8XAL->setObjectName(QStringLiteral("PN8XAL"));
        PN8XAL->setGeometry(QRect(90, 680, 61, 31));
        P18GZM = new Planets(proviMap);
        P18GZM->setObjectName(QStringLiteral("P18GZM"));
        P18GZM->setGeometry(QRect(100, 770, 61, 31));
        P11I53 = new Planets(proviMap);
        P11I53->setObjectName(QStringLiteral("P11I53"));
        P11I53->setGeometry(QRect(200, 750, 61, 31));
        PZTLPU = new Planets(proviMap);
        PZTLPU->setObjectName(QStringLiteral("PZTLPU"));
        PZTLPU->setGeometry(QRect(300, 760, 61, 31));
        PAYYCU = new Planets(proviMap);
        PAYYCU->setObjectName(QStringLiteral("PAYYCU"));
        PAYYCU->setGeometry(QRect(390, 760, 61, 31));
        P2VCS5 = new Planets(proviMap);
        P2VCS5->setObjectName(QStringLiteral("P2VCS5"));
        P2VCS5->setGeometry(QRect(390, 700, 61, 31));
        PH9J8N = new Planets(proviMap);
        PH9J8N->setObjectName(QStringLiteral("PH9J8N"));
        PH9J8N->setGeometry(QRect(300, 660, 61, 31));
        PC1HAB = new Planets(proviMap);
        PC1HAB->setObjectName(QStringLiteral("PC1HAB"));
        PC1HAB->setGeometry(QRect(200, 660, 61, 31));
        PGA9P0 = new Planets(proviMap);
        PGA9P0->setObjectName(QStringLiteral("PGA9P0"));
        PGA9P0->setGeometry(QRect(200, 590, 61, 31));
        PHP6Z6 = new Planets(proviMap);
        PHP6Z6->setObjectName(QStringLiteral("PHP6Z6"));
        PHP6Z6->setGeometry(QRect(300, 590, 61, 31));
        P7YWVS = new Planets(proviMap);
        P7YWVS->setObjectName(QStringLiteral("P7YWVS"));
        P7YWVS->setGeometry(QRect(250, 530, 61, 31));
        PTXJII = new Planets(proviMap);
        PTXJII->setObjectName(QStringLiteral("PTXJII"));
        PTXJII->setGeometry(QRect(120, 620, 61, 31));
        P7MDS1 = new Planets(proviMap);
        P7MDS1->setObjectName(QStringLiteral("P7MDS1"));
        P7MDS1->setGeometry(QRect(340, 390, 61, 31));
        PTRPFU = new Planets(proviMap);
        PTRPFU->setObjectName(QStringLiteral("PTRPFU"));
        PTRPFU->setGeometry(QRect(300, 440, 61, 31));
        PMH9CS = new Planets(proviMap);
        PMH9CS->setObjectName(QStringLiteral("PMH9CS"));
        PMH9CS->setGeometry(QRect(210, 440, 61, 31));
        PFX7EM = new Planets(proviMap);
        PFX7EM->setObjectName(QStringLiteral("PFX7EM"));
        PFX7EM->setGeometry(QRect(340, 510, 61, 31));
        PDGTMI = new Planets(proviMap);
        PDGTMI->setObjectName(QStringLiteral("PDGTMI"));
        PDGTMI->setGeometry(QRect(420, 460, 61, 31));
        PFSW3C = new Planets(proviMap);
        PFSW3C->setObjectName(QStringLiteral("PFSW3C"));
        PFSW3C->setGeometry(QRect(510, 540, 61, 31));
        PTURI6 = new Planets(proviMap);
        PTURI6->setObjectName(QStringLiteral("PTURI6"));
        PTURI6->setGeometry(QRect(480, 750, 61, 31));
        PS9AX = new Planets(proviMap);
        PS9AX->setObjectName(QStringLiteral("PS9AX"));
        PS9AX->setGeometry(QRect(570, 730, 61, 31));
        P6OQJV = new Planets(proviMap);
        P6OQJV->setObjectName(QStringLiteral("P6OQJV"));
        P6OQJV->setGeometry(QRect(500, 670, 61, 31));
        P08ZJJ = new Planets(proviMap);
        P08ZJJ->setObjectName(QStringLiteral("P08ZJJ"));
        P08ZJJ->setGeometry(QRect(640, 670, 61, 31));
        PX4WZD = new Planets(proviMap);
        PX4WZD->setObjectName(QStringLiteral("PX4WZD"));
        PX4WZD->setGeometry(QRect(570, 610, 61, 31));
        PI7S1S = new Planets(proviMap);
        PI7S1S->setObjectName(QStringLiteral("PI7S1S"));
        PI7S1S->setGeometry(QRect(700, 720, 61, 31));
        PG7AQ7 = new Planets(proviMap);
        PG7AQ7->setObjectName(QStringLiteral("PG7AQ7"));
        PG7AQ7->setGeometry(QRect(690, 570, 61, 31));
        PQBLBV = new Planets(proviMap);
        PQBLBV->setObjectName(QStringLiteral("PQBLBV"));
        PQBLBV->setGeometry(QRect(800, 580, 61, 31));
        PF9EKX = new Planets(proviMap);
        PF9EKX->setObjectName(QStringLiteral("PF9EKX"));
        PF9EKX->setGeometry(QRect(510, 450, 61, 31));
        PI539 = new Planets(proviMap);
        PI539->setObjectName(QStringLiteral("PI539"));
        PI539->setGeometry(QRect(860, 630, 61, 31));
        PINQWR = new Planets(proviMap);
        PINQWR->setObjectName(QStringLiteral("PINQWR"));
        PINQWR->setGeometry(QRect(780, 660, 61, 31));
        PGN7XY = new Planets(proviMap);
        PGN7XY->setObjectName(QStringLiteral("PGN7XY"));
        PGN7XY->setGeometry(QRect(860, 680, 61, 31));
        PQOSRRI = new Planets(proviMap);
        PQOSRRI->setObjectName(QStringLiteral("PQOSRRI"));
        PQOSRRI->setGeometry(QRect(780, 710, 61, 31));
        PFDTOO = new Planets(proviMap);
        PFDTOO->setObjectName(QStringLiteral("PFDTOO"));
        PFDTOO->setGeometry(QRect(860, 730, 61, 31));
        P5KGPY = new Planets(proviMap);
        P5KGPY->setObjectName(QStringLiteral("P5KGPY"));
        P5KGPY->setGeometry(QRect(860, 780, 61, 31));
        dockWidget->setWidget(proviMap);
        ProviTel->addDockWidget(static_cast<Qt::DockWidgetArea>(1), dockWidget);
        dockWidget_3 = new QDockWidget(ProviTel);
        dockWidget_3->setObjectName(QStringLiteral("dockWidget_3"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(dockWidget_3->sizePolicy().hasHeightForWidth());
        dockWidget_3->setSizePolicy(sizePolicy1);
        dockWidget_3->setMinimumSize(QSize(400, 111));
        dockWidget_3->setAllowedAreas(Qt::LeftDockWidgetArea|Qt::RightDockWidgetArea);
        dockWidgetContents_6 = new QWidget();
        dockWidgetContents_6->setObjectName(QStringLiteral("dockWidgetContents_6"));
        sizePolicy.setHeightForWidth(dockWidgetContents_6->sizePolicy().hasHeightForWidth());
        dockWidgetContents_6->setSizePolicy(sizePolicy);
        dockWidgetContents_6->setMinimumSize(QSize(400, 0));
        dockWidgetContents_6->setStyleSheet(QLatin1String("QWidget { background: white }\n"
""));
        verticalLayout_3 = new QVBoxLayout(dockWidgetContents_6);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(9, 9, 9, 9);
        scrollArea = new QScrollArea(dockWidgetContents_6);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setEnabled(true);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 400, 766));
        scrollAreaWidgetContents->setMinimumSize(QSize(400, 0));
        verticalLayout_2 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setSizeConstraint(QLayout::SetDefaultConstraint);
        verticalLayout_2->setContentsMargins(9, 9, 9, 9);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        verticalLayout->setContentsMargins(0, -1, -1, -1);
        listView = new IntelMessages(scrollAreaWidgetContents);
        listView->setObjectName(QStringLiteral("listView"));

        verticalLayout->addWidget(listView);


        verticalLayout_2->addLayout(verticalLayout);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout_3->addWidget(scrollArea);

        dockWidget_3->setWidget(dockWidgetContents_6);
        ProviTel->addDockWidget(static_cast<Qt::DockWidgetArea>(2), dockWidget_3);

        mainToolBar->addAction(actionSound);
        mainToolBar->addSeparator();

        retranslateUi(ProviTel);

        QMetaObject::connectSlotsByName(ProviTel);
    } // setupUi

    void retranslateUi(QMainWindow *ProviTel)
    {
        ProviTel->setWindowTitle(QApplication::translate("ProviTel", "ProviTel", 0));
        actionSound->setText(QApplication::translate("ProviTel", "Sound", 0));
#ifndef QT_NO_TOOLTIP
        actionSound->setToolTip(QApplication::translate("ProviTel", "Sound", 0));
#endif // QT_NO_TOOLTIP
        PZRFE3->setText(QApplication::translate("ProviTel", "Z-RFE3", 0));
        PZRFE3->setProperty("keywords", QVariant(QStringList()
            << QApplication::translate("ProviTel", "z-r", 0)
            << QApplication::translate("ProviTel", "z-rfe3", 0)
            << QApplication::translate("ProviTel", "z-rf", 0)
            << QApplication::translate("ProviTel", "zr", 0)));
        PLF2KP->setText(QApplication::translate("ProviTel", "LF-2KP", 0));
        PLF2KP->setProperty("keywords", QVariant(QStringList()));
        PK1L1J->setText(QApplication::translate("ProviTel", "K1L1-J", 0));
        PK1L1J->setProperty("keywords", QVariant(QStringList()));
        PMVCJE->setText(QApplication::translate("ProviTel", "MVCJ-E", 0));
        PMVCJE->setProperty("keywords", QVariant(QStringList()));
        PFYH5B->setText(QApplication::translate("ProviTel", "F-YH5B", 0));
        PFYH5B->setProperty("keywords", QVariant(QStringList()));
        PBK4YC->setText(QApplication::translate("ProviTel", "BK4-YC", 0));
        PBK4YC->setProperty("keywords", QVariant(QStringList()));
        P8P9BM->setText(QApplication::translate("ProviTel", "8P9-BM", 0));
        P8P9BM->setProperty("keywords", QVariant(QStringList()));
        P3DCQU->setText(QApplication::translate("ProviTel", "3D-CQU", 0));
        P3DCQU->setProperty("keywords", QVariant(QStringList()));
        P3KBJ0->setText(QApplication::translate("ProviTel", "3KB-J0", 0));
        P3KBJ0->setProperty("keywords", QVariant(QStringList()));
        P0BHLZ->setText(QApplication::translate("ProviTel", "0B-HLZ", 0));
        P0BHLZ->setProperty("keywords", QVariant(QStringList()));
        PIMGAB->setText(QApplication::translate("ProviTel", "I-MGAB", 0));
        PIMGAB->setProperty("keywords", QVariant(QStringList()));
        P18XAC->setText(QApplication::translate("ProviTel", "18XA-C", 0));
        P18XAC->setProperty("keywords", QVariant(QStringList()));
        P3GXFU->setText(QApplication::translate("ProviTel", "3GXF-U", 0));
        P3GXFU->setProperty("keywords", QVariant(QStringList()));
        PVKIT7->setText(QApplication::translate("ProviTel", "VKI-T7", 0));
        PVKIT7->setProperty("keywords", QVariant(QStringList()));
        PISR7P->setText(QApplication::translate("ProviTel", "IS-R7P", 0));
        PISR7P->setProperty("keywords", QVariant(QStringList()));
        PDPJD4->setText(QApplication::translate("ProviTel", "DP-JD4", 0));
        PDPJD4->setProperty("keywords", QVariant(QStringList()));
        PQRK85->setText(QApplication::translate("ProviTel", "QR-K85", 0));
        PQRK85->setProperty("keywords", QVariant(QStringList()));
        P5IO8U->setText(QApplication::translate("ProviTel", "5IO8-U", 0));
        P5IO8U->setProperty("keywords", QVariant(QStringList()));
        PFC3YI->setText(QApplication::translate("ProviTel", "FC-3YI", 0));
        PFC3YI->setProperty("keywords", QVariant(QStringList()));
        PUHYMT->setText(QApplication::translate("ProviTel", "U-HYMT", 0));
        PUHYMT->setProperty("keywords", QVariant(QStringList()));
        P49GCR->setText(QApplication::translate("ProviTel", "49GC-R", 0));
        P49GCR->setProperty("keywords", QVariant(QStringList()));
        P9UY4H->setText(QApplication::translate("ProviTel", "9UY4-H", 0));
        P9UY4H->setProperty("keywords", QVariant(QStringList()));
        PHGKI6->setText(QApplication::translate("ProviTel", "H-GKI6", 0));
        PHGKI6->setProperty("keywords", QVariant(QStringList()));
        PYQB22->setText(QApplication::translate("ProviTel", "YQB-22", 0));
        PYQB22->setProperty("keywords", QVariant(QStringList()));
        PH6CX8->setText(QApplication::translate("ProviTel", "H6-CX8", 0));
        PH6CX8->setProperty("keywords", QVariant(QStringList()));
        PSHINTAHT->setText(QApplication::translate("ProviTel", "Shintaht", 0));
        PSHINTAHT->setProperty("keywords", QVariant(QStringList()));
        PD6WS1->setText(QApplication::translate("ProviTel", "D-6WS1", 0));
        PD6WS1->setProperty("keywords", QVariant(QStringList()));
        PSII89->setText(QApplication::translate("ProviTel", "SI-I89", 0));
        PSII89->setProperty("keywords", QVariant(QStringList()));
        PD61AG->setText(QApplication::translate("ProviTel", "D61A-G", 0));
        PD61AG->setProperty("keywords", QVariant(QStringList()));
        PYMPWL->setText(QApplication::translate("ProviTel", "Y-MPWL", 0));
        PYMPWL->setProperty("keywords", QVariant(QStringList()));
        PKARI->setText(QApplication::translate("ProviTel", "Kari", 0));
        PKARI->setProperty("keywords", QVariant(QStringList()));
        P9FOB2->setText(QApplication::translate("ProviTel", "9-FOB2", 0));
        P9FOB2->setProperty("keywords", QVariant(QStringList()));
        P4BNQN->setText(QApplication::translate("ProviTel", "4B-NQN", 0));
        P4BNQN->setProperty("keywords", QVariant(QStringList()));
        PG5EN2->setText(QApplication::translate("ProviTel", "G-5EN2", 0));
        PG5EN2->setProperty("keywords", QVariant(QStringList()));
        PASSAH->setText(QApplication::translate("ProviTel", "Assah", 0));
        PASSAH->setProperty("keywords", QVariant(QStringList()));
        PYWS0Z->setText(QApplication::translate("ProviTel", "YWS0-Z", 0));
        PYWS0Z->setProperty("keywords", QVariant(QStringList()));
        PXHQ7V->setText(QApplication::translate("ProviTel", "XHQ-7V", 0));
        PXHQ7V->setProperty("keywords", QVariant(QStringList()));
        PKBP7G->setText(QApplication::translate("ProviTel", "KBP7G", 0));
        PKBP7G->setProperty("keywords", QVariant(QStringList()));
        PDITAL->setText(QApplication::translate("ProviTel", "Dital", 0));
        PDITAL->setProperty("keywords", QVariant(QStringList()));
        PBWPLZ->setText(QApplication::translate("ProviTel", "B-WPLZ", 0));
        PBWPLZ->setProperty("keywords", QVariant(QStringList()));
        PTUO0T->setText(QApplication::translate("ProviTel", "TU-O0T", 0));
        PTUO0T->setProperty("keywords", QVariant(QStringList()));
        PEYCML->setText(QApplication::translate("ProviTel", "E-YCML", 0));
        PEYCML->setProperty("keywords", QVariant(QStringList()));
        PY9MDG->setText(QApplication::translate("ProviTel", "Y9-MDG", 0));
        PY9MDG->setProperty("keywords", QVariant(QStringList()));
        PJEIVE->setText(QApplication::translate("ProviTel", "JEIV-E", 0));
        PJEIVE->setProperty("keywords", QVariant(QStringList()));
        PDNR7M->setText(QApplication::translate("ProviTel", "DNR-7M", 0));
        PDNR7M->setProperty("keywords", QVariant(QStringList()));
        PK1Y5H->setText(QApplication::translate("ProviTel", "K1Y-5H", 0));
        PK1Y5H->setProperty("keywords", QVariant(QStringList()));
        POY5JQ->setText(QApplication::translate("ProviTel", "O-Y5JQ", 0));
        POY5JQ->setProperty("keywords", QVariant(QStringList()));
        PNRMSH->setText(QApplication::translate("ProviTel", "N-RMSH", 0));
        PNRMSH->setProperty("keywords", QVariant(QStringList()));
        PIWZ3C->setText(QApplication::translate("ProviTel", "IWZ3-C", 0));
        PIWZ3C->setProperty("keywords", QVariant(QStringList()));
        PZQZ3Y->setText(QApplication::translate("ProviTel", "ZQ-Z3Y", 0));
        PZQZ3Y->setProperty("keywords", QVariant(QStringList()));
        POXIYV->setText(QApplication::translate("ProviTel", "OXIY-V", 0));
        POXIYV->setProperty("keywords", QVariant(QStringList()));
        PGAOTH->setText(QApplication::translate("ProviTel", "G-AOTH", 0));
        PGAOTH->setProperty("keywords", QVariant(QStringList()));
        PTA3T3->setText(QApplication::translate("ProviTel", "TA3T-3", 0));
        PTA3T3->setProperty("keywords", QVariant(QStringList()));
        PUL7I8->setText(QApplication::translate("ProviTel", "UL-7I8", 0));
        PUL7I8->setProperty("keywords", QVariant(QStringList()));
        PBRN97->setText(QApplication::translate("ProviTel", "BR-N97", 0));
        PBRN97->setProperty("keywords", QVariant(QStringList()));
        PERVKP->setText(QApplication::translate("ProviTel", "ERVK-P", 0));
        PERVKP->setProperty("keywords", QVariant(QStringList()));
        PS25CK->setText(QApplication::translate("ProviTel", "S25C-K", 0));
        PS25CK->setProperty("keywords", QVariant(QStringList()));
        P2TEGJ->setText(QApplication::translate("ProviTel", "2-TEGJ", 0));
        P2TEGJ->setProperty("keywords", QVariant(QStringList()));
        PAY24L->setText(QApplication::translate("ProviTel", "AY-24L", 0));
        PAY24L->setProperty("keywords", QVariant(QStringList()));
        PX6ABY->setText(QApplication::translate("ProviTel", "X6AB-Y", 0));
        PX6ABY->setProperty("keywords", QVariant(QStringList()));
        PXR3NM->setText(QApplication::translate("ProviTel", "X-R3NM", 0));
        PXR3NM->setProperty("keywords", QVariant(QStringList()));
        PR3K7K->setText(QApplication::translate("ProviTel", "R3-K7K", 0));
        PR3K7K->setProperty("keywords", QVariant(QStringList()));
        P8BVLX->setText(QApplication::translate("ProviTel", "8B-VLX", 0));
        P8BVLX->setProperty("keywords", QVariant(QStringList()));
        PGB22J->setText(QApplication::translate("ProviTel", "G-B22J", 0));
        PGB22J->setProperty("keywords", QVariant(QStringList()));
        PMISABA->setText(QApplication::translate("ProviTel", "Misaba", 0));
        PMISABA->setProperty("keywords", QVariant(QStringList()));
        PN8XAL->setText(QApplication::translate("ProviTel", "N8XA-L", 0));
        PN8XAL->setProperty("keywords", QVariant(QStringList()));
        P18GZM->setText(QApplication::translate("ProviTel", "18-GZM", 0));
        P18GZM->setProperty("keywords", QVariant(QStringList()));
        P11I53->setText(QApplication::translate("ProviTel", "1-1I53", 0));
        P11I53->setProperty("keywords", QVariant(QStringList()));
        PZTLPU->setText(QApplication::translate("ProviTel", "ZT-LPU", 0));
        PZTLPU->setProperty("keywords", QVariant(QStringList()));
        PAYYCU->setText(QApplication::translate("ProviTel", "AY-YCU", 0));
        PAYYCU->setProperty("keywords", QVariant(QStringList()));
        P2VCS5->setText(QApplication::translate("ProviTel", "2V-CS5", 0));
        P2VCS5->setProperty("keywords", QVariant(QStringList()));
        PH9J8N->setText(QApplication::translate("ProviTel", "H9-J8N", 0));
        PH9J8N->setProperty("keywords", QVariant(QStringList()));
        PC1HAB->setText(QApplication::translate("ProviTel", "C1-HAB", 0));
        PC1HAB->setProperty("keywords", QVariant(QStringList()));
        PGA9P0->setText(QApplication::translate("ProviTel", "GA9P-0", 0));
        PGA9P0->setProperty("keywords", QVariant(QStringList()));
        PHP6Z6->setText(QApplication::translate("ProviTel", "HP-6Z6", 0));
        PHP6Z6->setProperty("keywords", QVariant(QStringList()));
        P7YWVS->setText(QApplication::translate("ProviTel", "7YWV-S", 0));
        P7YWVS->setProperty("keywords", QVariant(QStringList()));
        PTXJII->setText(QApplication::translate("ProviTel", "TXJ-II", 0));
        PTXJII->setProperty("keywords", QVariant(QStringList()));
        P7MDS1->setText(QApplication::translate("ProviTel", "7MD-S1", 0));
        P7MDS1->setProperty("keywords", QVariant(QStringList()));
        PTRPFU->setText(QApplication::translate("ProviTel", "T-RPFU", 0));
        PTRPFU->setProperty("keywords", QVariant(QStringList()));
        PMH9CS->setText(QApplication::translate("ProviTel", "MH9C-S", 0));
        PMH9CS->setProperty("keywords", QVariant(QStringList()));
        PFX7EM->setText(QApplication::translate("ProviTel", "FX-7EM", 0));
        PFX7EM->setProperty("keywords", QVariant(QStringList()));
        PDGTMI->setText(QApplication::translate("ProviTel", "D-GTMI", 0));
        PDGTMI->setProperty("keywords", QVariant(QStringList()));
        PFSW3C->setText(QApplication::translate("ProviTel", "FSW-3C", 0));
        PFSW3C->setProperty("keywords", QVariant(QStringList()));
        PTURI6->setText(QApplication::translate("ProviTel", "TU-RI6", 0));
        PTURI6->setProperty("keywords", QVariant(QStringList()));
        PS9AX->setText(QApplication::translate("ProviTel", "S9-AX", 0));
        PS9AX->setProperty("keywords", QVariant(QStringList()));
        P6OQJV->setText(QApplication::translate("ProviTel", "6-OQJV", 0));
        P6OQJV->setProperty("keywords", QVariant(QStringList()));
        P08ZJJ->setText(QApplication::translate("ProviTel", "08Z-JJ", 0));
        P08ZJJ->setProperty("keywords", QVariant(QStringList()));
        PX4WZD->setText(QApplication::translate("ProviTel", "X-4WZD", 0));
        PX4WZD->setProperty("keywords", QVariant(QStringList()));
        PI7S1S->setText(QApplication::translate("ProviTel", "I7S-1S", 0));
        PI7S1S->setProperty("keywords", QVariant(QStringList()));
        PG7AQ7->setText(QApplication::translate("ProviTel", "G7AQ-7", 0));
        PG7AQ7->setProperty("keywords", QVariant(QStringList()));
        PQBLBV->setText(QApplication::translate("ProviTel", "QBL-BV", 0));
        PQBLBV->setProperty("keywords", QVariant(QStringList()));
        PF9EKX->setText(QApplication::translate("ProviTel", "F9E-KX", 0));
        PF9EKX->setProperty("keywords", QVariant(QStringList()));
        PI539->setText(QApplication::translate("ProviTel", "PI5-39", 0));
        PI539->setProperty("keywords", QVariant(QStringList()));
        PINQWR->setText(QApplication::translate("ProviTel", "INQ-WR", 0));
        PINQWR->setProperty("keywords", QVariant(QStringList()));
        PGN7XY->setText(QApplication::translate("ProviTel", "GN7-XY", 0));
        PGN7XY->setProperty("keywords", QVariant(QStringList()));
        PQOSRRI->setText(QApplication::translate("ProviTel", "QO-SRI", 0));
        PQOSRRI->setProperty("keywords", QVariant(QStringList()));
        PFDTOO->setText(QApplication::translate("ProviTel", "F-DTOO", 0));
        PFDTOO->setProperty("keywords", QVariant(QStringList()));
        P5KGPY->setText(QApplication::translate("ProviTel", "5KG-PY", 0));
        P5KGPY->setProperty("keywords", QVariant(QStringList()));
    } // retranslateUi

};

namespace Ui {
    class ProviTel: public Ui_ProviTel {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROVITEL_H
