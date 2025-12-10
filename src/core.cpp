#include "core.h"
#include "raylib.h"


Cup::Cup()
    : texture(LoadTexture("images/cup.png")),
    source(0, 0, texture.width, texture.height),
    dest(0, 0, texture.width / 2.0f, texture.height / 2.0f),
    origin(dest.width / 2.0f, dest.height / 2.0f)
{

}


void Cup::DrawCup(Vector2 pos)
{
    dest.x = pos.x;
    dest.y = pos.y;

    DrawTexturePro(texture, source, dest, origin, 180.0f, WHITE);
}