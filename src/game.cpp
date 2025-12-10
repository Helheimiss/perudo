#include "game.h"
#include "core.h"
#include "raylib.h"

#include <vector>


#pragma region State
void PlauMenu()
{
    static Button StartGame(
        Vector2{GetScreenWidth()/2.0f-75, GetScreenHeight()/2.0f-25},
        Vector2(150, 50)
    );

    static Button OptionsGame(
        Vector2{GetScreenWidth()/2.0f-75, GetScreenHeight()/2.0f+25},
        Vector2(150, 50)
    );

    static Button RulesGame(
        Vector2{GetScreenWidth()/2.0f-75, GetScreenHeight()/2.0f+75},
        Vector2(150, 50)
    );

    static Button ExitGame(
        Vector2{GetScreenWidth()/2.0f-75, GetScreenHeight()/2.0f+125},
        Vector2(150, 50)
    );

    if (StartGame.Draw("start"))
        GAME_STATE = GAME_STATE_ENUM::IN_GAME;

    if (OptionsGame.Draw("options"))
        GAME_STATE = GAME_STATE_ENUM::IN_OPTIONS;

    if (RulesGame.Draw("rules"))
        GAME_STATE = GAME_STATE_ENUM::IN_RULES;

    if (ExitGame.Draw("exit"))
        GAME_STATE = GAME_STATE_ENUM::IN_EXIT;

}


void PlayGame()
{
    static Cup CupPlayer;
    static Button play(Vector2{0,50}, Vector2(200, 50));
    static Button stavka(Vector2{0,100}, Vector2(200, 50));
    static Button stavkaplus(Vector2{0,150}, Vector2(200, 50));
    static Button stavkaminus(Vector2{0,200}, Vector2(200, 50));
    static Button BackButton(Vector2{0, 0}, Vector2{200, 50});

    static std::vector<Entity> bots(BOTS_COUNT);

    static Entity player;
    bool IsPlayerGame = true;

    CupPlayer.Draw(Vector2{GetScreenWidth()/2.0f, GetScreenHeight()/2.0f});

    if (BackButton.Draw("back"))
        GAME_STATE = GAME_STATE_ENUM::IN_MENU;

    if (IsPlayerGame)
    {
        if (play.Draw("play"))
        {
            //todo
        }


        if (stavka.Draw(TextFormat("stavka: %02ix%02i", player.GetRate().first, player.GetRate().second)))
        {
            if (player.GetRate().second < 5)
            {
                ++player.GetRate().second;
            }
            else
            {
                player.GetRate().second = 0;
            }

        }

        if (player.GetRate().first < 5 && stavkaplus.Draw("++"))
        {
            ++player.GetRate().first;
        }
        if (player.GetRate().first > 0 && stavkaminus.Draw("--"))
        {
            --player.GetRate().first;
        }
    }

}


void PlayOptions()
{
    static Button BackButton(Vector2{0, 0}, Vector2{150, 50});
    if (BackButton.Draw("back"))
        GAME_STATE = GAME_STATE_ENUM::IN_MENU;
}


void PlayRules()
{
    static const char *rule_str = "game rule";

    static Button BackButton(Vector2{0, 0}, Vector2{150, 50});
    if (BackButton.Draw("back"))
        GAME_STATE = GAME_STATE_ENUM::IN_MENU;

    DrawText(
        rule_str,
        GetScreenWidth()/2,
        GetScreenHeight()/2,
        50,
        BLACK
    );
}

void PlayGameover()
{
    static Button BackButton(Vector2{0, 0}, Vector2{150, 50});
    if (BackButton.Draw("back"))
        GAME_STATE = GAME_STATE_ENUM::IN_MENU;

    DrawText(
        "GAMEOVER",
        GetScreenWidth()/2,
        GetScreenHeight()/2,
        50,
        BLACK
    );
}
#pragma endregion state