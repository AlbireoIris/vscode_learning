#include "gun.h"

void Gun::Add_Bullet_Num(int Count)
{
    this->m_bullet_count += Count;
}

bool Gun::Shut(int ShutNum)
{
    if (m_bullet_count <= 0)
    {
        printf("Gun Has None Bullet");
        return false;
    }

    else
        this->m_bullet_count -= ShutNum;
}

Gun::Gun(string Type)
{
    this->m_Type = Type;
}