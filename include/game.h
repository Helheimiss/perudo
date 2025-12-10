#pragma once

enum class GAME_STATE_ENUM{IN_MENU, IN_GAME};

inline GAME_STATE_ENUM GAME_STATE = GAME_STATE_ENUM::IN_MENU;

void PlauMenu();
void PlayGame();