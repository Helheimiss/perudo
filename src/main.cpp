#include "raylib.h"
#include "core.h"


int main(void)
{
    InitWindow(1280, 720, "perudo");
    SetTargetFPS(60);


    while (!WindowShouldClose())
    {
        BeginDrawing();
            ClearBackground(Color{106,153,78, 255});
            DrawCup(Vector2{1280/2, 720/2});
            DrawFPS(0,0);
        EndDrawing();
    }

    CloseWindow();

    return 0;
}