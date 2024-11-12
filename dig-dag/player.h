#ifndef PLAYER_H
#define PLAYER_H
#include <QGraphicsPixmapItem>
class Player :public QGraphicsPixmapItem
{
public:
    Player();
    void setInitialPosition(int x, int y);
    void keyPressEvent(QKeyEvent *event) override;
    void moveLeft();
    void moveRight();
    void moveUp();
    void moveDown();
    void setScenePointer(QGraphicsScene* scenePtr);
    void checkCollisions();
    QGraphicsScene* scenePointer;
private:
    QPixmap Image;
};

#endif // PLAYER_H
