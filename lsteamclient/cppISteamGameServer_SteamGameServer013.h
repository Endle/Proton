extern bool cppISteamGameServer_SteamGameServer013_InitGameServer(void *, uint32, uint16, uint16, uint32, AppId_t, const char *);
extern void cppISteamGameServer_SteamGameServer013_SetProduct(void *, const char *);
extern void cppISteamGameServer_SteamGameServer013_SetGameDescription(void *, const char *);
extern void cppISteamGameServer_SteamGameServer013_SetModDir(void *, const char *);
extern void cppISteamGameServer_SteamGameServer013_SetDedicatedServer(void *, bool);
extern void cppISteamGameServer_SteamGameServer013_LogOn(void *, const char *);
extern void cppISteamGameServer_SteamGameServer013_LogOnAnonymous(void *);
extern void cppISteamGameServer_SteamGameServer013_LogOff(void *);
extern bool cppISteamGameServer_SteamGameServer013_BLoggedOn(void *);
extern bool cppISteamGameServer_SteamGameServer013_BSecure(void *);
extern CSteamID cppISteamGameServer_SteamGameServer013_GetSteamID(void *);
extern bool cppISteamGameServer_SteamGameServer013_WasRestartRequested(void *);
extern void cppISteamGameServer_SteamGameServer013_SetMaxPlayerCount(void *, int);
extern void cppISteamGameServer_SteamGameServer013_SetBotPlayerCount(void *, int);
extern void cppISteamGameServer_SteamGameServer013_SetServerName(void *, const char *);
extern void cppISteamGameServer_SteamGameServer013_SetMapName(void *, const char *);
extern void cppISteamGameServer_SteamGameServer013_SetPasswordProtected(void *, bool);
extern void cppISteamGameServer_SteamGameServer013_SetSpectatorPort(void *, uint16);
extern void cppISteamGameServer_SteamGameServer013_SetSpectatorServerName(void *, const char *);
extern void cppISteamGameServer_SteamGameServer013_ClearAllKeyValues(void *);
extern void cppISteamGameServer_SteamGameServer013_SetKeyValue(void *, const char *, const char *);
extern void cppISteamGameServer_SteamGameServer013_SetGameTags(void *, const char *);
extern void cppISteamGameServer_SteamGameServer013_SetGameData(void *, const char *);
extern void cppISteamGameServer_SteamGameServer013_SetRegion(void *, const char *);
extern bool cppISteamGameServer_SteamGameServer013_SendUserConnectAndAuthenticate(void *, uint32, const void *, uint32, CSteamID *);
extern CSteamID cppISteamGameServer_SteamGameServer013_CreateUnauthenticatedUserConnection(void *);
extern void cppISteamGameServer_SteamGameServer013_SendUserDisconnect(void *, CSteamID);
extern bool cppISteamGameServer_SteamGameServer013_BUpdateUserData(void *, CSteamID, const char *, uint32);
extern HAuthTicket cppISteamGameServer_SteamGameServer013_GetAuthSessionTicket(void *, void *, int, uint32 *);
extern EBeginAuthSessionResult cppISteamGameServer_SteamGameServer013_BeginAuthSession(void *, const void *, int, CSteamID);
extern void cppISteamGameServer_SteamGameServer013_EndAuthSession(void *, CSteamID);
extern void cppISteamGameServer_SteamGameServer013_CancelAuthTicket(void *, HAuthTicket);
extern EUserHasLicenseForAppResult cppISteamGameServer_SteamGameServer013_UserHasLicenseForApp(void *, CSteamID, AppId_t);
extern bool cppISteamGameServer_SteamGameServer013_RequestUserGroupStatus(void *, CSteamID, CSteamID);
extern void cppISteamGameServer_SteamGameServer013_GetGameplayStats(void *);
extern SteamAPICall_t cppISteamGameServer_SteamGameServer013_GetServerReputation(void *);
extern SteamIPAddress_t cppISteamGameServer_SteamGameServer013_GetPublicIP(void *);
extern bool cppISteamGameServer_SteamGameServer013_HandleIncomingPacket(void *, const void *, int, uint32, uint16);
extern int cppISteamGameServer_SteamGameServer013_GetNextOutgoingPacket(void *, void *, int, uint32 *, uint16 *);
extern void cppISteamGameServer_SteamGameServer013_EnableHeartbeats(void *, bool);
extern void cppISteamGameServer_SteamGameServer013_SetHeartbeatInterval(void *, int);
extern void cppISteamGameServer_SteamGameServer013_ForceHeartbeat(void *);
extern SteamAPICall_t cppISteamGameServer_SteamGameServer013_AssociateWithClan(void *, CSteamID);
extern SteamAPICall_t cppISteamGameServer_SteamGameServer013_ComputeNewPlayerCompatibility(void *, CSteamID);
