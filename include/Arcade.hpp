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
        DISPLAY1,
        DISPLAY2,
        DISPLAY3,
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
        TAB_KEY = 0x20,
        ENTER_KEY = 0x40,
        BACKSPACE_KEY = 0x80,
        ESCAPE_KEY = 0x100,
        A_KEY = 0x200,
        B_KEY = 0x400,
        C_KEY = 0x800,
        D_KEY = 0x1000,
        E_KEY = 0x2000,
        F_KEY = 0x4000,
        G_KEY = 0x8000,
        H_KEY = 0x10000,
        I_KEY = 0x20000,
        J_KEY = 0x40000,
        K_KEY = 0x80000,
        L_KEY = 0x100000,
        M_KEY = 0x200000,
        N_KEY = 0x400000,
        O_KEY = 0x800000,
        P_KEY = 0x1000000,
        Q_KEY = 0x2000000,
        R_KEY = 0x4000000,
        S_KEY = 0x8000000,
        T_KEY = 0x10000000,
        U_KEY = 0x20000000,
        V_KEY = 0x40000000,
        W_KEY = 0x80000000,
        X_KEY = 0x100000000,
        Y_KEY = 0x200000000,
        Z_KEY = 0x400000000,
        NUM0_KEY = 0x800000000,
        NUM1_KEY = 0x1000000000,
        NUM2_KEY = 0x2000000000,
        NUM3_KEY = 0x4000000000,
        NUM4_KEY = 0x8000000000,
        NUM5_KEY = 0x10000000000,
        NUM6_KEY = 0x20000000000,
        NUM7_KEY = 0x40000000000,
        NUM8_KEY = 0x80000000000,
        NUM9_KEY = 0x100000000000,
        // EVENTS
        MOUSE_UPDATE = 0x200000000000,
        WINDOW_CLOSED = 0x400000000000,
        WINDOW_TOO_SMALL = 0x800000000000,
    } devent_t;

    typedef enum {
        GAME,
        DISPLAY,
        MENU
    } lib_type_t;

    typedef struct {
        lib_type_t type;
        std::string name;
    } lib_info_t;
}
