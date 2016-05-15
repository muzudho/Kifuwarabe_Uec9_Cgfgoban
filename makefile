#---------------------------------------------------
# ���C�N�t�@�C��(makefile)
#---------------------------------------------------

# �R���p�C��
cc  = bcc32

# �R���p�C���I�v�V����
cflags = -W

# ���\�[�X�R���p�C��
rc = brc32

# ���\�[�X�R���p�C���I�v�V����
rcflags =


#---------------------------------------------------
# �R���p�C������t�@�C�����`
#---------------------------------------------------

# name�Ɏ��s�t�@�C����/�\�[�X�t�@�C��������g���q�����������̂����܂��B
name = cgfgoban

# �����N����t�@�C���B���C�u�����Ȃǂ͂����ɃX�y�[�X�ŋ�؂��Ēǉ��B
objs = $(name).obj cgf_main.obj cgf_pipe.obj \
 cgf_term.obj cgf_win.obj cgf_wsk.obj


# ���s�`���̃t�@�C����
exe = $(name).exe

# ���\�[�X�t�@�C����
resourcefile = $(name).rc


#---------------------------------------------------
# �����K��
#---------------------------------------------------

# �R���p�C��
.cpp.obj:
    $(cc) $(cflags) -c $<

# �����N
$(exe): $(objs) $(resourceobj) $(resourcefile)
    $(cc) $(cflags) -e$(name) $(objs)
    $(rc) $(rcflags) $(resourcefile)

# �N���A
clean:
   del *.obj
   del *.tds