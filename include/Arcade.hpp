/*
** EPITECH PROJECT, 2024
** B-OOP-400-LYN-4-1-arcade-basile.fouquet
** File description:
** Arcade.hpp
*/

#pragma once

#include <array>
#include <cstdint>
#include <iostream>
#include <vector>

// this is the width and height of the grid
// you are free to change it
#define GRID_WIDTH 28
#define GRID_HEIGHT 28

// this is the size of each cell in pixel
// it is used to calculate the width and height of the window
// for example SCREEN_WIDTH = GRID_WIDTH * GRID_SIZE
// you are free to change it
#define GRID_SIZE 35

namespace Arcade {
    // game header
    typedef struct {
        uint8_t life;
        uint32_t timer;
        uint32_t score;
    } header_t;

    // game event
    typedef enum {
        NONE,
        GAME1,
        GAME2,
        GAME3,
        GAME4,
        GAME5,
        GAME6,
        NEXT_LIB,
        DISPLAY_SUBW,
        GO_TO_MENU,
        EXIT_ARCADE
    } gevent_t;

    typedef struct {
        uint8_t texture;
        uint16_t angle;
        uint8_t offsetX;
        uint8_t offsetY;
    } cell_t;

    // the game grid for the position of the sprites ( gg ;) )
    typedef std::array<std::array<cell_t, GRID_WIDTH>, GRID_HEIGHT> ggrid_t;

    // binary flag to store the inputs
    typedef uint64_t binflag_t;

    typedef enum {
        NO_BUTTON,
        LEFT_BUTTON,
        MIDDLE_BUTTON,
        RIGHT_BUTTON,
        X1_BUTTON,
        X2_BUTTON
    } button_t;

    typedef struct MouseInfo {
        uint64_t x;
        uint64_t y;
        button_t button;
        int8_t scroll; // 1 scroll up, -1 scroll down, 0 no scroll
        bool isPressed;
        bool isReleased;
    } mouse_info_t;

    // the game inputs
    typedef enum {
        // KEYS
        UP_ARROW = 0x1,
        DOWN_ARROW = 0x2,
        RIGHT_ARROW = 0x4,
        LEFT_ARROW = 0x8,
        SPACE_KEY = 0x10,
        ENTER_KEY = 0x20,
        BACKSPACE_KEY = 0x40,
        ESCAPE_KEY = 0x80,
        A_KEY = 0x100,
        B_KEY = 0x200,
        C_KEY = 0x400,
        D_KEY = 0x800,
        E_KEY = 0x1000,
        F_KEY = 0x2000,
        G_KEY = 0x4000,
        H_KEY = 0x8000,
        I_KEY = 0x10000,
        J_KEY = 0x20000,
        K_KEY = 0x40000,
        L_KEY = 0x80000,
        M_KEY = 0x100000,
        N_KEY = 0x200000,
        O_KEY = 0x400000,
        P_KEY = 0x800000,
        Q_KEY = 0x1000000,
        R_KEY = 0x2000000,
        S_KEY = 0x4000000,
        T_KEY = 0x8000000,
        U_KEY = 0x10000000,
        V_KEY = 0x20000000,
        W_KEY = 0x40000000,
        X_KEY = 0x80000000,
        Y_KEY = 0x100000000,
        Z_KEY = 0x200000000,
        // EVENTS
        MOUSE_UPDATE = 0x400000000,
        WINDOW_CLOSED = 0x800000000,
        WINDOW_TOO_SMALL = 0x1000000000,
    } devent_t;

    typedef struct lib_info_s {
        enum {
            GAME,
            DISPLAY
        } type;
        std::string name;
    } lib_info_t;
}
