#include "gun.h"

void cGun::Add_Bullet_Num(int Count)
{
    this->m_bullet_count += Count;
}

bool cGun::Shut(int ShutNum)
{
    if (m_bullet_count <= 0)
    {
        printf("Gun Has None Bullet\n");
        return false;
    }

    else
        this->m_bullet_count -= ShutNum;
    
    return true;
}

cGun::cGun(string Type)
{
    this->m_Type = Type;
}