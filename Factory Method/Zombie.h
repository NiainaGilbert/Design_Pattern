#include <iostream>
#include "IEnemy.h"
#pragma once

class Zombie : public IEnemy
{
    public:
        Zombie() = default;
        void attack() override
        {
            std::cout << "Zombie attacks with a bite!" << std::endl;
        }
        ~Zombie() override = default;
};