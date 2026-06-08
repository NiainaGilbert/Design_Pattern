#include <iostream>
#include "IEnemy.h"

#pragma once

class Skeleton : public IEnemy
{
    public:
        Skeleton() = default;
        void attack() override
        {
            std::cout << "Skeleton attacks with a bow!" << std::endl;
        }
        ~Skeleton() override = default;
};