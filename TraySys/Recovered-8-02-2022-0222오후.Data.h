#pragma once


// CData

class CData : public CWnd
{
	DECLARE_DYNAMIC(CData)


	typedef struct tray
	{
		CString strID;
		int nStatus;
	}ENTRAY;

	typedef struct slot
	{
		CString name;
		int nIndex;
		bool bFull;
		ENTRAY tray;
	}ENSLOT;

public:
	CData();
	virtual ~CData();

	// slot�� ������ �迭�� private �����̹Ƿ� ���� return �ް�(get), �Ҵ�(set)�ϴ� �Լ��� ����.
	CString getSlotName(int index);
	CString setSlotName(int index, CString name);
	int getSlotNIndex(int index);
	int setSlotNIndex(int index, int nIndex);
	bool getSlotBFull(int index);
	bool setSlotBFull(int index, bool bFull);
	CString getSlotTrayID(int index);
	CString setSlotTrayID(int index, CString strID);
	int getSlotTrayStatus(int index);
	int setSlotTrayStatus(int index, int nStatus);
	
	int getGSlot();	// g_slot�� �ε����� ��ȯ                                                                      mnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmn 
	void setGSlot(int index);


	void loadData();
	void saveData();
private:
	ENSLOT slot[4];
	ENSLOT g_slot;	// ���õ� ����

protected:
	DECLARE_MESSAGE_MAP()
};


