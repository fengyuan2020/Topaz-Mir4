#pragma once
#include "CoreMinimal.h"
#include "EFSM_TYPE.generated.h"

UENUM(BlueprintType)
enum class EFSM_TYPE : uint8 {
    EFSM_NONE,
    EFSM_INIT,
    EFSM_IDLE,
    EFSM_WALK,
    EFSM_MOVE,
    EFSM_ATTACK,
    EFSM_DIE,
    EFSM_TRACE,
    EFSM_RUNAWAY,
    EFSM_ROLL,
    EFSM_RIDE,
    EFSM_NORMAL_ATTACK,
    EFSM_SKILL,
    EFSM_AIRWALK,
    EFSM_GATHER,
    EFSM_HIT,
    EFSM_STUN,
    EFSM_TAUNT,
    EFSM_LAPIDFICATION,
    EFSM_PUSHPULL,
    EFSM_CLIFFMOVE,
    EFSM_TURN,
    EFSM_SLEEP,
    EFSM_AWAKE,
    EFSM_WARP,
    EFSM_EMOTION,
    EFSM_COMEBACK,
    EFSM_AUTOAIRWALK,
    EFSM_CCSLEEP,
    EFSM_AUTOMOVE,
    EFSM_CHANGEPOS,
    EFSM_EMOTE,
};

