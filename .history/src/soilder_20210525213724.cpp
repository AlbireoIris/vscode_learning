#include"soilder.h"

cSoilder::cSoilder(string in_Name_string)
{
    this->m_soilder_name=in_Name_string;
}

void cSoilder::AddGun(Gun* in_Gun)
{
    this->m_Ptr_Gun=in_Gun;
}

void cSoilder::Add_Bullet_ToGun()