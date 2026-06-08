#include "IFactory.h"
#include "Skeleton.h"

#pragma once

class SkeletonFactory : public IFactory
{
    public:
        IEnemy* createEnemy() override
        {
            return new Skeleton();
        }
};