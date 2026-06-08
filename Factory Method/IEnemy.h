#pragma once
class IEnemy
{
    public:
        virtual void attack() = 0;
        virtual ~IEnemy() = default;
};
