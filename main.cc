#include "player.h"
#include "opponent.h"
#include "game.h"
#include "game_element.h"

int main() {
  // graphics::Image test;
  // test.Load("test0.bmp");
  // test.ShowUntilClosed();
  Game gameO;
  gameO.Init();
  gameO.Start();


  // graphics::Image test;
  // test.Load("Talk1.bmp");
  // test.ShowUntilClosed();
  // gameO.CreateOpponents();
  // gameO.CreateOpponents();
  // gameO.CreateOpponents();
  // gameO.CreateOpponents();
  // for (size_t i = 0; i < gameO.GetOpponents().size(); i++) {
  //   if (gameO.GetOpponents().at(i)->GetIsActive()) {
  //     std::cout << i << ' ';
  //     if (i == 2) gameO.GetOpponents().at(i)->SetIsActive(false);
  //   }
  // }
  // for (size_t i = 0; i < gameO.GetOpponents().size(); i++) {
  //   if (!(gameO.GetOpponents().at(i)->GetIsActive())) {
  //     gameO.GetOpponents().erase(gameO.GetOpponents().begin() + i,gameO.GetOpponents().begin() + i + 1 );
  //   }
  // }
  // gameO.RemoveInactive();
  // for (size_t i = 0; i < gameO.GetOpponents().size(); i++) {
  //     std::cout << i << ' ';
  //   }
}
