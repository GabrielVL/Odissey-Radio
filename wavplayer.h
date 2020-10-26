#include <iostream>
#include <windows.h>
#include <mmsystem.h>
#include <conio.h>
#include <string>

#pragma comment(lib, "winmm.lib")

using namespace std;


class WavPlayer {
private:
    string hola = "manowar.wav";
    LPCTSTR adios = L"manowar.wav";

public:

    WavPlayer() {


    }

    int playMusic() {

        if (PlaySound(adios, NULL, SND_FILENAME | SND_ASYNC)) {
            int test = 0;
            cin >> test;
            return 0;
        }


        return 1;

    }

    void stopMusic() {
        PlaySound(NULL, NULL, SND_FILENAME | SND_ASYNC);

    }



};
