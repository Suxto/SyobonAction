#include "DxLib.h"
#include <stdio.h>
#include <math.h>
#include <string>
using namespace std;

#define SHORT

void loadg();

#define main main_
#define fma fma_

//String �g�p

//�v���O������
//main-10
//�^�C�g��-100
int main=100,maintm=0;

//�X�e�[�W
int stagecolor=0;
int sta=1,stb=4,stc=0;

//�N�C�b�N
int fast=1;

//�g���b�v�\��
int trap=1;

//���ԃQ�[�g
int tyuukan=0;


//�X�^�b�t���[��
int ending=0;


//�X�e�[�W�ǂݍ��݃��[�v(������Ȃ�)
int stagerr,stagepoint;
//�I�[�o�[�t���[������
int over=0;

//�X�e�[�W�X�C�b�`
int stageonoff=0;


//���C���v���O����
void Mainprogram();
void rpaint();
int maint;


//�T�u�N���X
//(�E�G�C�g�n
static void wait(int interval);
static void wait2(long stime, long etime,int FLAME_TIME);
static int rand(int Rand);
void end();

//�`��
int color;
void setfont(int a);
void setcolor(int red, int green, int blue);
void setc0();
void setc1();
void drawpixel(int a,int b);
void drawline(int a,int b,int c,int d);
void drawrect(int a,int b,int c,int d);
void fillrect(int a,int b,int c,int d);
void drawarc(int a,int b,int c,int d);
void fillarc(int a,int b,int c,int d);
int grap[161][8],mgrap[51];
int loadimage(string b);
int loadimage(int a,int x,int y,int r,int z);
int mirror;
void drawimage(int mx,int a,int b);
void drawimage(int mx,int a,int b,int c,int d,int e,int f);
void setre();
void setre2();
void setno();
int oto[151];
void ot(int x);void bgmchange(int x);

//����
void str(string c,int a,int b);


//)

void stagecls();
void stage();
void stagep();





//1-�X�e�[�W
//10-�X�e�[�W�O
//



//���[�v
int t,tt,t1,t2,t3,t4;


//������
int zxon,zzxon;

//�L�[�R���t�B�O
int key,keytm;

//�O�p�֐�
double pai=3.1415926535;


//�n��
#define smax 31
int sx,sco;
int sa[smax],sb[smax],sc[smax],sd[smax],stype[smax],sxtype[smax],sr[smax];
int sgtype[smax];



//�v���C���[
int mainmsgtype;
int ma,mb,mnobia,mnobib,mhp;
int mc,md,macttype,atkon,atktm,mactsok,msstar,nokori=2,mactp,mact;

int mtype,mxtype,mtm,mzz;
int mzimen,mrzimen,mkasok,mmuki,mmukitm,mjumptm,mkeytm,mcleartm;
int mmutekitm,mmutekion;
int mztm,mztype;
int actaon[7];
//���b�Z�[�W
int mmsgtm,mmsgtype;

int mascrollmax=21000;//9000




//�u���b�N
void tyobi(int x,int y,int type);
void brockbreak(int t);
#define tmax 641
int tco;
int ta[tmax],tb[tmax],tc[tmax],td[tmax],thp[tmax],ttype[tmax];
int titem[tmax],txtype[tmax];

//���b�Z�[�W�u���b�N
int tmsgtm,tmsgtype,tmsgx,tmsgy,tmsgnobix,tmsgnobiy,tmsg;
void ttmsg();void txmsg(string x,int a);
void setfont(int x,int y);

//���ʂ������Ȃ��O��
void eyobi(int xa,int xb,int xc,int xd,int xe,int xf,int xnobia,int xnobib,int xgtype,int xtm);
#define emax 201
int eco;
int ea[emax],eb[emax],enobia[emax],enobib[emax],ec[emax],ed[emax];
int ee[emax],ef[emax],etm[emax];
int egtype[emax];



//�G�L����
void ayobi(int xa,int xb,int xc,int xd,int xnotm,int xtype,int xxtype);
void tekizimen();
#define amax 24
int aco;
int aa[amax],ab[amax],anobia[amax],anobib[amax],ac[amax],ad[amax];
int ae[amax],af[amax],abrocktm[amax];
int aacta[amax],aactb[amax],azimentype[amax],axzimen[amax];
int atype[amax],axtype[amax],amuki[amax],ahp[amax];
int anotm[amax],anx[160],any[160];
int atm[amax],a2tm[amax];
int amsgtm[amax],amsgtype[amax];

//�G�o��
#define bmax 81
int bco;
int ba[bmax],bb[bmax],btm[bmax];
int btype[bmax],bxtype[bmax],bz[bmax];


//�w�i
#define nmax 41
int nxxmax,nco;
int na[nmax],nb[nmax],nc[nmax],nd[nmax],ntype[nmax];
int ne[nmax],nf[nmax],ng[nmax],nx[nmax];


//���t�g
#define srmax 21
int srco;
int sra[srmax],srb[srmax],src[srmax],srd[srmax],sre[srmax],srf[srmax];
int srtype[srmax],srgtype[srmax],sracttype[srmax],srsp[srmax];
int srmuki[srmax],sron[srmax],sree[srmax];
int srsok[srmax],srmovep[srmax],srmove[srmax];





//�X�N���[���͈�
int fx=0,fy=0,fzx,fzy,scrollx,scrolly;
//�S�̂̃|�C���g
int fma=0,fmb=0;
//�����X�N���[��
int kscroll=0;
//��ʃT�C�Y(�t�@�~�R���T�C�Y�~2)(256-224)
int fxmax=48000,fymax=42000;



//�X�e�[�W
byte stagedate[17][2001];

//��ʍ�
int blacktm=1,blackx=0;



//���R�Ȓl
int xx[91];
double xd[11];
string xs[31];


//�^�C�}�[����
long stime;