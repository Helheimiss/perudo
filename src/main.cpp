#include "raylib.h"

int main(void)
{
    InitWindow(800, 450, "perudo");
    SetTargetFPS(60);


    while (!WindowShouldClose())
    {
        BeginDrawing();
            ClearBackground(RAYWHITE);
        EndDrawing();
    }

    CloseWindow();

    return 0;
}