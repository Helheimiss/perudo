#include "raylib.h"
#include "core.h"
#include <iostream>

int main(void)
{
    InitWindow(1280, 720, "perudo");
    SetTargetFPS(60);

    Cup f;
    Button stavka(Vector2{0,50}, Vector2(150, 50));
    Button stavkaplus(Vector2{0,100}, Vector2(150, 50));
    Button stavkaminus(Vector2{0,150}, Vector2(150, 50));

    Entity player;
    bool IsPlayerGame = true;

    while (!WindowShouldClose())
    {
        BeginDrawing();
            ClearBackground(Color{106,153,78, 255});
            f.Draw(Vector2{GetScreenWidth()/2.0f, GetScreenHeight()/2.0f});

            if (IsPlayerGame)
            {
                if (stavka.Draw(TextFormat("stavka: %02i", player.GetRate())))
                {
                    puts("yes");
                }

                if (player.GetRate() < 60 && stavkaplus.Draw("++"))
                {
                    ++player.GetRate();
                }
                if (player.GetRate() > 0 && stavkaminus.Draw("--"))
                {
                    --player.GetRate();
                }
            }




            DrawFPS(0,0);
        EndDrawing();
    }

    CloseWindow();

    return 0;
}