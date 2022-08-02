
// TraySysView.h : CTraySysView Ŭ������ �������̽�
//

#pragma once

#include "resource.h"



class CTraySysView : public CFormView
{
protected: // serialization������ ��������ϴ�.
	CTraySysView();
	DECLARE_DYNCREATE(CTraySysView)

public:
	enum{ IDD = IDD_TRAYSYS_FORM };

// Ư���Դϴ�.
public:
	CTraySysDoc* GetDocument() const;

// �۾��Դϴ�.
public:

// �������Դϴ�.
public:
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV �����Դϴ�.
	virtual void OnInitialUpdate(); // ���� �� ó�� ȣ��Ǿ����ϴ�.

// �����Դϴ�.
public:
	virtual ~CTraySysView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ������ �޽��� �� �Լ�
protected:
	afx_msg void OnFilePrintPreview();
	afx_msg void OnRButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnContextMenu(CWnd* pWnd, CPoint point);
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // TraySysView.cpp�� ����� ����
inline CTraySysDoc* CTraySysView::GetDocument() const
   { return reinterpret_cast<CTraySysDoc*>(m_pDocument); }
#endif

