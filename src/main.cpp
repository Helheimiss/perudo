#include "raylib.h"
#include "core.h"
#include <iostream>

int main(void)
{
    InitWindow(1280, 720, "perudo");
    SetTargetFPS(60);

    Cup f;
    Button b(Vector2{0,50}, Vector2(150, 50));

    while (!WindowShouldClose())
    {
        BeginDrawing();
            ClearBackground(Color{106,153,78, 255});
            f.Draw(Vector2{GetScreenWidth()/2.0f, GetScreenHeight()/2.0f});
            b.Draw();
            if (b.IsPressed(Vector2(GetMouseX(), GetMouseY())))
            {
                puts("yes");
            }

            DrawFPS(0,0);
        EndDrawing();
    }

    CloseWindow();

    return 0;
}