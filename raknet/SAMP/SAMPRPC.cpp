#include "main.h"

// 0.3c
int RPC_ServerJoin = 98;
int RPC_ServerQuit = 99;
int RPC_InitGame = 100;
int RPC_ClientJoin = 92;
int RPC_NPCJoin = 93;
int RPC_Death = 106;
int RPC_RequestClass = 126;
int RPC_RequestSpawn = 127;
int RPC_SetInteriorId = 255;
int RPC_Spawn = 105;
int RPC_Chat = 125;
int RPC_EnterVehicle = 128;
int RPC_ExitVehicle = 129;
int RPC_DamageVehicle = 108;
int RPC_MenuSelect = 135;
int RPC_MenuQuit = 136;
int RPC_ScmEvent = 132;
int RPC_AdminMapTeleport = 255;
int RPC_WorldPlayerAdd = 101;
int RPC_WorldPlayerDeath = 107;
int RPC_WorldPlayerRemove = 102;
int RPC_WorldVehicleAdd = 103;
int RPC_WorldVehicleRemove = 104;
int RPC_SetCheckpoint = 255;
int RPC_DisableCheckpoint = 255;
int RPC_SetRaceCheckpoint = 255;
int RPC_DisableRaceCheckpoint = 255;
int RPC_UpdateScoresPingsIPs = 130;
int RPC_SvrStats = 255;
int RPC_GameModeRestart = 113;
int RPC_ConnectionRejected = 114;
int RPC_ClientMessage = 115;
int RPC_WorldTime = 255;
int RPC_Pickup = 255;
int RPC_DestroyPickup = 255;
int RPC_DestroyWeaponPickup = 255;
int RPC_Weather = 255;
int RPC_SetTimeEx = 255;
int RPC_ToggleClock = 255;
int RPC_ServerCommand = 94;
int RPC_PickedUpPickup = 255;
int RPC_PickedUpWeapon = 255;
int RPC_VehicleDestroyed = 97;
int RPC_DialogResponse = 150;

int RPC_ScrSetSpawnInfo = 255;
int RPC_ScrSetPlayerTeam = 255;
int RPC_ScrSetPlayerSkin = 255;
int RPC_ScrSetPlayerName = 255;
int RPC_ScrSetPlayerPos = 255;
int RPC_ScrSetPlayerPosFindZ = 255;
int RPC_ScrSetPlayerHealth = 255;
int RPC_ScrPutPlayerInVehicle = 255;
int RPC_ScrRemovePlayerFromVehicle = 255;
int RPC_ScrSetPlayerColor = 255;
int RPC_ScrDisplayGameText = 21;
int RPC_ScrSetInterior = 255;
int RPC_ScrSetCameraPos = 255;
int RPC_ScrSetCameraLookAt = 255;
int RPC_ScrSetVehiclePos = 255;
int RPC_ScrSetVehicleZAngle = 255;
int RPC_ScrVehicleParams = 255;
int RPC_ScrSetCameraBehindPlayer = 255;
int RPC_ScrTogglePlayerControllable = 255;
int RPC_ScrPlaySound = 255;
int RPC_ScrSetWorldBounds = 255;
int RPC_ScrHaveSomeMoney = 255;
int RPC_ScrSetPlayerFacingAngle = 255;
int RPC_ScrResetMoney = 255;
int RPC_ScrResetPlayerWeapons = 255;
int RPC_ScrGivePlayerWeapon = 255;
int RPC_ScrRespawnVehicle = 255;
int RPC_ScrLinkVehicle = 255;
int RPC_ScrSetPlayerArmour = 255;
int RPC_ScrDeathMessage = 255;
int RPC_ScrSetMapIcon = 255;
int RPC_ScrDisableMapIcon = 255;
int RPC_ScrSetWeaponAmmo = 255;
int RPC_ScrSetGravity = 255;
int RPC_ScrSetVehicleHealth = 255;
int RPC_ScrAttachTrailerToVehicle = 255;
int RPC_ScrDetachTrailerFromVehicle = 255;
int RPC_ScrCreateObject = 255;
int RPC_ScrSetObjectPos = 255;
int RPC_ScrSetObjectRotation = 255;
int RPC_ScrDestroyObject = 255;
int RPC_ScrCreateExplosion = 255;
int RPC_ScrShowNameTag = 255;
int RPC_ScrMoveObject = 255;
int RPC_ScrStopObject = 255;
int RPC_ScrNumberPlate = 255;
int RPC_ScrTogglePlayerSpectating = 255;
int RPC_ScrSetPlayerSpectating = 255;
int RPC_ScrPlayerSpectatePlayer = 255;
int RPC_ScrPlayerSpectateVehicle = 255;
int RPC_ScrRemoveComponent = 255;
int RPC_ScrForceSpawnSelection = 255;
int RPC_ScrAttachObjectToPlayer = 255;
int RPC_ScrInitMenu = 66;
int RPC_ScrShowMenu = 67;
int RPC_ScrHideMenu = 68;
int RPC_ScrSetPlayerWantedLevel = 255;
int RPC_ScrShowTextDraw = 255;
int RPC_ScrHideTextDraw = 255;
int RPC_ScrEditTextDraw = 255;
int RPC_ScrAddGangZone = 255;
int RPC_ScrRemoveGangZone = 255;
int RPC_ScrFlashGangZone = 255;
int RPC_ScrStopFlashGangZone = 255;
int RPC_ScrApplyAnimation = 255;
int RPC_ScrClearAnimations = 255;
int RPC_ScrSetSpecialAction = 255;
int RPC_ScrEnableStuntBonus = 255;
int RPC_ScrSetFightingStyle = 255;
int RPC_ScrSetPlayerVelocity = 255;
int RPC_ScrSetVehicleVelocity = 255;
int RPC_ScrToggleWidescreen = 255;
int RPC_ScrSetVehicleTireStatus = 255;
int RPC_ScrSetPlayerDrunkVisuals = 255;
int RPC_ScrSetPlayerDrunkHandling = 255;
int RPC_ScrDialogBox = 149;
int RPC_PlayerUpdate = 148;
