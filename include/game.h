#pragma once

enum class GAME_STATE_ENUM{IN_MENU, IN_GAME, IN_OPTIONS, IN_RULES, IN_EXIT};

inline GAME_STATE_ENUM GAME_STATE = GAME_STATE_ENUM::IN_MENU;

void PlauMenu();
void PlayGame();
void PlayOptions();
void PlayRules();