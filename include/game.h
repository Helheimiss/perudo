#pragma once

enum class GAME_STATE_ENUM {IN_MENU, IN_GAME, IN_OPTIONS, IN_RULES, IN_GAMEOVER, IN_EXIT};

inline GAME_STATE_ENUM GAME_STATE {GAME_STATE_ENUM::IN_MENU};
inline int BOTS_COUNT {0};

void PlauMenu();
void PlayGame();
void PlayOptions();
void PlayRules();
void PlayGameover();