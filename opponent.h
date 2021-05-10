#ifndef OPPONENT_H
#define OPPONENT_H

#include "cpputils/graphics/image.h"
#include "game_element.h"
#include <stdlib.h>
#include <time.h>


class OpponentProjectile : public GameElement {
 public:
  OpponentProjectile() : GameElement(0, 0, 15, 15) {}
  OpponentProjectile(const int &x, const int &y) : GameElement(x, y, 15, 15) {}

  void Draw(graphics::Image &background) override;
  void Move(const graphics::Image &gameScreen) override;
};

class Opponent : public GameElement {
 public:
  Opponent() : GameElement(0, 0, 45, 45) {}
  Opponent(const int &x, const int &y) : GameElement(x, y, 40, 40), count(0) {}


  void Draw(graphics::Image &background) override;
  void Move(const graphics::Image &gameScreen) override;

  std::unique_ptr<OpponentProjectile> LaunchProjectile() {
    if (count == 35) {
      std::unique_ptr<OpponentProjectile> oshot = std::make_unique<OpponentProjectile>(GetX() + (GetWidth()/2), GetY() + GetHeight());
      count = 0;
      return std::move(oshot);
    } else {
      count++;
      return nullptr;
    }
  }
  private:
    int x_rate_ = rand() % 10 + 10 / 2;
    int y_rate_ = rand() % 10 + 10 / 2;
    int count, frame = 0;
};

class Decor : public GameElement {
  public:
    Decor() : GameElement(0,0,0,0) {}
    Decor(const int &x, const int &y) : GameElement(x, y, 0, 0) {}
    void Draw(graphics::Image &background) {
      Helper(background, playerTalkFrames[frame].get(), 0, 400);
      frame == 4 ? frame = 0 : frame++;
    }
    void Move(const graphics::Image &gameScreen) {}
  private:
    int frame = 0;
};


#endif
