#include "game.h"
#include "core.h"

void PlauMenu()
{
    static Button StartGame(
        Vector2{GetScreenWidth()/2.0f-75, GetScreenHeight()/2.0f-25},
        Vector2(150, 50)
    );

    if (StartGame.Draw("start"))
    {
        GAME_STATE = GAME_STATE_ENUM::IN_GAME;
    }

}


void PlayGame()
{
    static Cup f;
    static Button stavka(Vector2{0,50}, Vector2(150, 50));
    static Button stavkaplus(Vector2{0,100}, Vector2(150, 50));
    static Button stavkaminus(Vector2{0,150}, Vector2(150, 50));

    static Entity player;
    static bool IsPlayerGame = true;

    f.Draw(Vector2{GetScreenWidth()/2.0f, GetScreenHeight()/2.0f});

    if (IsPlayerGame)
    {
        if (stavka.Draw(TextFormat("stavka: %02i", player.GetRate())))
        {
            // puts("yes");
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

}