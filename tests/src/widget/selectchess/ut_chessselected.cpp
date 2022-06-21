/*
   * Copyright (C) 2019 ~ 2020 Uniontech Software Technology Co.,Ltd.
   *
   * Author:     zhengxiaokang <zhengxiaokang@uniontech.com>
   *
   * Maintainer: zhengxiaokang <zhengxiaokang@uniontech.com>
   *
   * This program is free software: you can redistribute it and/or modify
   * it under the terms of the GNU General Public License as published by
   * the Free Software Foundation, either version 3 of the License, or
   * any later version.
   *
   * This program is distributed in the hope that it will be useful,
   * but WITHOUT ANY WARRANTY; without even the implied warranty of
   * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   * GNU General Public License for more details.
   *
   * You should have received a copy of the GNU General Public License
   * along with this program.  If not, see <http://www.gnu.org/licenses/>.
   */
#include "ut_chessselected.h"
#include <QPaintEvent>

TEST_F(UT_ChessSelected, UT_ChessSelected_paintEvent1)
{
    QRect rect;
    QPaintEvent event(rect);
    m_ChessSelected->mChessColor = 1;
    m_ChessSelected->paintEvent(&event);
}

TEST_F(UT_ChessSelected, UT_ChessSelected_paintEvent2)
{
    QRect rect;
    QPaintEvent event(rect);
    m_ChessSelected->mChessColor = 2;
    m_ChessSelected->paintEvent(&event);
}