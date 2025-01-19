#include <engine/minimap.hpp>

void Minimap::render(SDL_Renderer* renderer, Camera& cam, std::vector<Enemy>& enemies, int worldMap[][MAP_WIDTH]) {
    // On commence par dessiner la minimap sur le renderer
    // TODO: à avoir si on a besoin d'optimistion
    // TODO: par exemple dessiner la minimap sur une autre surface puis append le tous 

    const int tilesize = 4 * SCALING_FACTOR;
    const int psize = 3 * SCALING_FACTOR;
    const int mapsize = MAP_WIDTH * tilesize;
    const Vector2D<int> offset(26, 14);

    for (int y = 0; y < MAP_HEIGHT; y++) {
        for (int x = 0; x < MAP_WIDTH - 1; x++)  {
            SDL_Rect dest;
            dest.x = DISPLAY_WIDTH - offset.getX() - mapsize + (x+1) * tilesize;
            dest.y = y * tilesize + offset.getY();
            dest.w = tilesize;
            dest.h = tilesize;
            if (worldMap[x][y] != 0) {
                SDL_SetRenderDrawColor(renderer, 0, 0, 0, 25);
                SDL_RenderFillRect(renderer, &dest);
            } else {
                SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
                SDL_RenderFillRect(renderer, &dest);
            }
        }
    }
    SDL_Rect dest;
    dest.x = DISPLAY_WIDTH - offset.getX() - mapsize + (cam.position.getX()) * tilesize + psize / 2;
    dest.y = cam.position.getY() * tilesize + psize / 2 + offset.getY();
    dest.w = psize;
    dest.h = psize;
    SDL_SetRenderDrawColor(renderer, 0, 255, 0, 255);
    SDL_RenderFillRect(renderer, &dest);

    for (auto e: enemies) {
        dest.x = DISPLAY_WIDTH - offset.getX() - mapsize + (e.position.getX()) * tilesize + psize / 2;
        dest.y = e.position.getY() * tilesize + psize / 2 + offset.getY();
        dest.w = psize;
        dest.h = psize;
        SDL_SetRenderDrawColor(renderer, 255, 0, 0, 255);
        SDL_RenderFillRect(renderer, &dest);
    }

}   