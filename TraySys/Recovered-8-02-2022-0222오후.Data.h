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

	// slot을 저장할 배열이 private 변수이므로 값을 return 받고(get), 할당(set)하는 함수를 만듦.
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
	
	int getGSlot();	// g_slot의 인덱스를 반환                                                                      mnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmnmn 
	void setGSlot(int index);


	void loadData();
	void saveData();
private:
	ENSLOT slot[4];
	ENSLOT g_slot;	// 선택된 슬롯

protected:
	DECLARE_MESSAGE_MAP()
};


