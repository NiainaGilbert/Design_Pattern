#include "IEnemy.h"

#pragma once

class IFactory
{
    public:
        virtual ~IFactory() {}
        virtual IEnemy* createEnemy() = 0;
};