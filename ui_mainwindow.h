/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QScrollBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionNew;
    QAction *actionOpen;
    QAction *actionSave;
    QAction *actionSave_as;
    QAction *actionImport;
    QAction *actionExport;
    QAction *actionRecent;
    QAction *actionExit;
    QAction *actionUndo;
    QAction *actionRedo;
    QAction *actionCut;
    QAction *actionCopy;
    QAction *actionPaste;
    QAction *actionDelete;
    QAction *actionSelect_All;
    QAction *actionSelect_All_Notes;
    QAction *actionSelect_by_Name;
    QAction *actionInsert_Rest;
    QAction *actionMerge_Notes;
    QAction *actionQuantize;
    QAction *actionMove_Reguin_Up_One;
    QAction *actionMove_Region_Down_One;
    QAction *actionMove_Region_by_Number;
    QAction *actionApply_Automatic_VCV_Lyrics;
    QAction *actionApply_Automatic_Adjustments;
    QAction *actionP2P3;
    QAction *actionCrossfade_Optimization;
    QAction *actionReset_Envelopes;
    QAction *actionPitch_Editor;
    QAction *actionEnvelope_Editor;
    QAction *actionRegion_Property;
    QAction *actionZoom_In;
    QAction *actionZoom_Out;
    QAction *action4_4_Beat;
    QAction *action3_4_Beat;
    QAction *actionSounds_List;
    QAction *actionVertical_Zoom_In;
    QAction *actionVertical_Zoom_Out;
    QAction *actionShow_Pitch_Curves;
    QAction *actionSearch_Forward;
    QAction *actionSearch_Backward;
    QAction *actionGo_to_Next_Note;
    QAction *actionGo_to_Previous_Note;
    QAction *actionGo_to_Region_Start;
    QAction *actionGo_to_Region_End;
    QAction *actionGo_to_Label;
    QAction *actionGo_to_First_Note;
    QAction *actionGo_to_Last_Note;
    QAction *actionGo_to_Start;
    QAction *actionGo_to_End;
    QAction *actionRender_wav_file;
    QAction *actionPlay;
    QAction *actionPause;
    QAction *actionStop;
    QAction *actionProject_Properties;
    QAction *actionPlay_Region;
    QAction *actionReplay;
    QAction *actionPause_2;
    QAction *actionStop_2;
    QAction *actionSave_Last_Play;
    QAction *actionVoicebank_Settings;
    QAction *actionEdit_prefix_map;
    QAction *actionReload;
    QAction *actionOpen_Plugins_Folder;
    QAction *actionPitch_Automation;
    QAction *actionCrossfade;
    QAction *actionAuto_Vibrato;
    QAction *actionA_La_Carte;
    QAction *actionSuffix_Broker;
    QAction *actionVolume_Functionizer;
    QAction *actionGeneral;
    QAction *actionPitch_Control;
    QAction *actionEnvelope;
    QAction *actionSettings;
    QAction *actionRead_Me;
    QAction *actionVersion;
    QWidget *centralwidget;
    QScrollBar *verticalScrollBar;
    QLineEdit *bpmText;
    QLabel *label;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuEdit;
    QMenu *menuRegion;
    QMenu *menuEnvelope_for_Crossfade;
    QMenu *menuView;
    QMenu *menuSearch;
    QMenu *menuProject;
    QMenu *menuPlay_Rendered_File;
    QMenu *menuPlay;
    QMenu *menuTools;
    QMenu *menuPlugins;
    QMenu *menuBuilt_in_Tools;
    QMenu *menuNote_Default;
    QMenu *menuHelp;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(888, 657);
        QIcon icon;
        icon.addFile(QString::fromUtf8("../../Kyle/Pictures/Vocaloid and Utau/Utau_logo_large.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        actionNew = new QAction(MainWindow);
        actionNew->setObjectName(QString::fromUtf8("actionNew"));
        actionOpen = new QAction(MainWindow);
        actionOpen->setObjectName(QString::fromUtf8("actionOpen"));
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName(QString::fromUtf8("actionSave"));
        actionSave_as = new QAction(MainWindow);
        actionSave_as->setObjectName(QString::fromUtf8("actionSave_as"));
        actionImport = new QAction(MainWindow);
        actionImport->setObjectName(QString::fromUtf8("actionImport"));
        actionExport = new QAction(MainWindow);
        actionExport->setObjectName(QString::fromUtf8("actionExport"));
        actionRecent = new QAction(MainWindow);
        actionRecent->setObjectName(QString::fromUtf8("actionRecent"));
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        actionUndo = new QAction(MainWindow);
        actionUndo->setObjectName(QString::fromUtf8("actionUndo"));
        actionRedo = new QAction(MainWindow);
        actionRedo->setObjectName(QString::fromUtf8("actionRedo"));
        actionCut = new QAction(MainWindow);
        actionCut->setObjectName(QString::fromUtf8("actionCut"));
        actionCopy = new QAction(MainWindow);
        actionCopy->setObjectName(QString::fromUtf8("actionCopy"));
        actionPaste = new QAction(MainWindow);
        actionPaste->setObjectName(QString::fromUtf8("actionPaste"));
        actionDelete = new QAction(MainWindow);
        actionDelete->setObjectName(QString::fromUtf8("actionDelete"));
        actionSelect_All = new QAction(MainWindow);
        actionSelect_All->setObjectName(QString::fromUtf8("actionSelect_All"));
        actionSelect_All_Notes = new QAction(MainWindow);
        actionSelect_All_Notes->setObjectName(QString::fromUtf8("actionSelect_All_Notes"));
        actionSelect_by_Name = new QAction(MainWindow);
        actionSelect_by_Name->setObjectName(QString::fromUtf8("actionSelect_by_Name"));
        actionInsert_Rest = new QAction(MainWindow);
        actionInsert_Rest->setObjectName(QString::fromUtf8("actionInsert_Rest"));
        actionMerge_Notes = new QAction(MainWindow);
        actionMerge_Notes->setObjectName(QString::fromUtf8("actionMerge_Notes"));
        actionQuantize = new QAction(MainWindow);
        actionQuantize->setObjectName(QString::fromUtf8("actionQuantize"));
        actionMove_Reguin_Up_One = new QAction(MainWindow);
        actionMove_Reguin_Up_One->setObjectName(QString::fromUtf8("actionMove_Reguin_Up_One"));
        actionMove_Region_Down_One = new QAction(MainWindow);
        actionMove_Region_Down_One->setObjectName(QString::fromUtf8("actionMove_Region_Down_One"));
        actionMove_Region_by_Number = new QAction(MainWindow);
        actionMove_Region_by_Number->setObjectName(QString::fromUtf8("actionMove_Region_by_Number"));
        actionApply_Automatic_VCV_Lyrics = new QAction(MainWindow);
        actionApply_Automatic_VCV_Lyrics->setObjectName(QString::fromUtf8("actionApply_Automatic_VCV_Lyrics"));
        actionApply_Automatic_Adjustments = new QAction(MainWindow);
        actionApply_Automatic_Adjustments->setObjectName(QString::fromUtf8("actionApply_Automatic_Adjustments"));
        actionP2P3 = new QAction(MainWindow);
        actionP2P3->setObjectName(QString::fromUtf8("actionP2P3"));
        actionCrossfade_Optimization = new QAction(MainWindow);
        actionCrossfade_Optimization->setObjectName(QString::fromUtf8("actionCrossfade_Optimization"));
        actionReset_Envelopes = new QAction(MainWindow);
        actionReset_Envelopes->setObjectName(QString::fromUtf8("actionReset_Envelopes"));
        actionPitch_Editor = new QAction(MainWindow);
        actionPitch_Editor->setObjectName(QString::fromUtf8("actionPitch_Editor"));
        actionEnvelope_Editor = new QAction(MainWindow);
        actionEnvelope_Editor->setObjectName(QString::fromUtf8("actionEnvelope_Editor"));
        actionRegion_Property = new QAction(MainWindow);
        actionRegion_Property->setObjectName(QString::fromUtf8("actionRegion_Property"));
        actionZoom_In = new QAction(MainWindow);
        actionZoom_In->setObjectName(QString::fromUtf8("actionZoom_In"));
        actionZoom_Out = new QAction(MainWindow);
        actionZoom_Out->setObjectName(QString::fromUtf8("actionZoom_Out"));
        action4_4_Beat = new QAction(MainWindow);
        action4_4_Beat->setObjectName(QString::fromUtf8("action4_4_Beat"));
        action3_4_Beat = new QAction(MainWindow);
        action3_4_Beat->setObjectName(QString::fromUtf8("action3_4_Beat"));
        actionSounds_List = new QAction(MainWindow);
        actionSounds_List->setObjectName(QString::fromUtf8("actionSounds_List"));
        actionVertical_Zoom_In = new QAction(MainWindow);
        actionVertical_Zoom_In->setObjectName(QString::fromUtf8("actionVertical_Zoom_In"));
        actionVertical_Zoom_Out = new QAction(MainWindow);
        actionVertical_Zoom_Out->setObjectName(QString::fromUtf8("actionVertical_Zoom_Out"));
        actionShow_Pitch_Curves = new QAction(MainWindow);
        actionShow_Pitch_Curves->setObjectName(QString::fromUtf8("actionShow_Pitch_Curves"));
        actionSearch_Forward = new QAction(MainWindow);
        actionSearch_Forward->setObjectName(QString::fromUtf8("actionSearch_Forward"));
        actionSearch_Backward = new QAction(MainWindow);
        actionSearch_Backward->setObjectName(QString::fromUtf8("actionSearch_Backward"));
        actionGo_to_Next_Note = new QAction(MainWindow);
        actionGo_to_Next_Note->setObjectName(QString::fromUtf8("actionGo_to_Next_Note"));
        actionGo_to_Previous_Note = new QAction(MainWindow);
        actionGo_to_Previous_Note->setObjectName(QString::fromUtf8("actionGo_to_Previous_Note"));
        actionGo_to_Region_Start = new QAction(MainWindow);
        actionGo_to_Region_Start->setObjectName(QString::fromUtf8("actionGo_to_Region_Start"));
        actionGo_to_Region_End = new QAction(MainWindow);
        actionGo_to_Region_End->setObjectName(QString::fromUtf8("actionGo_to_Region_End"));
        actionGo_to_Label = new QAction(MainWindow);
        actionGo_to_Label->setObjectName(QString::fromUtf8("actionGo_to_Label"));
        actionGo_to_First_Note = new QAction(MainWindow);
        actionGo_to_First_Note->setObjectName(QString::fromUtf8("actionGo_to_First_Note"));
        actionGo_to_Last_Note = new QAction(MainWindow);
        actionGo_to_Last_Note->setObjectName(QString::fromUtf8("actionGo_to_Last_Note"));
        actionGo_to_Start = new QAction(MainWindow);
        actionGo_to_Start->setObjectName(QString::fromUtf8("actionGo_to_Start"));
        actionGo_to_End = new QAction(MainWindow);
        actionGo_to_End->setObjectName(QString::fromUtf8("actionGo_to_End"));
        actionRender_wav_file = new QAction(MainWindow);
        actionRender_wav_file->setObjectName(QString::fromUtf8("actionRender_wav_file"));
        actionPlay = new QAction(MainWindow);
        actionPlay->setObjectName(QString::fromUtf8("actionPlay"));
        actionPause = new QAction(MainWindow);
        actionPause->setObjectName(QString::fromUtf8("actionPause"));
        actionStop = new QAction(MainWindow);
        actionStop->setObjectName(QString::fromUtf8("actionStop"));
        actionProject_Properties = new QAction(MainWindow);
        actionProject_Properties->setObjectName(QString::fromUtf8("actionProject_Properties"));
        actionPlay_Region = new QAction(MainWindow);
        actionPlay_Region->setObjectName(QString::fromUtf8("actionPlay_Region"));
        actionReplay = new QAction(MainWindow);
        actionReplay->setObjectName(QString::fromUtf8("actionReplay"));
        actionPause_2 = new QAction(MainWindow);
        actionPause_2->setObjectName(QString::fromUtf8("actionPause_2"));
        actionStop_2 = new QAction(MainWindow);
        actionStop_2->setObjectName(QString::fromUtf8("actionStop_2"));
        actionSave_Last_Play = new QAction(MainWindow);
        actionSave_Last_Play->setObjectName(QString::fromUtf8("actionSave_Last_Play"));
        actionVoicebank_Settings = new QAction(MainWindow);
        actionVoicebank_Settings->setObjectName(QString::fromUtf8("actionVoicebank_Settings"));
        actionEdit_prefix_map = new QAction(MainWindow);
        actionEdit_prefix_map->setObjectName(QString::fromUtf8("actionEdit_prefix_map"));
        actionReload = new QAction(MainWindow);
        actionReload->setObjectName(QString::fromUtf8("actionReload"));
        actionOpen_Plugins_Folder = new QAction(MainWindow);
        actionOpen_Plugins_Folder->setObjectName(QString::fromUtf8("actionOpen_Plugins_Folder"));
        actionPitch_Automation = new QAction(MainWindow);
        actionPitch_Automation->setObjectName(QString::fromUtf8("actionPitch_Automation"));
        actionCrossfade = new QAction(MainWindow);
        actionCrossfade->setObjectName(QString::fromUtf8("actionCrossfade"));
        actionAuto_Vibrato = new QAction(MainWindow);
        actionAuto_Vibrato->setObjectName(QString::fromUtf8("actionAuto_Vibrato"));
        actionA_La_Carte = new QAction(MainWindow);
        actionA_La_Carte->setObjectName(QString::fromUtf8("actionA_La_Carte"));
        actionSuffix_Broker = new QAction(MainWindow);
        actionSuffix_Broker->setObjectName(QString::fromUtf8("actionSuffix_Broker"));
        actionVolume_Functionizer = new QAction(MainWindow);
        actionVolume_Functionizer->setObjectName(QString::fromUtf8("actionVolume_Functionizer"));
        actionGeneral = new QAction(MainWindow);
        actionGeneral->setObjectName(QString::fromUtf8("actionGeneral"));
        actionPitch_Control = new QAction(MainWindow);
        actionPitch_Control->setObjectName(QString::fromUtf8("actionPitch_Control"));
        actionEnvelope = new QAction(MainWindow);
        actionEnvelope->setObjectName(QString::fromUtf8("actionEnvelope"));
        actionSettings = new QAction(MainWindow);
        actionSettings->setObjectName(QString::fromUtf8("actionSettings"));
        actionRead_Me = new QAction(MainWindow);
        actionRead_Me->setObjectName(QString::fromUtf8("actionRead_Me"));
        actionVersion = new QAction(MainWindow);
        actionVersion->setObjectName(QString::fromUtf8("actionVersion"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalScrollBar = new QScrollBar(centralwidget);
        verticalScrollBar->setObjectName(QString::fromUtf8("verticalScrollBar"));
        verticalScrollBar->setGeometry(QRect(870, 0, 16, 601));
        verticalScrollBar->setOrientation(Qt::Vertical);
        bpmText = new QLineEdit(centralwidget);
        bpmText->setObjectName(QString::fromUtf8("bpmText"));
        bpmText->setGeometry(QRect(40, 10, 113, 20));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 10, 47, 13));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 888, 21));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuEdit = new QMenu(menubar);
        menuEdit->setObjectName(QString::fromUtf8("menuEdit"));
        menuRegion = new QMenu(menubar);
        menuRegion->setObjectName(QString::fromUtf8("menuRegion"));
        menuEnvelope_for_Crossfade = new QMenu(menuRegion);
        menuEnvelope_for_Crossfade->setObjectName(QString::fromUtf8("menuEnvelope_for_Crossfade"));
        menuView = new QMenu(menubar);
        menuView->setObjectName(QString::fromUtf8("menuView"));
        menuSearch = new QMenu(menubar);
        menuSearch->setObjectName(QString::fromUtf8("menuSearch"));
        menuProject = new QMenu(menubar);
        menuProject->setObjectName(QString::fromUtf8("menuProject"));
        menuPlay_Rendered_File = new QMenu(menuProject);
        menuPlay_Rendered_File->setObjectName(QString::fromUtf8("menuPlay_Rendered_File"));
        menuPlay = new QMenu(menubar);
        menuPlay->setObjectName(QString::fromUtf8("menuPlay"));
        menuTools = new QMenu(menubar);
        menuTools->setObjectName(QString::fromUtf8("menuTools"));
        menuPlugins = new QMenu(menuTools);
        menuPlugins->setObjectName(QString::fromUtf8("menuPlugins"));
        menuBuilt_in_Tools = new QMenu(menuTools);
        menuBuilt_in_Tools->setObjectName(QString::fromUtf8("menuBuilt_in_Tools"));
        menuNote_Default = new QMenu(menuTools);
        menuNote_Default->setObjectName(QString::fromUtf8("menuNote_Default"));
        menuHelp = new QMenu(menubar);
        menuHelp->setObjectName(QString::fromUtf8("menuHelp"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuEdit->menuAction());
        menubar->addAction(menuRegion->menuAction());
        menubar->addAction(menuView->menuAction());
        menubar->addAction(menuSearch->menuAction());
        menubar->addAction(menuProject->menuAction());
        menubar->addAction(menuPlay->menuAction());
        menubar->addAction(menuTools->menuAction());
        menubar->addAction(menuHelp->menuAction());
        menuFile->addAction(actionNew);
        menuFile->addAction(actionOpen);
        menuFile->addAction(actionSave);
        menuFile->addAction(actionSave_as);
        menuFile->addSeparator();
        menuFile->addAction(actionImport);
        menuFile->addAction(actionExport);
        menuFile->addSeparator();
        menuFile->addAction(actionRecent);
        menuFile->addSeparator();
        menuFile->addAction(actionExit);
        menuEdit->addAction(actionUndo);
        menuEdit->addAction(actionRedo);
        menuEdit->addSeparator();
        menuEdit->addAction(actionCut);
        menuEdit->addAction(actionCopy);
        menuEdit->addAction(actionPaste);
        menuEdit->addAction(actionDelete);
        menuEdit->addSeparator();
        menuEdit->addAction(actionSelect_All);
        menuEdit->addAction(actionSelect_All_Notes);
        menuEdit->addAction(actionSelect_by_Name);
        menuEdit->addSeparator();
        menuEdit->addAction(actionInsert_Rest);
        menuEdit->addAction(actionMerge_Notes);
        menuEdit->addAction(actionQuantize);
        menuRegion->addAction(actionMove_Reguin_Up_One);
        menuRegion->addAction(actionMove_Region_Down_One);
        menuRegion->addAction(actionMove_Region_by_Number);
        menuRegion->addSeparator();
        menuRegion->addAction(actionApply_Automatic_VCV_Lyrics);
        menuRegion->addAction(actionApply_Automatic_Adjustments);
        menuRegion->addAction(menuEnvelope_for_Crossfade->menuAction());
        menuRegion->addAction(actionCrossfade_Optimization);
        menuRegion->addAction(actionReset_Envelopes);
        menuRegion->addSeparator();
        menuRegion->addAction(actionPitch_Editor);
        menuRegion->addAction(actionEnvelope_Editor);
        menuRegion->addAction(actionRegion_Property);
        menuEnvelope_for_Crossfade->addAction(actionP2P3);
        menuView->addAction(actionZoom_In);
        menuView->addAction(actionZoom_Out);
        menuView->addAction(actionVertical_Zoom_In);
        menuView->addAction(actionVertical_Zoom_Out);
        menuView->addSeparator();
        menuView->addAction(action4_4_Beat);
        menuView->addAction(action3_4_Beat);
        menuView->addSeparator();
        menuView->addAction(actionSounds_List);
        menuView->addSeparator();
        menuView->addAction(actionShow_Pitch_Curves);
        menuSearch->addAction(actionSearch_Forward);
        menuSearch->addAction(actionSearch_Backward);
        menuSearch->addSeparator();
        menuSearch->addAction(actionGo_to_Next_Note);
        menuSearch->addAction(actionGo_to_Previous_Note);
        menuSearch->addSeparator();
        menuSearch->addAction(actionGo_to_Region_Start);
        menuSearch->addAction(actionGo_to_Region_End);
        menuSearch->addAction(actionGo_to_Label);
        menuSearch->addSeparator();
        menuSearch->addAction(actionGo_to_First_Note);
        menuSearch->addAction(actionGo_to_Last_Note);
        menuSearch->addAction(actionGo_to_Start);
        menuSearch->addAction(actionGo_to_End);
        menuProject->addAction(actionRender_wav_file);
        menuProject->addSeparator();
        menuProject->addAction(menuPlay_Rendered_File->menuAction());
        menuProject->addSeparator();
        menuProject->addAction(actionProject_Properties);
        menuPlay_Rendered_File->addAction(actionPlay);
        menuPlay_Rendered_File->addAction(actionPause);
        menuPlay_Rendered_File->addAction(actionStop);
        menuPlay->addAction(actionPlay_Region);
        menuPlay->addAction(actionReplay);
        menuPlay->addAction(actionPause_2);
        menuPlay->addAction(actionStop_2);
        menuPlay->addSeparator();
        menuPlay->addAction(actionSave_Last_Play);
        menuTools->addAction(actionVoicebank_Settings);
        menuTools->addAction(actionEdit_prefix_map);
        menuTools->addSeparator();
        menuTools->addAction(menuPlugins->menuAction());
        menuTools->addSeparator();
        menuTools->addAction(menuBuilt_in_Tools->menuAction());
        menuTools->addSeparator();
        menuTools->addAction(menuNote_Default->menuAction());
        menuTools->addAction(actionSettings);
        menuPlugins->addSeparator();
        menuPlugins->addAction(actionReload);
        menuPlugins->addAction(actionOpen_Plugins_Folder);
        menuBuilt_in_Tools->addAction(actionPitch_Automation);
        menuBuilt_in_Tools->addAction(actionCrossfade);
        menuBuilt_in_Tools->addAction(actionAuto_Vibrato);
        menuBuilt_in_Tools->addSeparator();
        menuBuilt_in_Tools->addAction(actionA_La_Carte);
        menuBuilt_in_Tools->addSeparator();
        menuBuilt_in_Tools->addAction(actionSuffix_Broker);
        menuBuilt_in_Tools->addAction(actionVolume_Functionizer);
        menuNote_Default->addAction(actionGeneral);
        menuNote_Default->addAction(actionPitch_Control);
        menuNote_Default->addAction(actionEnvelope);
        menuHelp->addAction(actionRead_Me);
        menuHelp->addSeparator();
        menuHelp->addAction(actionVersion);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Main - OpenUtau Reloaded", nullptr));
        actionNew->setText(QCoreApplication::translate("MainWindow", "New", nullptr));
        actionOpen->setText(QCoreApplication::translate("MainWindow", "Open", nullptr));
        actionSave->setText(QCoreApplication::translate("MainWindow", "Save", nullptr));
        actionSave_as->setText(QCoreApplication::translate("MainWindow", "Save as...", nullptr));
        actionImport->setText(QCoreApplication::translate("MainWindow", "Import", nullptr));
        actionExport->setText(QCoreApplication::translate("MainWindow", "Export", nullptr));
        actionRecent->setText(QCoreApplication::translate("MainWindow", "Recent", nullptr));
        actionExit->setText(QCoreApplication::translate("MainWindow", "Exit", nullptr));
        actionUndo->setText(QCoreApplication::translate("MainWindow", "Undo", nullptr));
        actionRedo->setText(QCoreApplication::translate("MainWindow", "Redo", nullptr));
        actionCut->setText(QCoreApplication::translate("MainWindow", "Cut", nullptr));
        actionCopy->setText(QCoreApplication::translate("MainWindow", "Copy", nullptr));
        actionPaste->setText(QCoreApplication::translate("MainWindow", "Paste", nullptr));
        actionDelete->setText(QCoreApplication::translate("MainWindow", "Delete", nullptr));
        actionSelect_All->setText(QCoreApplication::translate("MainWindow", "Select All", nullptr));
        actionSelect_All_Notes->setText(QCoreApplication::translate("MainWindow", "Select All Notes", nullptr));
        actionSelect_by_Name->setText(QCoreApplication::translate("MainWindow", "Select by Name", nullptr));
        actionInsert_Rest->setText(QCoreApplication::translate("MainWindow", "Insert Rest", nullptr));
        actionMerge_Notes->setText(QCoreApplication::translate("MainWindow", "Merge Notes", nullptr));
        actionQuantize->setText(QCoreApplication::translate("MainWindow", "Quantize", nullptr));
        actionMove_Reguin_Up_One->setText(QCoreApplication::translate("MainWindow", "Move Reguin Up One", nullptr));
        actionMove_Region_Down_One->setText(QCoreApplication::translate("MainWindow", "Move Region Down One", nullptr));
        actionMove_Region_by_Number->setText(QCoreApplication::translate("MainWindow", "Move Region by Number", nullptr));
        actionApply_Automatic_VCV_Lyrics->setText(QCoreApplication::translate("MainWindow", "Apply Automatic VCV Lyrics", nullptr));
        actionApply_Automatic_Adjustments->setText(QCoreApplication::translate("MainWindow", "Apply Automatic Adjustments", nullptr));
        actionP2P3->setText(QCoreApplication::translate("MainWindow", "P2P3", nullptr));
        actionCrossfade_Optimization->setText(QCoreApplication::translate("MainWindow", "Crossfade Optimization", nullptr));
        actionReset_Envelopes->setText(QCoreApplication::translate("MainWindow", "Reset Envelopes", nullptr));
        actionPitch_Editor->setText(QCoreApplication::translate("MainWindow", "Pitch Editor", nullptr));
        actionEnvelope_Editor->setText(QCoreApplication::translate("MainWindow", "Envelope Editor", nullptr));
        actionRegion_Property->setText(QCoreApplication::translate("MainWindow", "Region Property", nullptr));
        actionZoom_In->setText(QCoreApplication::translate("MainWindow", "Zoom In", nullptr));
        actionZoom_Out->setText(QCoreApplication::translate("MainWindow", "Zoom Out", nullptr));
        action4_4_Beat->setText(QCoreApplication::translate("MainWindow", "4/4-Beat", nullptr));
        action3_4_Beat->setText(QCoreApplication::translate("MainWindow", "3/4-Beat", nullptr));
        actionSounds_List->setText(QCoreApplication::translate("MainWindow", "Sounds List", nullptr));
        actionVertical_Zoom_In->setText(QCoreApplication::translate("MainWindow", "Vertical Zoom In", nullptr));
        actionVertical_Zoom_Out->setText(QCoreApplication::translate("MainWindow", "Vertical Zoom Out", nullptr));
        actionShow_Pitch_Curves->setText(QCoreApplication::translate("MainWindow", "Show Pitch Curves", nullptr));
        actionSearch_Forward->setText(QCoreApplication::translate("MainWindow", "Search Forward", nullptr));
        actionSearch_Backward->setText(QCoreApplication::translate("MainWindow", "Search Backward", nullptr));
        actionGo_to_Next_Note->setText(QCoreApplication::translate("MainWindow", "Go to Next Note", nullptr));
        actionGo_to_Previous_Note->setText(QCoreApplication::translate("MainWindow", "Go to Previous Note", nullptr));
        actionGo_to_Region_Start->setText(QCoreApplication::translate("MainWindow", "Go to Region Start", nullptr));
        actionGo_to_Region_End->setText(QCoreApplication::translate("MainWindow", "Go to Region End", nullptr));
        actionGo_to_Label->setText(QCoreApplication::translate("MainWindow", "Go to Label", nullptr));
        actionGo_to_First_Note->setText(QCoreApplication::translate("MainWindow", "Go to First Note", nullptr));
        actionGo_to_Last_Note->setText(QCoreApplication::translate("MainWindow", "Go to Last Note", nullptr));
        actionGo_to_Start->setText(QCoreApplication::translate("MainWindow", "Go to Start", nullptr));
        actionGo_to_End->setText(QCoreApplication::translate("MainWindow", "Go to End", nullptr));
        actionRender_wav_file->setText(QCoreApplication::translate("MainWindow", "Render wav file", nullptr));
        actionPlay->setText(QCoreApplication::translate("MainWindow", "Play", nullptr));
        actionPause->setText(QCoreApplication::translate("MainWindow", "Pause", nullptr));
        actionStop->setText(QCoreApplication::translate("MainWindow", "Stop", nullptr));
        actionProject_Properties->setText(QCoreApplication::translate("MainWindow", "Project Properties", nullptr));
        actionPlay_Region->setText(QCoreApplication::translate("MainWindow", "Play Region", nullptr));
        actionReplay->setText(QCoreApplication::translate("MainWindow", "Replay", nullptr));
        actionPause_2->setText(QCoreApplication::translate("MainWindow", "Pause", nullptr));
        actionStop_2->setText(QCoreApplication::translate("MainWindow", "Stop", nullptr));
        actionSave_Last_Play->setText(QCoreApplication::translate("MainWindow", "Save Last Play", nullptr));
        actionVoicebank_Settings->setText(QCoreApplication::translate("MainWindow", "Voicebank Settings", nullptr));
        actionEdit_prefix_map->setText(QCoreApplication::translate("MainWindow", "Edit prefix.map", nullptr));
        actionReload->setText(QCoreApplication::translate("MainWindow", "Reload", nullptr));
        actionOpen_Plugins_Folder->setText(QCoreApplication::translate("MainWindow", "Open Plugins Folder", nullptr));
        actionPitch_Automation->setText(QCoreApplication::translate("MainWindow", "Pitch Automation", nullptr));
        actionCrossfade->setText(QCoreApplication::translate("MainWindow", "Crossfade", nullptr));
        actionAuto_Vibrato->setText(QCoreApplication::translate("MainWindow", "Auto Vibrato", nullptr));
        actionA_La_Carte->setText(QCoreApplication::translate("MainWindow", "A La Carte", nullptr));
        actionSuffix_Broker->setText(QCoreApplication::translate("MainWindow", "Suffix Broker", nullptr));
        actionVolume_Functionizer->setText(QCoreApplication::translate("MainWindow", "Volume Functionizer", nullptr));
        actionGeneral->setText(QCoreApplication::translate("MainWindow", "General", nullptr));
        actionPitch_Control->setText(QCoreApplication::translate("MainWindow", "Pitch Control", nullptr));
        actionEnvelope->setText(QCoreApplication::translate("MainWindow", "Envelope", nullptr));
        actionSettings->setText(QCoreApplication::translate("MainWindow", "Settings", nullptr));
        actionRead_Me->setText(QCoreApplication::translate("MainWindow", "Read Me", nullptr));
        actionVersion->setText(QCoreApplication::translate("MainWindow", "Version", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "BPM:", nullptr));
        menuFile->setTitle(QCoreApplication::translate("MainWindow", "File", nullptr));
        menuEdit->setTitle(QCoreApplication::translate("MainWindow", "Edit", nullptr));
        menuRegion->setTitle(QCoreApplication::translate("MainWindow", "Region", nullptr));
        menuEnvelope_for_Crossfade->setTitle(QCoreApplication::translate("MainWindow", "Envelope for Crossfade", nullptr));
        menuView->setTitle(QCoreApplication::translate("MainWindow", "View", nullptr));
        menuSearch->setTitle(QCoreApplication::translate("MainWindow", "Search", nullptr));
        menuProject->setTitle(QCoreApplication::translate("MainWindow", "Project", nullptr));
        menuPlay_Rendered_File->setTitle(QCoreApplication::translate("MainWindow", "Play Rendered File", nullptr));
        menuPlay->setTitle(QCoreApplication::translate("MainWindow", "Play", nullptr));
        menuTools->setTitle(QCoreApplication::translate("MainWindow", "Tools", nullptr));
        menuPlugins->setTitle(QCoreApplication::translate("MainWindow", "Plugins", nullptr));
        menuBuilt_in_Tools->setTitle(QCoreApplication::translate("MainWindow", "Built-in Tools", nullptr));
        menuNote_Default->setTitle(QCoreApplication::translate("MainWindow", "Note Default", nullptr));
        menuHelp->setTitle(QCoreApplication::translate("MainWindow", "Help", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
