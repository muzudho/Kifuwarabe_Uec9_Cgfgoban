#pragma once

/*
// 2016-03-16 05:23 Add �u__declspec(dllimport)�v��ǉ��B
// �����ՖʁA����(�����)�A�萔�A��ԁA�Ֆʂ̃T�C�Y�A�R�~
//extern "C"
__declspec(dllimport) int cgfgui_thinking( // int (*cgfgui_thinking)(
	int init_board[],	// �����Ֆ�
	int kifu[][3],		// ����  [][0]...���W�A[][1]...�΂̐F�A[][2]...����ԁi�b)
	int tesuu,			// �萔
	int black_turn,		// ���(����...1�A����...0)
	int board_size,		// �Ֆʂ̃T�C�Y
	double komi,		// �R�~
	int endgame_type,	// 0...�ʏ�̎v�l�A1...�I�Ǐ����A2...�}�`��\���A3...���l��\���B
	int endgame_board[]	// �I�Ǐ����̌��ʂ�������B
	);


// 2016-03-16 05:23 Add �u__declspec(dllimport)�v��ǉ��B
// �΋ǊJ�n���Ɉ�x�����Ă΂�܂��B
//extern "C"
__declspec(dllimport) void cgfgui_thinking_init(int *ptr_stop_thinking);


// 2016-03-16 05:23 Add �u__declspec(dllimport)�v��ǉ��B
// �΋ǏI�����Ɉ�x�����Ă΂�܂��B
//extern "C"
__declspec(dllimport) void cgfgui_thinking_close(void);
*/