/*
 * Copyright (C) 2011-2016 StealthCore <http://www.stealthcoders.net/>
 *
 * A Private Project by StealthCoders. Emulator Codename: StealthCore [SC]
 *
 * Do not Share this Source. All contributors from [SC] StealthCoders, shouldn't remove any 
 * Copyright Text or notice.
 *
 */

#ifndef __BATTLEGROUNDRL_H
#define __BATTLEGROUNDRL_H

#include "Battleground.h"

enum BattlegroundRLObjectTypes
{
    BG_RL_OBJECT_DOOR_1         = 0,
    BG_RL_OBJECT_DOOR_2         = 1,
    BG_RL_OBJECT_BUFF_1         = 2,
    BG_RL_OBJECT_BUFF_2         = 3,
	BG_RL_OBJECT_READY_MARKER_1 = 4,
	BG_RL_OBJECT_READY_MARKER_2 = 5,
    BG_RL_OBJECT_MAX            = 6
};

enum BattlegroundRLObjects
{
    BG_RL_OBJECT_TYPE_DOOR_1    = 185918,
    BG_RL_OBJECT_TYPE_DOOR_2    = 185917,
    BG_RL_OBJECT_TYPE_BUFF_1    = 184663,
    BG_RL_OBJECT_TYPE_BUFF_2    = 184664
};

class BattlegroundRL : public Battleground
{
    public:
        BattlegroundRL();
        ~BattlegroundRL();

        /* inherited from BattlegroundClass */
        void AddPlayer(Player* player);
        void Init();
        void FillInitialWorldStates(WorldPacket &d);
        void StartingEventCloseDoors();
        void StartingEventOpenDoors();

        void RemovePlayer(Player* player);
        void HandleAreaTrigger(Player* player, uint32 trigger);
        bool SetupBattleground();
        void HandleKillPlayer(Player* player, Player* killer);
        bool HandlePlayerUnderMap(Player* player);
};
#endif
