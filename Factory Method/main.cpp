#include "ZombieFactory.h"
#include "SkeletonFactory.h"

int main()
{
    IFactory* factory = new ZombieFactory();
    IEnemy* zombie = factory->createEnemy();
    zombie->attack();

    delete zombie;
    delete factory;

    factory = new SkeletonFactory();
    IEnemy* skeleton = factory->createEnemy();
    skeleton->attack();

    delete skeleton;
    delete factory;

    return 0;
}