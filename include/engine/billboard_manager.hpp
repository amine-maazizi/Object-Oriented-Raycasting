/**
 * @file        billboard_manager.hpp
 * @brief       fichier entête de la classe qui va gérer le sorting, projection et rendering des billboard 
 * @author      Amine Maazizi
 * @date        2024-12-27
 * @version     1.0
 * 
 * @details
 * 
 *  
 * @note
 * J'utiliserais un vecteur pour stocker les billboard histoire que ça soit extensible pour un niveau générer de manière proceedurale.
 */

#pragma once

#include <engine/billboard.hpp>
#include <engine/enemy.hpp>
#include <engine/camera.hpp>
#include <engine/player.hpp>
#include <engine/effects.hpp>

#include <vector>
#include <memory>  // For smart pointers
#include <algorithm>


class Player;
class Enemy;
class BillboardManager {
    public:
        BillboardManager(Camera&, Effects& fx);
        void sortBillboards();
        void appendBillboards(std::vector<Billboard*>, Camera&);
        void processEnemies(Player&, int[MAP_HEIGHT][MAP_WIDTH]);

        Effects& fx;

        int number;
        std::vector<std::unique_ptr<Billboard>> billboards;  // Store smart pointers to billboards
        std::vector<Enemy> enemies;
        std::vector<int> billboardOrder;
        std::vector<double> billboardDistance;
        std::vector<double> ZBuffer;
};
