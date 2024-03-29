/*
** EPITECH PROJECT, 2024
** B-OOP-400-LYN-4-1-arcade-basile.fouquet
** File description:
** IDisplayModule
*/

#pragma once

#include "Arcade.hpp"
#include <cstdint>

namespace Arcade {
    class IDisplayModule {
    public:
        virtual ~IDisplayModule() = default;

        // translate each string to a texture or throw an error if there it can't
        virtual void loadAssets(const std::vector<std::string> &assets) = 0;
        // returns a binary flag of inputs and events from the display lib
        virtual binflag_t updateEvent(void) = 0;
        // display the header, the map (assets[0]) and the sprites depending on the ggrid
        virtual void updateDisplay(const header_t &header, const ggrid_t &grid, gevent_t event) = 0;
        // display a sub window with a message in the center of the screen (for start, end or level)
        virtual void displaySubWindow(const std::string &message) = 0;
        virtual const mouse_info_t &getMouseInfo(void) const = 0;
    };
}
