#pragma once
#include "raylib.h"


class Entity
{
private:
    int rate;
public:
    Entity();
    ~Entity() = default;

    int& GetRate();
};


class Button
{
private:
    Vector2 position;
    Vector2 size;
    Texture2D texture;
public:
    Button(Vector2 position, Vector2 size);
    ~Button() = default;

    bool Draw(const char *text);
};


class Cup
{
private:
    Texture2D texture;
    Rectangle source;
    Rectangle dest;
    Vector2 origin;
public:
    Cup();
    ~Cup() = default;

    void Draw(Vector2 pos);
    Texture2D& GetTexture();
    // void ShakeCup(Vector2 pos);
};


