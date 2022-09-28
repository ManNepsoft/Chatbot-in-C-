#include <iostream>
#include<conio.h>
#include<windows.h>
#include<mmsystem.h>
#include<stdio.h>

    using namespace std;

int main()
{
    char in[100];
        gets(in);
        PlaySound(("hi.wav"),NULL,SND_SYNC);
    getch();
    return 0;
}
