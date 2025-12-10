#include "core.h"
#include "raylib.h"


Cup::Cup()
    : texture(LoadTexture("images/cup.png")),
    source(0, 0, texture.width, texture.height),
    dest(0, 0, texture.width / 2.0f, texture.height / 2.0f),
    origin(dest.width / 2.0f, dest.height / 2.0f)
{

}

void Cup::Draw(Vector2 pos)
{
    dest.x = pos.x;
    dest.y = pos.y;

    DrawTexturePro(texture, source, dest, origin, 180.0f, WHITE);
}

Texture2D& Cup::GetTexture()
{
    return texture;
}


Button::Button(Vector2 position, Vector2 size)
    : position(position),
    size(size)
{
    texture = LoadTexture("images/button.png");
    texture.width = size.x;
    texture.height = size.y;
}

bool Button::IsPressed(Vector2 MousePos)
{

    return  (texture.width >= MousePos.x || texture.width <= MousePos.x) &&
            (texture.height >= MousePos.y || texture.height <= MousePos.y);
}

void Button::Draw()
{
    DrawTexture(texture, position.x, position.y, WHITE);
}