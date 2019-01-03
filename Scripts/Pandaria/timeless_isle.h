/*
 * Copyright (C) 2017-2019 Project Darkspear <https://github.com/Hymn-WoW/Project-Darkspear>
 * Copyright (C) 2016 Firestorm Servers <https://firestorm-servers.com>
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the
 * Free Software Foundation; either version 2 of the License, or (at your
 * option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program. If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef TIMELESS_ISLE_H
#define TIMELESS_ISLE_H

enum eQuests
{
    QUEST_TIME_KEEPER_KAIROZ_H       = 33156,
    QUEST_TIME_KEEPER_KAIROZ_A       = 33160
};

enum eCreatures
{
    NPC_PRINCE_ANDUIN       = 73061,
    NPC_KAIROZ              = 72870
};

enum eActions
{
    ACTION_PRINCE_TALK_1      = 1,
    ACTION_PRINCE_TALK_2      = 2,
    ACTION_PRINCE_TALK_3      = 3,
    ACTION_PRINCE_TALK_4      = 4,
    ACTION_PRINCE_TALK_5      = 5,
    ACTION_KAIROZ_TALK_1      = 6,
    ACTION_KAIROZ_TALK_2      = 7,
    ACTION_KAIROZ_TALK_3      = 8,
    ACTION_KAIROZ_TALK_4      = 9,
    ACTION_KAIROZ_TALK_5      = 10,
    ACTION_CONVERSATION       = 11
};

enum eEvents
{
    EVENT_PRINCE_TALK_1    = 1,
    EVENT_PRINCE_TALK_2    = 2,
    EVENT_PRINCE_TALK_3    = 3,
    EVENT_PRINCE_TALK_4    = 4,
    EVENT_PRINCE_TALK_5    = 5,
    EVENT_KAIROZ_TALK_1    = 6,
    EVENT_KAIROZ_TALK_2    = 7,
    EVENT_KAIROZ_TALK_3    = 8,
    EVENT_KAIROZ_TALK_4    = 9,
    EVENT_KAIROZ_TALK_5    = 10
};

#endif
