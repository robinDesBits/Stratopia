#ifndef UNITDISTANCE_H
#define UNITDISTANCE_H

#include "unit.h"


class UnitDistance : public Unit
{
    public:
        UnitDistance();
        virtual ~UnitDistance();
        virtual void UnitMove(int x, int y);
        virtual void Attack(Unit& target);
        virtual bool Die();
    protected:
    private:
};

#endif // UNITDISTANCE_H