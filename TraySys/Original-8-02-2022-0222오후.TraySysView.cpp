
// TraySysView.cpp : CTraySysView 클래스의 구현
//

#include "stdafx.h"
// SHARED_HANDLERS는 미리 보기, 축소판 그림 및 검색 필터 처리기를 구현하는 ATL 프로젝트에서 정의할 수 있으며
// 해당 프로젝트와 문서 코드를 공유하도록 해 줍니다.
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

// CTraySysView 생성/소멸

CTraySysView::CTraySysView()
	: CFormView(CTraySysView::IDD)
{
	// TODO: 여기에 생성 코드를 추가합니다.

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
	// TODO: CREATESTRUCT cs를 수정하여 여기에서
	//  Window 클래스 또는 스타일을 수정합니다.

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


// CTraySysView 진단

#ifdef _DEBUG
void CTraySysView::AssertValid() const
{
	CFormView::AssertValid();
}

void CTraySysView::Dump(CDumpContext& dc) const
{
	CFormView::Dump(dc);
}

CTraySysDoc* CTraySysView::GetDocument() const // 디버그되지 않은 버전은 인라인으로 지정됩니다.
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CTraySysDoc)));
	return (CTraySysDoc*)m_pDocument;
}
#endif //_DEBUG


// CTraySysView 메시지 처리기
