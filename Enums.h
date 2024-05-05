#pragma once
extern std::string importedPath;
#ifndef ENUMS_H
#define ENUMS_H
#include <iostream>
#include <boost/bimap.hpp>
#include <boost/assign.hpp>
#include "Board.h"

enum class State {
	MENU, GAME, GAME_OPTIONS, MAP_EDITOR,
	SETTINGS, GAMEOVER, PAUSE, MAP_EDITOR_SELECT
};

enum class Controls_Key {
	/*HOLD,*/ HARD_DROP, HARD_DROP_ALT, GRAVITY, SIZE
};

enum class HitType {
	HIT, ALMOST, MISS, INVALID
};

const boost::bimap<Controls_Key, string> controlsKeyStringMap = boost::assign::list_of<boost::bimap<Controls_Key, string>::relation>
//	(Controls_Key::HOLD, "HOLD")
	(Controls_Key::HARD_DROP, "HARD_DROP")
	(Controls_Key::HARD_DROP_ALT, "HARD_DROP_ALT")
	(Controls_Key::GRAVITY, "GRAVITY");

const map<ClearType, string> clearTypeStringMap = {
	{ClearType::NONE, "None"},
	{ClearType::SINGLE, "Single"},
	{ClearType:: DOUBLE, "Double"},
	{ClearType::TRIPLE, "Triple"},
	{ClearType::TETRIS, "Tetris"},
	{ClearType::TSPIN_MINI_NO, "T-Spin Mini"},
	{ClearType::TSPIN_NO, "T-Spin"},
	{ClearType::TSPIN_MINI_SINGLE, "T-Spin Mini Single"},
	{ClearType::TSPIN_SINGLE, "T-Spin Single"},
	{ClearType::TSPIN_MINI_DOUBLE, "T-Spin Mini Double"},
	{ClearType::TSPIN_DOUBLE, "T-Spin Double"},
	{ClearType::TSPIN_TRIPLE, "T-Spin Triple"},
	{ClearType::COMBO, "Combo"},
	{ClearType::SOFTDROP, "Soft Drop"},
	{ClearType::HARDDROP, "Dard Drop"},
	{ClearType::SINGLE_LINE_PC, "Single-Line PC"},
	{ClearType::DOUBLE_LINE_PC, "Double-Line PC"},
	{ClearType::TRIPLE_LINE_PC, "Triple-Line PC"},
	{ClearType::TETRIS_PC, "Tetris PC"},
	{ClearType::B2B_TETRIS_PC, "B2B Tetris PC"},
	{ClearType::B2B_TETRIS, "B2B Tetris"},
	{ClearType::B2B_TSPIN_MINI_SINGLE, "B2B T-Spin Mini Single"},
	{ClearType::B2B_TSPIN_SINGLE, "B2B T-Spin Single"},
	{ClearType::B2B_TSPIN_MINI_DOUBLE, "B2B T-Spin Mini Double"},
	{ClearType::B2B_TSPIN_DOUBLE, "B2B T-Spin Double"},
	{ClearType::B2B_TSPIN_TRIPLE, "B2B T-Spin Triple"},
	{ClearType::B2B_PENTRIS_PC, "B2B Pentris PC"},
	{ClearType::B2B_PENTRIS, "B2B Pentris"},
	{ClearType::PENTRIS, "Pentris"}
};

const map<Controls_Key, string> controlsStringMap = {
//	{Controls_Key::HOLD, "Hold"},
	{Controls_Key::HARD_DROP, "Hard drop"},
	{Controls_Key::HARD_DROP_ALT, "Hard drop alt"},
	{Controls_Key::GRAVITY, "Gravity"},
};

const map<Keyboard::Key, string> keyboardKeyStringMap = {
	{Keyboard::A, "A"},
	{Keyboard::B, "B"},
	{Keyboard::C, "C"},
	{Keyboard::D, "D"},
	{Keyboard::E, "E"},
	{Keyboard::F, "F"},
	{Keyboard::G, "G"},
	{Keyboard::H, "H"},
	{Keyboard::I, "I"},
	{Keyboard::J, "J"},
	{Keyboard::K, "K"},
	{Keyboard::L, "L"},
	{Keyboard::M, "M"},
	{Keyboard::N, "N"},
	{Keyboard::O, "O"},
	{Keyboard::P, "P"},
	{Keyboard::Q, "Q"},
	{Keyboard::R, "R"},
	{Keyboard::S, "S"},
	{Keyboard::T, "T"},
	{Keyboard::U, "U"},
	{Keyboard::V, "V"},
	{Keyboard::W, "W"},
	{Keyboard::X, "X"},
	{Keyboard::Y, "Y"},
	{Keyboard::Z, "Z"},
	{Keyboard::Num0, "Num0"},
	{Keyboard::Num1, "Num1"},
	{Keyboard::Num2, "Num2"},
	{Keyboard::Num3, "Num3"},
	{Keyboard::Num4, "Num4"},
	{Keyboard::Num5, "Num5"},
	{Keyboard::Num6, "Num6"},
	{Keyboard::Num7, "Num7"},
	{Keyboard::Num8, "Num8"},
	{Keyboard::Num9, "Num9"},
	{Keyboard::Escape, "Escape"},
	{Keyboard::LControl, "LControl"},
	{Keyboard::LShift, "LShift"},
	{Keyboard::LAlt, "LAlt"},
	{Keyboard::LSystem, "LSystem"},
	{Keyboard::RControl, "RControl"},
	{Keyboard::RShift, "RShift"},
	{Keyboard::RAlt, "RAlt"},
	{Keyboard::RSystem, "RSystem"},
	{Keyboard::Menu, "Menu"},
	{Keyboard::LBracket, "LBracket"},
	{Keyboard::RBracket, "RBracket"},
	{Keyboard::SemiColon, "SemiColon"},
	{Keyboard::Comma, "Comma"},
	{Keyboard::Period, "Period"},
	{Keyboard::Quote, "Quote"},
	{Keyboard::Slash, "Slash"},
	{Keyboard::BackSlash, "BackSlash"},
	{Keyboard::Tilde, "Tilde"},
	{Keyboard::Equal, "Equal"},
	{Keyboard::Dash, "Dash"},
	{Keyboard::Space, "Space"},
	{Keyboard::Return, "Return"},
	{Keyboard::BackSpace, "BackSpace"},
	{Keyboard::Tab, "Tab"},
	{Keyboard::PageUp, "PageUp"},
	{Keyboard::PageDown, "PageDown"},
	{Keyboard::End, "End"},
	{Keyboard::Home, "Home"},
	{Keyboard::Insert, "Insert"},
	{Keyboard::Delete, "Delete"},
	{Keyboard::Add, "Add"},
	{Keyboard::Subtract, "Subtract"},
	{Keyboard::Multiply, "Multiply"},
	{Keyboard::Divide, "Divide"},
	{Keyboard::Left, "Left"},
	{Keyboard::Right, "Right"},
	{Keyboard::Up, "Up"},
	{Keyboard::Down, "Down"},
	{Keyboard::Numpad0, "Numpad0"},
	{Keyboard::Numpad1, "Numpad1"},
	{Keyboard::Numpad2, "Numpad2"},
	{Keyboard::Numpad3, "Numpad3"},
	{Keyboard::Numpad4, "Numpad4"},
	{Keyboard::Numpad5, "Numpad5"},
	{Keyboard::Numpad6, "Numpad6"},
	{Keyboard::Numpad7, "Numpad7"},
	{Keyboard::Numpad8, "Numpad8"},
	{Keyboard::Numpad9, "Numpad9"},
	{Keyboard::F1, "F1"},
	{Keyboard::F2, "F2"},
	{Keyboard::F3, "F3"},
	{Keyboard::F4, "F4"},
	{Keyboard::F5, "F5"},
	{Keyboard::F6, "F6"},
	{Keyboard::F7, "F7"},
	{Keyboard::F8, "F8"},
	{Keyboard::F9, "F9"},
	{Keyboard::F10, "F10"},
	{Keyboard::F11, "F11"},
	{Keyboard::F12, "F12"},
	{Keyboard::F13, "F13"},
	{Keyboard::F14, "F14"},
	{Keyboard::F15, "F15"},
	{Keyboard::Pause, "Pause"},
	{Keyboard::KeyCount, "KeyCount"},
};


const array<array<array<short, boardWidth>, boardHeight>, 42> infBoardSimulation = { {
	{{
		{{0, 0, 0, 0 ,0, 0}},
		{{0, 0, 0, 0 ,0, 0}},
		{{0, 0, 0, 0 ,0, 0}},
		{{0, 0, 0, 0 ,0, 0}},
		{{0, 0, 0, 0 ,0, 0}},
		{{0, 0, 0, 0 ,0, 0}}
	}},
	{ {
		{ {0, 0, 0, 0, 0, 0 }},
		{{0, 0, 0, 0, 0, 0 }},
		{{0, 0, 0, 0, 0, 0 }},
		{{0, 0, 0, 0, 0, 0 }},
		{{6, 0, 0, 0, 0, 0 }},
		{{6, 6, 6, 0, 0, 0 }}
	}},
	{{
		{{0, 0, 0, 0, 0, 0 }},
		{{0, 0, 0, 0, 0, 0 }},
		{{0, 0, 0, 0, 0, 0 }},
		{{0, 0, 0, 0, 0, 0 }},
		{{0, 0, 0, 0, 0, 0 }},
		{{6, 0, 0, 0, 7, 0 }}
	}},
	{{
		{{0, 0, 0, 0, 0, 0 }},
		{{0, 0, 0, 0, 0, 0 }},
		{{0, 0, 0, 0, 0, 0 }},
		{{0, 0, 0, 0, 0, 0 }},
		{{1, 1, 0, 0, 0, 0 }},
		{{6, 1, 1, 0, 7, 0 }}
	}},
	{{
		{{0, 0, 0, 0, 0, 0 }},
		{{0, 0, 0, 0, 0, 0 }},
		{{0, 0, 0, 0, 0, 0 }},
		{{0, 0, 4, 0, 0, 0 }},
		{{1, 1, 4, 4, 0, 0 }},
		{{6, 1, 1, 4, 7, 0 }}
	}},
	{{
		{{0, 0, 0, 0, 0, 0 }},
		{{2, 0, 0, 0, 0, 0 }},
		{{2, 0, 0, 0, 0, 0 }},
		{{2, 2, 4, 0, 0, 0 }},
		{{1, 1, 4, 4, 0, 0 }},
		{{6, 1, 1, 4, 7, 0 }}
	}},
	{{
		{{0, 0, 0, 0, 0, 0 }},
		{{2, 3, 3, 0, 0, 0 }},
		{{2, 3, 3, 0, 0, 0 }},
		{{2, 2, 4, 0, 0, 0 }},
		{{1, 1, 4, 4, 0, 0 }},
		{{6, 1, 1, 4, 7, 0 }}
	}},
	{{
		{{0, 0, 0, 0, 0, 0 }},
		{{0, 0, 0, 0, 0, 0 }},
		{{2, 3, 3, 0, 0, 0 }},
		{{2, 3, 3, 0, 0, 5 }},
		{{2, 2, 4, 0, 0, 5 }},
		{{1, 1, 4, 4, 0, 5 }}
	}},
	{{
		{{0, 0, 0, 0, 0, 0 }},
		{{0, 0, 0, 0, 0, 0 }},
		{{0, 0, 0, 0, 0, 0 }},
		{{0, 0, 0, 0, 0, 0 }},
		{{2, 3, 3, 0, 0, 0 }},
		{{2, 3, 3, 4, 0, 5 }}
	}},
	{{
		{{0, 0, 0, 0, 0, 0 }},
		{{0, 0, 0, 0, 0, 0 }},
		{{0, 0, 0, 0, 0, 0 }},
		{{0, 0, 0, 0, 0, 0 }},
		{{0, 0, 0, 0, 0, 0 }},
		{{0, 0, 0, 0, 0, 0 }}
	}},
	{{
		{{0, 0, 0, 0, 0, 0 }},
		{{0, 0, 0, 0, 0, 0 }},
		{{0, 0, 0, 0, 0, 0 }},
		{{0, 0, 0, 0, 0, 0 }},
		{{1, 1, 0, 0, 0, 0 }},
		{{0, 1, 1, 0, 0, 0 }}
	}},
	{{
		{{0, 0, 0, 0, 0, 0 }},
		{{0, 0, 0, 0, 0, 0 }},
		{{0, 0, 0, 0, 0, 0 }},
		{{0, 0, 0, 0, 0, 0 }},
		{{0, 0, 0, 0, 0, 0 }},
		{{0, 1, 1, 0, 0, 0 }}
	}},
	{{
		{{0, 0, 0, 0, 0, 0 }},
		{{0, 0, 0, 0, 0, 0 }},
		{{0, 0, 0, 0, 0, 0 }},
		{{0, 0, 0, 0, 0, 0 }},
		{{2, 2, 2, 0, 0, 0 }},
		{{2, 1, 1, 0, 0, 0 }}
	}},
	{{
		{{0, 0, 0, 0, 0, 0 }},
		{{0, 0, 0, 0, 0, 0 }},
		{{0, 0, 0, 0, 0, 0 }},
		{{0, 0, 0, 0, 0, 0 }},
		{{2, 2, 2, 0, 3, 3 }},
		{{2, 1, 1, 0, 3, 3 }}
	}},
	{{
		{{0, 0, 0, 0, 0, 0 }},
		{{0, 0, 0, 0, 0, 0 }},
		{{0, 0, 0, 0, 0, 0 }},
		{{0, 0, 0, 0, 0, 0 }},
		{{0, 0, 0, 0, 0, 0 }},
		{{0, 0, 0, 6, 6, 0 }}
	}},
	{{
		{{0, 0, 0, 0, 0, 0 }},
		{{0, 0, 0, 0, 0, 0 }},
		{{0, 0, 0, 0, 0, 0 }},
		{{0, 0, 0, 0, 0, 0 }},
		{{3, 3, 0, 0, 0, 0 }},
		{{3, 3, 0, 6, 6, 0 }}
	}},
	{{
		{{0, 0, 0, 0, 0, 0 }},
		{{0, 0, 0, 0, 0, 0 }},
		{{0, 0, 0, 0, 0, 0 }},
		{{0, 0, 0, 0, 4, 0 }},
		{{3, 3, 0, 0, 4, 4 }},
		{{3, 3, 0, 6, 6, 4 }}
	}},
	{{
		{{0, 0, 0, 0, 0, 0 }},
		{{0, 0, 0, 0, 0, 0 }},
		{{0, 0, 0, 0, 0, 0 }},
		{{0, 0, 0, 0, 0, 0 }},
		{{0, 0, 0, 0, 0, 0 }},
		{{0, 0, 0, 1, 4, 0 }}
	}},
	{{
		{{0, 0, 0, 0, 0, 0 }},
		{{0, 0, 0, 0, 0, 0 }},
		{{0, 0, 0, 0, 0, 0 }},
		{{0, 0, 0, 0, 0, 0 }},
		{{0, 0, 0, 6, 6, 6 }},
		{{0, 0, 0, 1, 4, 6 }}
	}},
	{{
		{{0, 0, 0, 0, 0, 0 }},
		{{0, 0, 0, 0, 0, 0 }},
		{{0, 0, 0, 0, 0, 0 }},
		{{0, 0, 0, 0, 0, 0 }},
		{{0, 0, 0, 0, 0, 0 }},
		{{2, 0, 0, 1, 4, 6 }}
	}},
	{{
		{{0, 0, 0, 0, 0, 0 }},
		{{0, 0, 0, 0, 0, 0 }},
		{{0, 0, 0, 0, 0, 0 }},
		{{0, 7, 0, 0, 0, 0 }},
		{{7, 7, 0, 0, 0, 0 }},
		{{2, 7, 0, 1, 4, 6 }}
	}},
	{{
		{{5, 0, 0, 0, 0, 0 }},
		{{5, 0, 0, 0, 0, 0 }},
		{{5, 0, 0, 0, 0, 0 }},
		{{5, 7, 0, 0, 0, 0 }},
		{{7, 7, 0, 0, 0, 0 }},
		{{2, 7, 0, 1, 4, 6 }}
	}},
	{{
		{{5, 2, 0, 0, 0, 0 }},
		{{5, 2, 0, 0, 0, 0 }},
		{{5, 2, 2, 0, 0, 0 }},
		{{5, 7, 0, 0, 0, 0 }},
		{{7, 7, 0, 0, 0, 0 }},
		{{2, 7, 0, 1, 4, 6 }}
	}},
	{{
		{{0, 0, 0, 0, 0, 0 }},
		{{5, 2, 0, 0, 0, 0 }},
		{{5, 2, 0, 0, 0, 0 }},
		{{5, 2, 2, 0, 0, 0 }},
		{{5, 7, 6, 6, 0, 0 }},
		{{7, 7, 6, 0, 0, 0 }}
	}},
	{{
		{{0, 0, 0, 0, 0, 0 }},
		{{0, 0, 0, 0, 0, 0 }},
		{{5, 2, 0, 0, 0, 0 }},
		{{5, 2, 0, 0, 0, 0 }},
		{{5, 2, 2, 0, 0, 0 }},
		{{7, 7, 6, 4, 4, 0 }}
	}},
	{{
		{{0, 0, 0, 0, 0, 0 }},
		{{0, 0, 0, 0, 0, 0 }},
		{{0, 0, 0, 0, 0, 0 }},
		{{5, 2, 0, 0, 0, 5 }},
		{{5, 2, 0, 0, 0, 5 }},
		{{5, 2, 2, 0, 0, 5 }}
	}},
	{{
		{{0, 0, 0, 0, 0, 0 }},
		{{0, 0, 0, 0, 0, 0 }},
		{{0, 0, 0, 0, 0, 0 }},
		{{0, 0, 0, 0, 0, 0 }},
		{{5, 2, 0, 0, 0, 5 }},
		{{5, 2, 1, 1, 0, 5 }}
	}},
	{{
		{{0, 0, 0, 0, 0, 0 }},
		{{0, 0, 0, 0, 0, 0 }},
		{{3, 3, 0, 0, 0, 0 }},
		{{3, 3, 0, 0, 0, 0 }},
		{{5, 2, 0, 0, 0, 5 }},
		{{5, 2, 1, 1, 0, 5 }}
	}},
	{{
		{{0, 0, 0, 0, 0, 0 }},
		{{0, 0, 0, 0, 0, 0 }},
		{{0, 0, 0, 0, 0, 0 }},
		{{3, 3, 0, 0, 0, 0 }},
		{{3, 3, 0, 7, 0, 0 }},
		{{5, 2, 1, 1, 0, 5 }}
	}},
	{{
		{{0, 0, 0, 0, 0, 0 }},
		{{0, 0, 0, 0, 0, 0 }},
		{{0, 0, 0, 0, 0, 0 }},
		{{0, 0, 0, 0, 0, 0 }},
		{{3, 3, 0, 0, 0, 1 }},
		{{3, 3, 0, 7, 1, 1 }}
	}},
	{{
		{{0, 0, 0, 0, 0, 0 }},
		{{0, 0, 0, 0, 0, 0 }},
		{{0, 0, 0, 0, 0, 0 }},
		{{0, 0, 5, 0, 0, 0 }},
		{{0, 0, 5, 0, 0, 0 }},
		{{3, 3, 5, 0, 0, 1 }}
	}},
	{{
		{{0, 0, 0, 0, 0, 0 }},
		{{0, 0, 0, 0, 0, 0 }},
		{{0, 0, 0, 0, 0, 0 }},
		{{0, 0, 0, 0, 0, 0 }},
		{{0, 0, 5, 0, 0, 0 }},
		{{0, 0, 5, 3, 3, 0 }}
	}},
	{{
		{{0, 0, 0, 0, 0, 0 }},
		{{0, 0, 0, 0, 0, 0 }},
		{{0, 0, 0, 0, 0, 0 }},
		{{0, 0, 0, 0, 0, 0 }},
		{{0, 0, 5, 6, 6, 6 }},
		{{0, 0, 5, 3, 3, 6 }}
	}},
	{{
		{{0, 0, 0, 0, 0, 0 }},
		{{0, 0, 0, 0, 0, 0 }},
		{{0, 0, 0, 0, 0, 2 }},
		{{0, 0, 0, 2, 2, 2 }},
		{{0, 0, 5, 6, 6, 6 }},
		{{0, 0, 5, 3, 3, 6 }}
	}},
	{{
		{{0, 0, 0, 0, 0, 0 }},
		{{0, 0, 0, 0, 4, 4 }},
		{{0, 0, 0, 4, 4, 2 }},
		{{0, 0, 0, 2, 2, 2 }},
		{{0, 0, 5, 6, 6, 6 }},
		{{0, 0, 5, 3, 3, 6 }}
	}},
	{{
		{{0, 0, 0, 0, 0, 0 }},
		{{0, 0, 0, 0, 0, 0 }},
		{{0, 0, 0, 0, 4, 4 }},
		{{0, 0, 0, 4, 4, 2 }},
		{{0, 7, 0, 2, 2, 2 }},
		{{0, 7, 5, 3, 3, 6 }}
	}},
	{{
		{{0, 0, 0, 0, 0, 0 }},
		{{0, 0, 0, 0, 0, 0 }},
		{{0, 0, 0, 0, 0, 0 }},
		{{5, 0, 0, 0, 4, 4 }},
		{{5, 0, 0, 4, 4, 2 }},
		{{5, 7, 0, 2, 2, 2 }}
	}},
	{{
		{{0, 0, 0, 0, 0, 0 }},
		{{4, 0, 0, 0, 0, 0 }},
		{{4, 4, 0, 0, 0, 0 }},
		{{5, 4, 0, 0, 4, 4 }},
		{{5, 0, 0, 4, 4, 2 }},
		{{5, 7, 0, 2, 2, 2 }}
	}},
	{{
		{{0, 0, 0, 0, 0, 0 }},
		{{0, 0, 0, 0, 0, 0 }},
		{{4, 0, 0, 0, 0, 0 }},
		{{4, 4, 6, 0, 0, 0 }},
		{{5, 4, 6, 0, 4, 4 }},
		{{5, 7, 0, 2, 2, 2 }}
	}},
	{{
		{{0, 0, 0, 0, 0, 0 }},
		{{0, 0, 0, 0, 0, 0 }},
		{{0, 0, 0, 0, 0, 0 }},
		{{0, 0, 0, 0, 0, 0 }},
		{{4, 0, 0, 0, 0, 0 }},
		{{5, 7, 0, 2, 2, 2 }}
	}},
	{{
		{{0, 0, 0, 0, 0, 0 }},
		{{0, 0, 0, 0, 0, 0 }},
		{{0, 0, 0, 0, 0, 0 }},
		{{0, 0, 0, 0, 0, 0 }},
		{{0, 0, 0, 1, 0, 0 }},
		{{4, 0, 1, 1, 0, 0 }}
	}},
	{{
		{{0, 0, 0, 0, 0, 0 }},
		{{0, 0, 0, 0, 0, 0 }},
		{{0, 0, 0, 0, 0, 0 }},
		{{0, 0, 0, 0, 0, 0 }},
		{{7, 7, 7, 1, 0, 0 }},
		{{4, 7, 1, 1, 0, 0 }}
	}}
}};

const array<array<array<short, boardWidth>, boardHeight>, 19> tutorialBoards = { {
	{{
		{{8, 8, 8, 8, 8, 8}},
		{{8, 8, 8, 8, 8, 8}},
		{{8, 8, 8, 0, 0, 8}},
		{{8, 8, 0, 0, 8, 8}},
		{{8, 8, 8, 8, 8, 8}},
		{{8, 8, 8, 8, 8, 8}}
	}},
	{{
		{{8, 8, 8, 8, 8, 8}},
		{{8, 8, 8, 8, 8, 8}},
		{{8, 8, 0, 8, 8, 8}},
		{{8, 8, 0, 0, 8, 8}},
		{{8, 8, 8, 0, 8, 8}},
		{{8, 8, 8, 8, 8, 8}}
	}},
	{{
		{{8, 8, 8, 8, 8, 8}},
		{{8, 8, 8, 8, 8, 8}},
		{{8, 0, 0, 8, 8, 8}},
		{{8, 8, 0, 0, 8, 8}},
		{{8, 8, 8, 8, 8, 8}},
		{{8, 8, 8, 8, 8, 8}}
	}},
	{{
		{{8, 8, 8, 8, 8, 8}},
		{{8, 8, 8, 8, 8, 8}},
		{{8, 8, 8, 0, 8, 8}},
		{{8, 8, 0, 0, 8, 8}},
		{{8, 8, 0, 8, 8, 8}},
		{{8, 8, 8, 8, 8, 8}}
	}},
	{{
		{{8, 8, 8, 8, 8, 8}},
		{{8, 8, 8, 8, 8, 8}},
		{{8, 8, 0, 8, 8, 8}},
		{{8, 8, 0, 0, 0, 8}},
		{{8, 8, 8, 8, 8, 8}},
		{{8, 8, 8, 8, 8, 8}}
	}},
	{{
		{{8, 8, 8, 8, 8, 8}},
		{{8, 8, 8, 8, 8, 8}},
		{{8, 8, 0, 0, 8, 8}},
		{{8, 8, 0, 8, 8, 8}},
		{{8, 8, 0, 8, 8, 8}},
		{{8, 8, 8, 8, 8, 8}}
	}},
	{{
		{{8, 8, 8, 8, 8, 8}},
		{{8, 8, 8, 8, 8, 8}},
		{{8, 0, 0, 0, 8, 8}},
		{{8, 8, 8, 0, 8, 8}},
		{{8, 8, 8, 8, 8, 8}},
		{{8, 8, 8, 8, 8, 8}}
	}},
	{{
		{{8, 8, 8, 8, 8, 8}},
		{{8, 8, 8, 0, 8, 8}},
		{{8, 8, 8, 0, 8, 8}},
		{{8, 8, 0, 0, 8, 8}},
		{{8, 8, 8, 8, 8, 8}},
		{{8, 8, 8, 8, 8, 8}}
	}},
	{{
		{{8, 8, 8, 8, 8, 8}},
		{{8, 8, 8, 8, 8, 8}},
		{{8, 8, 8, 0, 8, 8}},
		{{8, 0, 0, 0, 8, 8}},
		{{8, 8, 8, 8, 8, 8}},
		{{8, 8, 8, 8, 8, 8}}
	}},
	{{
		{{8, 8, 8, 8, 8, 8}},
		{{8, 8, 0, 8, 8, 8}},
		{{8, 8, 0, 8, 8, 8}},
		{{8, 8, 0, 0, 8, 8}},
		{{8, 8, 8, 8, 8, 8}},
		{{8, 8, 8, 8, 8, 8}}
	}},
	{{
		{{8, 8, 8, 8, 8, 8}},
		{{8, 8, 8, 8, 8, 8}},
		{{8, 8, 0, 0, 0, 8}},
		{{8, 8, 0, 8, 8, 8}},
		{{8, 8, 8, 8, 8, 8}},
		{{8, 8, 8, 8, 8, 8}}
	}},
	{{
		{{8, 8, 8, 8, 8, 8}},
		{{8, 8, 8, 8, 8, 8}},
		{{8, 8, 0, 0, 8, 8}},
		{{8, 8, 8, 0, 8, 8}},
		{{8, 8, 8, 0, 8, 8}},
		{{8, 8, 8, 8, 8, 8}}
	}},
	{{
		{{8, 8, 8, 8, 8, 8}},
		{{8, 8, 8, 8, 8, 8}},
		{{8, 8, 0, 8, 8, 8}},
		{{8, 0, 0, 0, 8, 8}},
		{{8, 8, 8, 8, 8, 8}},
		{{8, 8, 8, 8, 8, 8}}
	}},
	{{
		{{8, 8, 8, 8, 8, 8}},
		{{8, 8, 8, 8, 8, 8}},
		{{8, 8, 0, 8, 8, 8}},
		{{8, 8, 0, 0, 8, 8}},
		{{8, 8, 0, 8, 8, 8}},
		{{8, 8, 8, 8, 8, 8}}
	}},
	{{
		{{8, 8, 8, 8, 8, 8}},
		{{8, 8, 8, 8, 8, 8}},
		{{8, 8, 0, 0, 0, 8}},
		{{8, 8, 8, 0, 8, 8}},
		{{8, 8, 8, 8, 8, 8}},
		{{8, 8, 8, 8, 8, 8}}
	}},
	{{
		{{8, 8, 8, 8, 8, 8}},
		{{8, 8, 8, 8, 8, 8}},
		{{8, 8, 8, 0, 8, 8}},
		{{8, 8, 0, 0, 8, 8}},
		{{8, 8, 8, 0, 8, 8}},
		{{8, 8, 8, 8, 8, 8}}
	}},
	{{
		{{8, 8, 8, 8, 8, 8}},
		{{8, 8, 8, 8, 8, 8}},
		{{8, 8, 0, 0, 8, 8}},
		{{8, 8, 0, 0, 8, 8}},
		{{8, 8, 8, 8, 8, 8}},
		{{8, 8, 8, 8, 8, 8}}
	}},
	{{
		{{8, 8, 8, 8, 8, 8}},
		{{8, 8, 8, 0, 8, 8}},
		{{8, 8, 8, 0, 8, 8}},
		{{8, 8, 8, 0, 8, 8}},
		{{8, 8, 8, 0, 8, 8}},
		{{8, 8, 8, 8, 8, 8}}
	}},
	{{
		{{8, 8, 8, 8, 8, 8}},
		{{8, 8, 8, 8, 8, 8}},
		{{8, 8, 8, 8, 8, 8}},
		{{8, 0, 0, 0, 0, 8}},
		{{8, 8, 8, 8, 8, 8}},
		{{8, 8, 8, 8, 8, 8}}
	}}
}};

#endif