#include <iostream>
#include "ClassGames.h"
#include "ClassVGames.h"
#include "ClassVShooters.h"
#include "ClassVSOW.h"
#include "ClassVSPUBG.h"
#include "ClassVPlot.h"
#include "ClassVPWD.h"
#include "ClassVPRDR.h"
#include <gtest.h>


TEST(TGames, can_create_games_with_positive_count)
{
  ASSERT_NO_THROW(TGames bf(3, ""));
}

TEST(TGames, can_get_count)
{
  TGames bf(3, "");

  EXPECT_NEAR(3, bf.GetCount(), 0.000001);
}


TEST(TGames, can_set_count)
{
  TGames bf(10, "");

  bf.SetCount();
  EXPECT_NE(0, bf.GetCount());
}

///test
TEST(TGames, throws_when_create_game_with_negative_count)
{
  ASSERT_ANY_THROW(TGames bf(-3, ""));
}


