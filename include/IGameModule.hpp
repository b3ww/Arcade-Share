/*
** EPITECH PROJECT, 2024
** B-OOP-400-LYN-4-1-arcade-basile.fouquet
** File description:
** IGameModule
*/

#pragma once

#include "Arcade.hpp"

namespace Arcade {
    class IGameModule {
    public:
        virtual ~IGameModule() = default;

        // init the header and the grid and return an event if there is one
        virtual void init(header_t &header, ggrid_t &grid) = 0;
        // return the static const std::vector<std::string> for the game assets
        virtual const std::vector<std::string> &getAssets(void) const = 0;
        // update the game depending on the inputs and returns an event if there is one
        virtual gevent_t update(header_t &header, ggrid_t &grid, binflag_t binflag) = 0;
        virtual gevent_t update(header_t &header, ggrid_t &grid,
            binflag_t binflag, const mouse_info_t &mouseInfo) = 0;
        virtual const std::string &getEventMessage(void) const = 0;
    };
}
