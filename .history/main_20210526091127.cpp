#include "soilder.h"
#include "gun.h"
#include<stdio.h>

void _main();

int main(int argc, char *argv[])
{
    _main();
    printf("the progam finished!\n")
    return 0;
}

void _main()
{
    cGun Gun("HQL");
    cSoilder Soilder("SYL");
    Soilder.AddGun(&Gun);
    Soilder.Add_Bullet_ToGun(10);
    while (true)
    {
        if(Soilder.Fire() == false)
            break;
    }

}