#pragma once

#include <vector>

#define ChaiScriptMenuStartId 5001
#define MaxChaiScripts 99

class CDittoChaiScriptXmlItem
{
public:
	CDittoChaiScriptXmlItem()
	{
		m_active = FALSE;
	}
	BOOL m_active;
	CString m_name;
	CString m_description;
	CString m_script;
};

class CChaiScriptXml
{
public:
	CChaiScriptXml();
	~CChaiScriptXml();

	CString Save();
	void Load(CString values);

	CString GetScript(CString name, BOOL &active);

	std::vector<CDittoChaiScriptXmlItem> m_list;

	void AddToMenu(CMenu *pMenu);
};