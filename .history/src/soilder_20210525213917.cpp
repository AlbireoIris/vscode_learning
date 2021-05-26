#include"soilder.h"

cSoilder::cSoilder(string in_Name_string)
{
    this->m_soilder_name=in_Name_string;
}

void cSoilder::AddGun(Gun* in_Gun)
{
    this->m_Ptr_Gun=in_Gun;
}

void cSoilder::Add_Bullet_ToGun(int in_Add_Bullet_ToGun)
{
    this->m_Ptr_Gun->Add_Bullet_Num(in_Add_Bullet_ToGun);
}

bool cSoilder::Fire()
{
    this->Fire
}