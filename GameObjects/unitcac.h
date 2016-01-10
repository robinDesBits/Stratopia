#ifndef UNITCAC2_H
#define UNITCAC2_H

#include "unit.h"
#include "tools.h"
#include "vector2d.h"
#include "aicontroller.h"

class UnitCaC : public Unit
{
    public:

        UnitCaC(char, bool,SDL_Texture*, SDL_Rect, SDL_Rect,SDL_Renderer*,bool**);
        UnitCaC(char, bool,SDL_Texture*, SDL_Rect, SDL_Rect,SDL_Renderer*,bool**,AIController*);
        UnitCaC(char, bool,SDL_Texture*, SDL_Rect, SDL_Rect,SDL_Renderer*);
        virtual ~UnitCaC();
        virtual void UnitMove();
        virtual void Attack();
        virtual void Update();
        virtual bool Die();
    protected:
        AIController *AIcontroller;
    private:
};

#endif // UNITCAC_H
