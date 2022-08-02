
// TraySysView.cpp : CTraySysView Ŭ������ ����
//

#include "stdafx.h"
// SHARED_HANDLERS�� �̸� ����, ����� �׸� �� �˻� ���� ó���⸦ �����ϴ� ATL ������Ʈ���� ������ �� ������
// �ش� ������Ʈ�� ���� �ڵ带 �����ϵ��� �� �ݴϴ�.
#ifndef SHARED_HANDLERS
#include "TraySys.h"
#endif

#include "MainFrm.h"
#include "TraySysDoc.h"
#include "TraySysView.h"


#include "RFIDView.h"
#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CTraySysView

IMPLEMENT_DYNCREATE(CTraySysView, CFormView)

BEGIN_MESSAGE_MAP(CTraySysView, CFormView)
	ON_WM_CONTEXTMENU()
	ON_WM_RBUTTONUP()
END_MESSAGE_MAP()

// CTraySysView ����/�Ҹ�

CTraySysView::CTraySysView()
	: CFormView(CTraySysView::IDD)
{
	// TODO: ���⿡ ���� �ڵ带 �߰��մϴ�.

}

CTraySysView::~CTraySysView()
{
}

void CTraySysView::DoDataExchange(CDataExchange* pDX)
{
	CFormView::DoDataExchange(pDX);
}

BOOL CTraySysView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: CREATESTRUCT cs�� �����Ͽ� ���⿡��
	//  Window Ŭ���� �Ǵ� ��Ÿ���� �����մϴ�.

	return CFormView::PreCreateWindow(cs);
}

void CTraySysView::OnInitialUpdate()
{
	CFormView::OnInitialUpdate();
	GetParentFrame()->RecalcLayout();
	ResizeParentToFit();

	CTraySysDoc* doc = (CTraySysDoc*)GetDocument();
	getMainFrame()->CreateFormView(doc);
}

void CTraySysView::OnRButtonUp(UINT /* nFlags */, CPoint point)
{
	ClientToScreen(&point);
	OnContextMenu(this, point);
}

void CTraySysView::OnContextMenu(CWnd* /* pWnd */, CPoint point)
{
#ifndef SHARED_HANDLERS
	theApp.GetContextMenuManager()->ShowPopupMenu(IDR_POPUP_EDIT, point.x, point.y, this, TRUE);
#endif
}


// CTraySysView ����

#ifdef _DEBUG
void CTraySysView::AssertValid() const
{
	CFormView::AssertValid();
}

void CTraySysView::Dump(CDumpContext& dc) const
{
	CFormView::Dump(dc);
}

CTraySysDoc* CTraySysView::GetDocument() const // ����׵��� ���� ������ �ζ������� �����˴ϴ�.
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CTraySysDoc)));
	return (CTraySysDoc*)m_pDocument;
}
#endif //_DEBUG


// CTraySysView �޽��� ó����
