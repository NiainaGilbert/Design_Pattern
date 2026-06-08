#include "IFactory.h"
#include "Zombie.h"
#pragma once


class ZombieFactory : public IFactory
{
    public:
        IEnemy* createEnemy() override
        {
            return new Zombie();
        }
};