/*
** EPITECH PROJECT, 2023
** include
** File description:
** NCursesTypes.hpp
*/

#include <ncurses.h>
#include <array>
#include <string>

namespace Arcade {
    enum NCursesColor {
        BLACK,
        RED,
        GREEN,
        YELLOW,
        BLUE,
        MAGENTA,
        CYAN,
        WHITE,
        __COLORS_SIZE,
        __COLORS_ERROR
    };

    static const std::array<std::string, 8> NcursesColorsNames = {
        "BLACK",
        "RED",
        "GREEN",
        "YELLOW",
        "BLUE",
        "MAGENTA",
        "CYAN",
        "WHITE"
    };

    typedef uint16_t NCursesColorSet;

    enum NCursesSyle {
        STYLE_BOLD          = 1 << 0,   // Met en gras le texte.
        STYLE_UNDERLINE     = 1 << 1,   // Souligne le texte.
        STYLE_REVERSE       = 1 << 2,   // Inverse les couleurs du texte et du fond.
        STYLE_BLINK         = 1 << 3,   // Fait clignoter le texte.
        STYLE_DIM           = 1 << 4,   // Affiche le texte avec une intensité lumineuse réduite.
        STYLE_STANDOUT      = 1 << 5,   // Met en surbrillance le texte.
        STYLE_INVIS         = 1 << 6,   // Rend le texte invisible.
        STYLE_PROTECT       = 1 << 7,   // Protège le texte contre l'écrasement.
        STYLE_ALTCHARSET    = 1 << 8,   // Active l'ensemble de caractères alternatif.
        STYLE_HORIZONTAL    = 1 << 9,   // Active le mode de défilement horizontal.
        STYLE_LEFT          = 1 << 10,  // Aligner le texte à gauche.
        STYLE_RIGHT         = 1 << 11,  // Aligner le texte à droite.
        STYLE_TOP           = 1 << 12,  // Aligner le texte en haut.
        STYLE_BOTTOM        = 1 << 13,  // Aligner le texte en bas.
        STYLE_VERTICAL      = 1 << 14   // Activer le mode de défilement vertical.
    };

    #define __STYLES_SIZE 15

    typedef uint16_t NCursesStyleSet;

    typedef uint64_t NCursesCS;

    static const std::array<std::string, 15> NcursesStylesNames = {
        "BOLD",
        "UNDERLINE",
        "REVERSE",
        "BLINK",
        "DIM",
        "STANDOUT",
        "INVIS",
        "PROTECT",
        "ALTCHARSET",
        "HORIZONTAL",
        "LEFT",
        "RIGHT",
        "TOP",
        "BOTTOM",
        "VERTICAL"
    };
}
