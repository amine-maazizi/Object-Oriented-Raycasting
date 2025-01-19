#include <engine/camera.hpp>


Camera::Camera()
    : position(22, 11.5),              
      direction(-1, 0),         
      plane(0, 0.66),               
      moveSpeed(0.05),              
      rotSpeed(0.04) {} 


void Camera::move(int worldMap[MAP_HEIGHT][MAP_WIDTH]) {
     const Uint8* keystate = SDL_GetKeyboardState(NULL);

    if (keystate[SDL_SCANCODE_W] || keystate[SDL_SCANCODE_UP]) {
        Vector2D<double> nextPosition = position + direction * moveSpeed;
        if (worldMap[int(nextPosition.getX())][int(position.getY())] == 0) {
            position.setX(nextPosition.getX());
        }
        if (worldMap[int(position.getX())][int(nextPosition.getY())] == 0) {
            position.setY(nextPosition.getY());
        }
    }

    if (keystate[SDL_SCANCODE_S] || keystate[SDL_SCANCODE_DOWN]) {
        Vector2D<double> nextPosition = position - direction * moveSpeed;
        if (worldMap[int(nextPosition.getX())][int(position.getY())] == 0) {
            position.setX(nextPosition.getX());
        }
        if (worldMap[int(position.getX())][int(nextPosition.getY())] == 0) {
            position.setY(nextPosition.getY());
        }
    }

    if (keystate[SDL_SCANCODE_D] || keystate[SDL_SCANCODE_RIGHT]) {
        double cosRot = cos(-rotSpeed);
        double sinRot = sin(-rotSpeed);

        double newDirX = direction.getX() * cosRot - direction.getY() * sinRot;
        double newDirY = direction.getX() * sinRot + direction.getY() * cosRot;
        direction.setX(newDirX);
        direction.setY(newDirY);

        double newPlaneX = plane.getX() * cosRot - plane.getY() * sinRot;
        double newPlaneY = plane.getX() * sinRot + plane.getY() * cosRot;
        plane.setX(newPlaneX);
        plane.setY(newPlaneY);
    }

    if (keystate[SDL_SCANCODE_A] || keystate[SDL_SCANCODE_LEFT]) {
        double cosRot = cos(rotSpeed);
        double sinRot = sin(rotSpeed);

        double newDirX = direction.getX() * cosRot - direction.getY() * sinRot;
        double newDirY = direction.getX() * sinRot + direction.getY() * cosRot;
        direction.setX(newDirX);
        direction.setY(newDirY);

        double newPlaneX = plane.getX() * cosRot - plane.getY() * sinRot;
        double newPlaneY = plane.getX() * sinRot + plane.getY() * cosRot;
        plane.setX(newPlaneX);
        plane.setY(newPlaneY);
    }

    // Sprinting
    if (keystate[SDL_SCANCODE_LSHIFT] || keystate[SDL_SCANCODE_SPACE]) {
        moveSpeed = BASE_MOVE_SPEED * 2.0; // Increase movement speed for sprinting
    } else {
        moveSpeed = BASE_MOVE_SPEED; // Reset to normal speed when not sprinting
    }
}
