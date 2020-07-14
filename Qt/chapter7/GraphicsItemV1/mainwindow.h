#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QAction>
#include <QMenuBar>
#include <QGraphicsItem>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QGraphicsEllipseItem>
#include "flashitem.h"

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void initScene();//初始化场景
    void createActions();//创建主窗体的所有动作
    void createMenus();  //创建主窗体的菜单栏

public slots:
    void slotNew();//新建一个显示窗体
    void slotClear();//清除场景中所有的图元
    void slotAddEllipseItem();//在场景中加入一个椭圆形图元
//    void slotAddPolygonItem();//在场景中加入一个多变形图元
//    void slotAddTextItem();//在场景中加入一个文字图元
//    void slotAddRectItem();//在场景中加入一个长方形图元
//    void slotAddAlphaItem();//在场景中加入一个透明蝴蝶图元
    void addFlashItem();      //在场景中加入闪烁图元

private:
    QGraphicsScene *scene;

    QAction *newAct,*clearAct,*exitAct;
    QAction *addElipseItemAct;
    QAction *addPolygonItemAct;
    QAction *addTextItemAct;
    QAction *addRectItemAct;
    QAction *addAlphaItemact;


};

#endif // MAINWINDOW_H
