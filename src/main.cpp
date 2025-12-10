#include "raylib.h"

int main(void)
{
    InitWindow(800, 450, "perudo");
    SetTargetFPS(60);


    while (!WindowShouldClose())
    {
        BeginDrawing();
            ClearBackground(Color{106,153,78, 255});
            DrawFPS(0,0);
        EndDrawing();
    }

    CloseWindow();

    return 0;
}