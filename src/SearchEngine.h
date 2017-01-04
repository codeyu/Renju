//*******************************************************************************
// COPYRIGHT NOTES
// ---------------
// This source code is a part of Renju which is an example of <Game Programing guide>.
// You may use, compile or redistribute it as part of your application 
// for free. 
// You cannot redistribute sources without the official agreement of the author. 
// If distribution of you application which contents code below was occured, place 
// e-mail <hidebug@hotmail.com> on it is to be appreciated.
// This code can be used WITHOUT ANY WARRANTIES on your own risk.
// 
// Spring Wang <hidebug@hotmail.com>

// ---------------
// ��Ȩ����
// ---------------
// ���ļ�����֮�����ǡ��˻����ĳ������ָ�ϡ��ķ��������������һ����
// ��������ѵ�ʹ��, ���� ������Ϊ��Ӧ�ó����һ���֡� 
// ������������δ������������ɵ�����·ַ���Դ���롣 
// �������Ӧ�ó���ʹ������Щ���룬������Ӧ�ó�������� 
// ���� e-mail <hidebug@hotmail.com> ���������͵�������
// �˴��벢�������κα�֤��ʹ���ߵ��Գз��ա�
// 
// ��С�� <hidebug@hotmail.com>

// SearchEngine.h: interface for the CSearchEngine class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_SEARCHENGINE_H__2AF7A220_CB28_11D5_AEC7_5254AB2E22C7__INCLUDED_)
#define AFX_SEARCHENGINE_H__2AF7A220_CB28_11D5_AEC7_5254AB2E22C7__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "MoveGenerator.h"
#include "Eveluation.h"

class CSearchEngine  
{
public:
	CSearchEngine();
	virtual ~CSearchEngine();
	
	virtual SearchAGoodMove(BYTE position[][GRID_NUM], int Type)=0;
	
	virtual SetSearchDepth(int nDepth){m_nSearchDepth = nDepth;};
	
	virtual SetEveluator(CEveluation *pEval){m_pEval = pEval;};

	virtual SetMoveGenerator(CMoveGenerator *pMG){m_pMG = pMG;};
	void SetThinkProgress(CProgressCtrl	*pThinkProgress)
	{m_pThinkProgress = pThinkProgress;};
	BOOL GameOver(){return m_bGameOver;};
	void BeginGame(){m_bGameOver = FALSE;};
protected:
	CProgressCtrl	*m_pThinkProgress;
	virtual BYTE MakeMove(STONEMOVE* move,int type);
	virtual void UnMakeMove(STONEMOVE* move);
	virtual int IsGameOver(BYTE position[GRID_NUM][GRID_NUM], int nDepth);
	BYTE CurPosition[GRID_NUM][GRID_NUM];
	STONEMOVE m_cmBestMove;
	CMoveGenerator *m_pMG;
	CEveluation *m_pEval;
	int m_nSearchDepth;
	int m_nMaxDepth;
	BOOL m_bGameOver;
};

#endif // !defined(AFX_SEARCHENGINE_H__2AF7A220_CB28_11D5_AEC7_5254AB2E22C7__INCLUDED_)
