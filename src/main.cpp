#include "raylib.h"
#include "game.h"


int main(void)
{
    InitWindow(1280, 720, "perudo");
    SetTargetFPS(60);



    while (!WindowShouldClose())
    {
        BeginDrawing();
            ClearBackground(Color{106,153,78, 255});

            switch (GAME_STATE)
            {
            case GAME_STATE_ENUM::IN_MENU:
                PlauMenu();
                break;
            case GAME_STATE_ENUM::IN_GAME:
                PlayGame();
                break;

            default:
                break;
            }


            DrawFPS(0,0);
        EndDrawing();
    }

    CloseWindow();

    return 0;
}