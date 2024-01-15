
// MFCPractice6Dlg.h: 헤더 파일
//

#pragma once


// CMFCPractice6Dlg 대화 상자
class CMFCPractice6Dlg : public CDialogEx
{
// 생성입니다.
public:
	CMFCPractice6Dlg(CWnd* pParent = nullptr);	// 표준 생성자입니다.

// 대화 상자 데이터입니다.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_MFCPRACTICE6_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 지원입니다.


// 구현입니다.
protected:
	HICON m_hIcon;

	// 생성된 메시지 맵 함수
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	CListBox m_listResults;
	//double m_dNum1;
	void UpdateResult(int n);
	afx_msg void OnClickedButton0();
	afx_msg void OnClickedButton1();
	afx_msg void OnClickedButton2();
	afx_msg void OnClickedButton3();
	afx_msg void OnClickedButton4();
	afx_msg void OnClickedButton5();
	afx_msg void OnClickedButton6();
	afx_msg void OnClickedButton7();
	afx_msg void OnClickedButton8();
	afx_msg void OnClickedButton9();
	double m_dNum1;
	double m_dNum2;
	CString m_strEmoji;
	int m_whatnum;
	afx_msg void OnRadio1();
	afx_msg void OnRadio2();
	afx_msg void OnBnClickedButtonAdd();
	void InsertList();
	afx_msg void OnClickedButtonSubtract();
	double m_dResult;
	afx_msg void OnBnClickedButtonDone();
	int m_emojiCheck;
	afx_msg void OnBnClickedButtonMultiple();
	afx_msg void OnBnClickedButtonDivide();
	afx_msg void OnBnClickedButtonReset();
	afx_msg void OnBnClickedButtonAllreset();
	afx_msg void OnBnClickedButtonBack();
	
	//afx_msg void OnBnClickedButtonComma();
	int m_intOrdouble;
};
