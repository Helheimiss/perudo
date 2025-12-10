#include "core.h"
#include "raylib.h"


#pragma region entity
Entity::Entity()
{
    rate.first = 0;
    rate.second = 0;
}

std::pair<int, int>& Entity::GetRate()
{
    return rate;
}
#pragma endregion entity


#pragma region cup
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
#pragma endregion cup


#pragma region button
Button::Button(Vector2 position, Vector2 size)
    : position(position),
    size(size)
{
    texture = LoadTexture("images/button.png");
    texture.width = size.x;
    texture.height = size.y;
}

bool Button::Draw(const char *text)
{
    DrawTexture(texture, position.x, position.y, WHITE);
    Vector2 textureCenter = {
        position.x + texture.width / 2,
        position.y + texture.height / 2
    };


    int textWidth = MeasureText(text, 24);
    DrawText(text,
            textureCenter.x - textWidth / 2,
            textureCenter.y - 12,
            24, BLACK);


    Vector2 MousePos = Vector2{GetMouseX(), GetMouseY()};
    Rectangle rect = {position.x, position.y, static_cast<float>(texture.width), static_cast<float>(texture.height)};

    if(CheckCollisionPointRec(MousePos,rect) && IsMouseButtonPressed(MOUSE_BUTTON_LEFT))
    {
        return true;
    }
    return false;
}
#pragma endregion button