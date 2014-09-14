/*
===========================================================================

  Copyright (c) 2010-2014 Darkstar Dev Teams

  This program is free software: you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation, either version 3 of the License, or
  (at your option) any later version.

  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with this program.  If not, see http://www.gnu.org/licenses/

  This file is part of DarkStar-server source code.

===========================================================================
*/

#include "../../common/socket.h"

#include "change_music.h"

CChangeMusicPacket::CChangeMusicPacket(uint8 BlockID, uint32 MusicTrackID)
{
    // Block IDs:
    // 0 Background Music
    // 1 Alternate Background Music (SummerFest etc?)
    // 2 SoloBattle Music
    // 3 Party Battle Music
    // 4 Chocobo Music

    this->type = 0x5F;
    this->size = 0x04;

    WBUFB(data,(0x04)-4) = BlockID;        // block
    WBUFB(data,(0x06)-4) = MusicTrackID;   // music
}