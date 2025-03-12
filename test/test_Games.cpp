#include <iostream>
#include "ClassGames.h"
#include "ClassVGames.h"
#include "ClassVShooters.h"
#include "ClassVSOW.h"
#include "ClassVSPUBG.h"
#include "ClassVPlot.h"
#include "ClassVPWD.h"
#include "ClassVPRDR.h"
#include "ClassSGames.h"
#include "ClassSSummer.h"
#include "ClassSWinter.h"
#include "ClassSWCurling.h"
#include "ClassSWHockey.h"
#include "ClassSSFootball.h"
#include "ClassSSVoleyball.h"
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

TEST(TVGames, throws_when_create_game_with_negative_count)
{
  ASSERT_ANY_THROW(TGames bf(-3, ""));
}


///TVGames

TEST(TVGames, can_create_vgames_with_positive_count)
{
  ASSERT_NO_THROW(TVGames bf("", "", 3));
}

TEST(TVGames, can_get_face)
{
  TVGames bf("", "", 3);

  EXPECT_NEAR(3, bf.GetFace(), 0.000001);
}

TEST(TVGames, throws_when_create_vgame_with_negative_face)
{
  ASSERT_ANY_THROW( TVGames bf("", "", -3));
}

///TVPWatchDogs

TEST(TVPWatchDogs, can_create_TVPWatchDogs_with_positive_chapter)
{
  ASSERT_NO_THROW(TVPWatchDogs bf(3));
}

TEST(TVPWatchDogs, can_get_chapter)
{
  TVPWatchDogs bf(3);

  EXPECT_NEAR(3, bf.GetChapter(), 0.000001);
}

TEST(TVPWatchDogs, throws_when_create_TVPWatchDogs_with_negative_chapter)
{
  ASSERT_ANY_THROW(TVPWatchDogs bf(-3));
}

///TSWCurling

TEST(TSWCurling, can_create_TSWCurling_with_positive_lenght)
{
  ASSERT_NO_THROW(TSWCurling bf(3));
}

TEST(TSWCurling, can_get_lenght)
{
  TSWCurling bf(3);

  EXPECT_NEAR(3, bf.GetLenght(), 0.000001);
}

TEST(TSWCurling, throws_when_create_TSWCurling_with_negative_lenght)
{
  ASSERT_ANY_THROW(TSWCurling bf(-3));
}
