#include "raylib.h"
#include "core.h"


int main(void)
{
    InitWindow(1280, 720, "perudo");
    SetTargetFPS(60);

    Cup f;
    Button b(Vector2{0,0}, Vector2(50, 50));

    while (!WindowShouldClose())
    {
        BeginDrawing();
            ClearBackground(Color{106,153,78, 255});
            f.Draw(Vector2{GetScreenWidth()/2.0f, GetScreenHeight()/2.0f});
            b.Draw();
            DrawFPS(0,0);
        EndDrawing();
    }

    CloseWindow();

    return 0;
}