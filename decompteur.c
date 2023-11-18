//
// Created by frank on 11/18/2023.
//

#include <stdio.h>
#include <Windows.h>

void decompteur(int time)
{
    for(int i=0; i<120; i++)
    {
        printf("%d\n",time);
        time-=1;
        Sleep(1000);
    }
}


