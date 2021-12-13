#ifndef _BASE_TOWER_H_
#define _BASE_TOWER_H_
#include "raylib.h"
#include "enemy.h"
class base_tower
{
public:
    
    int getRange() { return range; }
    int getPower() { return power; }
    Vector2 getPosition() { return position; }
    Enemy getTarget() { return *target; }
    bool getIsClicked() { return isClicked; }
    base_tower(Texture2D texture, Vector2 position);
    void Update(float deltaTime);
    void Draw();
private:
    Texture2D texture{};
    int range{};
    int power{};
    Vector2 position{};
    Enemy *target{};
    bool isClicked{};
    float rotation{0};
    float scale{2};
};

#endif // _BASE_TOWER_H_
