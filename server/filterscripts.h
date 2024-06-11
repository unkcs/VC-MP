
#ifndef VCMPSRV_FILTERSCRIPTS_H
#define VCMPSRV_FILTERSCRIPTS_H

class CFilterScripts
{
private:
	AMX* m_pFilterScripts[MAX_FILTER_SCRIPTS];
	int m_iFilterScriptCount;
	CScriptTimers* m_pScriptTimers;
public:
	CFilterScripts();

	bool LoadFilterScript(char* pFileName);

	int OnPlayerPrivmsg(cell playerid, cell toplayerid, unsigned char* szText);
	int OnPlayerTeamPrivmsg(cell playerid, unsigned char* szText);
	int OnPlayerConnect(cell playerid);
	int OnPlayerVersion(cell playerid, cell version);
	int OnPlayerDisconnect(cell playerid, cell reason);
	int OnPlayerSpawn(cell playerid, cell classid, cell teamid);
	int OnPlayerDeath(cell playerid, cell killerid, cell reason, cell bodypart);
};

#endif // VCMPSRV_FILTERSCRIPTS_H
