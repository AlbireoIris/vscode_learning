#include "soilder.h"

cSoilder::cSoilder(string in_Name_string)
{
    this->m_soilder_name = in_Name_string;
}

void cSoilder::AddGun(cGun *in_Gun)
{
    this->m_Ptr_Gun = in_Gun;
}

void cSoilder::Add_Bullet_ToGun(int in_Add_Bullet_ToGun)
{
    this->m_Ptr_Gun->Add_Bullet_Num(in_Add_Bullet_ToGun);
}

bool cSoilder::Fire()
{
    if (this->m_Ptr_Gun->Shut(1) == false)
    {
        printf("You Die\n");
        return false;
    }
    else
    {
        printf("You Win\n");
        return true;
    }
}

cSoilder::~cSoilder()
{
    if (this->m_Ptr_Gun != NULL)
    {
        this->m_Ptr_Gun=
    }

}