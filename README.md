# Renju
五子棋范例的源程序

Directory of renju
五子棋范例的源程序：目录src下的内容

renju.dsw
renju.dsp
	这两个是项目文件。包含整个项目的文件配置等信息

RESOURCE.H
renju.rc
	这是整个工程中使用的Windows资源列表。包括置于res子目录下的图标，
位图以及光标等内容。

Renju.h
    这是应用程序的主头文件。包含了通用于工程的其他头文件。以及
CRenjuApp类的声明。
renju.cpp
    这是应用程序的主源程序。包含整个程序的入口点。CRenjuApp类的实现。

StdAfx.h
StdAfx.cpp
    这对文件由用于将一些预编译信息纳入程序。编译后将产生stdafx.obj

define.h
	这是一个包含程序中的数据表示的定义的头文件。

NewGame.h
NewGame.cpp
	这一对文件定义并实现用于新游戏的设置的对话框。

renjuDlg.h
renjuDlg.cpp
	这一对文件定义并实现了，五子棋的主界面。

Eveluation.h
Eveluation.cpp
	这一对文件定义并实现了估值核心类。

MoveGenerator.h
MoveGenerator.cpp
	这一对文件定义并实现了走法产生器。

SearchEngine.h
SearchEngine.cpp
	这一对文件定义了搜索引擎接口。

HistoryHeuristic.h
HistoryHeuristic.cpp
	这一对文件定义并实现历史启发类。

TranspositionTable.h
TranspositionTable.cpp
	这一对文件定义并实现置换表类。

NegaScout_TT_HH.h
NegaScout_TT_HH.cpp
	这一对文件定义并实现历史启发和置换表增强的NegaScout搜索引擎。

## Directory of src\res
RENJU.rc2//资源文件
renju.ico//图标文件
