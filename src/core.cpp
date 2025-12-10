#include "core.h"
#include "raylib.h"


void DrawCup(Vector2 pos)
{
    static Texture2D texture = LoadTexture("images/cup.png");
    static Rectangle source = {0, 0, texture.width, texture.height};
    static Rectangle dest = {pos.x, pos.y, texture.width / 2.0f, texture.height / 2.0f};
    static Vector2 origin = {dest.width / 2.0f, dest.height / 2.0f};

    dest.x = pos.x;
    dest.y = pos.y;

    DrawTexturePro(texture, source, dest, origin, 180.0f, WHITE);
}