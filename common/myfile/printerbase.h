#ifndef  _PRINTERBASE_H_
#define  _PRINTERBASE_H_

#include "Winspool.h"

class CPrinterBase
{
public:
	CPrinterBase();
	~CPrinterBase();

	HANDLE OnOpenPrinter(LPSTR szPrinterName = "");
	inline HANDLE    GetPrinterHandle(){return m_hPrinter;};
	inline void      SetPrinterHandle(HANDLE hInHandle){m_hPrinter = hInHandle;};

	
	inline void      SetPrinterName(CString strPrinterName){m_szPrinterName = strPrinterName;}

	inline CString   GetPortName(){return m_szPortName;}
	inline void      SetPortName(CString strPortName){m_szPortName = strPortName;}

	DEVMODE*         GetDevMode(HANDLE hPrinter);
	CString          GetPrinterName(HANDLE hPrinter);
	

	int              GetDevStatus();
	BOOL             IsPrinterError(HANDLE hPrinter);
	int              GetPtrinterResolution(WORD &wXResolution,WORD &wYResolution);//�ֱ���
	void             EjectPaper();
	void             FlushPrinterData();

	int              ExeEpsonCommand(PBYTE pByte,DWORD cbBuf);///�ú��������ӡ�������� �� esc j n �ȡ�
	int              PrinterRawData (const PBYTE pByte,const DWORD cbBuf);//��ӡraw data
	void             SetPrinterStartPosition();//���ô�ӡ����ʼ��
	void             SetPrinterAbsolutePosition(DWORD xPos,DWORD yPos);//���ô�ӡ���Ĵ�ӡλ��
	void             MovePrinterPosition(DWORD xPos,DWORD yPos);//�ƶ� ��ӡͷ

	int              GetPaperWidthAndHeight(CSize &sizePaper);// are in tenths of a millimeter 


	/*this function convert one number into two number 
	nLow = mod(nNum/256)  ; nHigh = int(nNum/256);
	*/
	inline void     ConvertNumberToTwoPart(const int nNum,int &nLow,int &nHigh)
					{
		               nLow = nNum % 256;	
					   nHigh = (int)(nNum/256);
	};

public:
	HANDLE     m_hPrinter;
	CString    m_szPrinterName;
	CString    m_szPortName;
	DEVMODE    m_devMode;


	
	//////////hasn't yet realize function
public:
	int       SetPrinterResolution(int nXResolution=0,int nYResolution=0);//set the resolue o printer

};
#endif