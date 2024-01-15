
// MFCPractice6Dlg.cpp: 구현 파일
//

#include "pch.h"
#include "framework.h"
#include "MFCPractice6.h"
#include "MFCPractice6Dlg.h"
#include "afxdialogex.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// 응용 프로그램 정보에 사용되는 CAboutDlg 대화 상자입니다.

class CAboutDlg : public CDialogEx
{
public:
	CAboutDlg();

// 대화 상자 데이터입니다.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_ABOUTBOX };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 지원입니다.

// 구현입니다.
protected:
	DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialogEx(IDD_ABOUTBOX)
{
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialogEx)
END_MESSAGE_MAP()


// CMFCPractice6Dlg 대화 상자



CMFCPractice6Dlg::CMFCPractice6Dlg(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_MFCPRACTICE6_DIALOG, pParent)
	//, m_dNum1(0)
	, m_dNum1(0)
	, m_dNum2(0)
	, m_strEmoji(_T(""))
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CMFCPractice6Dlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_LIST_RESULTS, m_listResults);

	DDX_Text(pDX, IDC_EDIT_NUM1, m_dNum1);
	//  DDX_Text(pDX, IDC_EDIT_EMOJI, m_dNum2);
	DDX_Text(pDX, IDC_EDIT_NUM2, m_dNum2);
	DDX_Text(pDX, IDC_EDIT_EMOJI, m_strEmoji);
}

BEGIN_MESSAGE_MAP(CMFCPractice6Dlg, CDialogEx)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDC_BUTTON_0, &CMFCPractice6Dlg::OnClickedButton0)
	ON_BN_CLICKED(IDC_BUTTON_1, &CMFCPractice6Dlg::OnClickedButton1)
	ON_BN_CLICKED(IDC_BUTTON_2, &CMFCPractice6Dlg::OnClickedButton2)
	ON_BN_CLICKED(IDC_BUTTON_3, &CMFCPractice6Dlg::OnClickedButton3)
	ON_BN_CLICKED(IDC_BUTTON_4, &CMFCPractice6Dlg::OnClickedButton4)
	ON_BN_CLICKED(IDC_BUTTON_5, &CMFCPractice6Dlg::OnClickedButton5)
	ON_BN_CLICKED(IDC_BUTTON_6, &CMFCPractice6Dlg::OnClickedButton6)
	ON_BN_CLICKED(IDC_BUTTON_7, &CMFCPractice6Dlg::OnClickedButton7)
	ON_BN_CLICKED(IDC_BUTTON_8, &CMFCPractice6Dlg::OnClickedButton8)
	ON_BN_CLICKED(IDC_BUTTON_9, &CMFCPractice6Dlg::OnClickedButton9)
	ON_COMMAND(IDC_RADIO1, &CMFCPractice6Dlg::OnRadio1)
	ON_COMMAND(IDC_RADIO2, &CMFCPractice6Dlg::OnRadio2)
	ON_BN_CLICKED(IDC_BUTTON_ADD, &CMFCPractice6Dlg::OnBnClickedButtonAdd)
	ON_BN_CLICKED(IDC_BUTTON_SUBTRACT, &CMFCPractice6Dlg::OnClickedButtonSubtract)
	ON_BN_CLICKED(IDC_BUTTON_DONE, &CMFCPractice6Dlg::OnBnClickedButtonDone)
	ON_BN_CLICKED(IDC_BUTTON_MULTIPLE, &CMFCPractice6Dlg::OnBnClickedButtonMultiple)
	ON_BN_CLICKED(IDC_BUTTON_DIVIDE, &CMFCPractice6Dlg::OnBnClickedButtonDivide)
	ON_BN_CLICKED(IDC_BUTTON_RESET, &CMFCPractice6Dlg::OnBnClickedButtonReset)
	ON_BN_CLICKED(IDC_BUTTON_ALLRESET, &CMFCPractice6Dlg::OnBnClickedButtonAllreset)
	ON_BN_CLICKED(IDC_BUTTON_BACK, &CMFCPractice6Dlg::OnBnClickedButtonBack)
	
	//ON_BN_CLICKED(IDC_BUTTON_COMMA, &CMFCPractice6Dlg::OnBnClickedButtonComma)
END_MESSAGE_MAP()


// CMFCPractice6Dlg 메시지 처리기

BOOL CMFCPractice6Dlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// 시스템 메뉴에 "정보..." 메뉴 항목을 추가합니다.

	// IDM_ABOUTBOX는 시스템 명령 범위에 있어야 합니다.
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != nullptr)
	{
		BOOL bNameValid;
		CString strAboutMenu;
		bNameValid = strAboutMenu.LoadString(IDS_ABOUTBOX);
		ASSERT(bNameValid);
		if (!strAboutMenu.IsEmpty())
		{
			pSysMenu->AppendMenu(MF_SEPARATOR);
			pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
		}
	}

	// 이 대화 상자의 아이콘을 설정합니다.  응용 프로그램의 주 창이 대화 상자가 아닐 경우에는
	//  프레임워크가 이 작업을 자동으로 수행합니다.
	SetIcon(m_hIcon, TRUE);			// 큰 아이콘을 설정합니다.
	SetIcon(m_hIcon, FALSE);		// 작은 아이콘을 설정합니다.

	// TODO: 여기에 추가 초기화 작업을 추가합니다.
	//m_dCalculate = 0.0;
	//m_nChecking = 0;
	m_dNum1 = 0.0;
	m_whatnum = 0;
	m_intOrdouble = 1;

	return TRUE;  // 포커스를 컨트롤에 설정하지 않으면 TRUE를 반환합니다.
}

void CMFCPractice6Dlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	}
	else
	{
		CDialogEx::OnSysCommand(nID, lParam);
	}
}

// 대화 상자에 최소화 단추를 추가할 경우 아이콘을 그리려면
//  아래 코드가 필요합니다.  문서/뷰 모델을 사용하는 MFC 애플리케이션의 경우에는
//  프레임워크에서 이 작업을 자동으로 수행합니다.

void CMFCPractice6Dlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // 그리기를 위한 디바이스 컨텍스트입니다.

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// 클라이언트 사각형에서 아이콘을 가운데에 맞춥니다.
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// 아이콘을 그립니다.
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialogEx::OnPaint();
	}
}

// 사용자가 최소화된 창을 끄는 동안에 커서가 표시되도록 시스템에서
//  이 함수를 호출합니다.
HCURSOR CMFCPractice6Dlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}


//숫자 업데이트
void CMFCPractice6Dlg::UpdateResult(int n) 
{
	// TODO: 여기에 구현 코드 추가.
	UpdateData(TRUE);
	if (m_whatnum == 1) {
		m_dNum1 *= 10;
		m_dNum1 += n;
		
	}
	else if (m_whatnum == 2) {
		m_dNum2 *= 10;
		m_dNum2 += n;
	}
	
	UpdateData(FALSE);
}

//숫자 업데이트
void CMFCPractice6Dlg::OnClickedButton0()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	UpdateResult(0);
}
void CMFCPractice6Dlg::OnClickedButton1()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	UpdateResult(1);
}
void CMFCPractice6Dlg::OnClickedButton2()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	UpdateResult(2);
}
void CMFCPractice6Dlg::OnClickedButton3()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	UpdateResult(3);
}
void CMFCPractice6Dlg::OnClickedButton4()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	UpdateResult(4);
}
void CMFCPractice6Dlg::OnClickedButton5()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	UpdateResult(5);
}
void CMFCPractice6Dlg::OnClickedButton6()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	UpdateResult(6);
}
void CMFCPractice6Dlg::OnClickedButton7()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	UpdateResult(7);
}
void CMFCPractice6Dlg::OnClickedButton8()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	UpdateResult(8);
}
void CMFCPractice6Dlg::OnClickedButton9()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	UpdateResult(9);
}

//입력칸 선택
void CMFCPractice6Dlg::OnRadio1()
{
	// TODO: 여기에 명령 처리기 코드를 추가합니다.
	m_whatnum = 1;
}
void CMFCPractice6Dlg::OnRadio2()
{
	// TODO: 여기에 명령 처리기 코드를 추가합니다.
	m_whatnum = 2;
}

//리스트 박스에 추가  -> = 누르면 사용됨
void CMFCPractice6Dlg::InsertList()
{
	// TODO: 여기에 구현 코드 추가.
	CString str;
	str.Format(_T("%.2lf %s %.2lf = %.2lf"), m_dNum1, m_strEmoji, m_dNum2,m_dResult);
	m_listResults.AddString(str);
	m_dNum1 = m_dResult;
	m_dNum2 = 0;
}

//연산자 버튼들
void CMFCPractice6Dlg::OnBnClickedButtonAdd()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	UpdateData(TRUE);
	m_strEmoji = _T("+");
	m_emojiCheck = 1;
	UpdateData(FALSE);
}


void CMFCPractice6Dlg::OnClickedButtonSubtract()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	UpdateData(TRUE);
	m_strEmoji = _T("-");
	m_emojiCheck = 2;
	UpdateData(FALSE);
}

void CMFCPractice6Dlg::OnBnClickedButtonMultiple()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	UpdateData(TRUE);
	m_strEmoji = _T("x");
	m_emojiCheck = 3;
	UpdateData(FALSE);
}

void CMFCPractice6Dlg::OnBnClickedButtonDivide()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	UpdateData(TRUE);
	m_strEmoji = _T("%");
	m_emojiCheck = 4;
	UpdateData(FALSE);
}



void CMFCPractice6Dlg::OnBnClickedButtonDone()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	//리스트 박스에 넣고 입력1칸에 업데이트하기
	UpdateData(TRUE);
	if (m_dNum1 != 0 && m_dNum2 != 0) {
		switch (m_emojiCheck) {
		case 1://+
			m_dResult = m_dNum1 + m_dNum2;
			break;
		case 2://-
			m_dResult = m_dNum1 - m_dNum2;
			break;
		case 3://-
			m_dResult = m_dNum1 * m_dNum2;
			break;
		case 4://-
			m_dResult = m_dNum1 / m_dNum2;
			break;
		}
		InsertList();
	}
	else {
		AfxMessageBox(_T("숫자를 입력하세요"));
	}
	UpdateData(FALSE);
}



void CMFCPractice6Dlg::OnBnClickedButtonReset()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	UpdateData(TRUE);
	m_dNum1 = 0;
	m_dNum2 = 0;
	
	UpdateData(FALSE);
}


void CMFCPractice6Dlg::OnBnClickedButtonAllreset()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	if (m_listResults.GetCount() != 0) {
		m_listResults.ResetContent();
	}
	else {
		AfxMessageBox(_T("초기화할 내용이 없습니다"));
	}
}


void CMFCPractice6Dlg::OnBnClickedButtonBack()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	UpdateData(TRUE);
	if (m_whatnum == 1) {
		m_dNum1 = (int)m_dNum1 / 10;
	}
	else {
		m_dNum2 = (int)m_dNum2 / 10;
	}
	UpdateData(FALSE);
}
