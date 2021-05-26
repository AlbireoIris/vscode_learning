#include"gun.h"

void Gun::Add_Bullet_Num(int Count)
{
    this->m_bullet_count+=Count;
}

void Gun::Shut(int ShutNum)
{
    this->m_bullet_count-=ShutNum;
}

Gun::Gun(string Type)
{
    
}