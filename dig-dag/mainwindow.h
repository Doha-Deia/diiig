#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMainWindow>
#include <QGraphicsView>
#include <QGraphicsScene>
#include <QGraphicsPixmapItem>
#include <QFile>
#include <QTextStream>
#include <QPixmap>
#include <QApplication>
#include <QVBoxLayout>
#include <QWidget>
#include <QDebug>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QGraphicsPixmapItem>
#include <QFile>
#include <QTextStream>
#include <QPixmap>
#include "player.h"
QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    Player* player;
private:
    Ui::MainWindow *ui;
    QGraphicsView *view;
    QGraphicsScene *scene;
    double tileWidth, tileHeight;

    void loadGrid(const QString &fileName);
};
#endif // MAINWINDOW_H
