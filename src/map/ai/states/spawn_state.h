/*
===========================================================================

Copyright (c) 2010-2015 Darkstar Dev Teams

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

#ifndef _CSPAWN_STATE_H
#define _CSPAWN_STATE_H

#include "state.h"

class CSpawnState : public CState
{
public:
    CSpawnState(CBaseEntity* PEntity);
    CSpawnState(CBaseEntity* PEntity, duration spawnTime);
    virtual bool Update(time_point tick) override;
    virtual void Cleanup(time_point tick) override;
    virtual bool CanChangeState() override;
private:
    duration m_spawnTime;
};

#endif
