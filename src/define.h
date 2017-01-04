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

//define.h // data structure and macros
#ifndef define_h_
#define define_h_

#define BOARD_POS_X   60
#define BOARD_POS_Y   30

#define BOARD_WIDTH   32

#define GRID_NUM 15
#define GRID_COUNT 225


#define BLACK  0
#define WHITE  1

#define NOSTONE 0xFF    //û������

#define IsValidPos(x,y)  ((x>=0&&x<GRID_NUM)&&(y>=0&&y<GRID_NUM))  
typedef struct _stoneposition
{
	BYTE		x;
	BYTE		y;
}STONEPOS;

typedef struct _stonemove
{
	STONEPOS	StonePos;		
	int		    Score;	
}STONEMOVE;

#endif //define_h_