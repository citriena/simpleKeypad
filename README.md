# simpleKeypad
 Arduino key input support library for LCD keypad shield
 by Citriena 

DFROBOT��Arduino LCD keypad shield (SKU: DFR0009)�A����т��̌݊��V�[���h�p�̃L�[�p�b�h���͕⏕���C�u����

�@�\

�Eint read_buttons() �ŁA�����ꂽ�L�[�̃R�[�h��Ԃ��܂��B�L�[�R�[�h�͈ȉ��̒ʂ�B

Right  - 0 (btnRIGHT)
Up     - 1 (btnUP)
Down   - 2 (btnDOWN)
Left   - 3 (btnLEFT)
Select - 4 (btnSELECT)
None   - 5 (btnNONE)
Void   - 6 (btnVOID)

����

�E�`���^�����O�h�~�Ή�
�@�w��񐔁i�����l�Q�O�O��j�L�[��ǂ݁AanalogRead()�̍ł��������l��ǂݎ��l�Ƃ��ď������܂��i�ڐG�s�ǂɂ���R�l�̑���΍�j�B

�E�L�[�������������ꍇ�̃L�[���̓��s�[�g���x���w��\
�@�L�[�������������ꍇ�́A���Ԋu�i�����l�F200ms�j�Ń��s�[�g���͏������܂��B
�@btnVoid �́A���̏ꍇ�Ɏ��ۂ̓L�[�͉�����Ă��邪�A�L�[���͂Ƃ��Ĉ���Ȃ��ꍇ�ɕԂ��R�[�h�ł��B

�E�L�[�������������ꍇ�̍ŏ��̃��s�[�g�J�n�܂ł̎��Ԃ�ݒ�i�����l�F500ms�j
�@���̐ݒ�l���L�[���̓��s�[�g���x�̐ݒ���傫����΁A�ŏ��̃��s�[�g���͊J�n�܂ł̎��Ԃ͂��̐ݒ�l�ƂȂ�܂��B

��̓I�Ȏg�����̓T���v���X�P�b�`�����Ă��������B

