/* See LICENSE file for copyright and license details. */

/* appearance */
static const unsigned int borderpx  = 2;        /* border pixel of windows */
static const int vertpad            = 10;       /* vertical padding of bar */
static const int sidepad            = 10;       /* horizontal padding of bar */
static const unsigned int gappx     = 10;
//static const unsigned int statgap   = 6;
static const unsigned int statgap   = 0;
static const unsigned int snap      = 32;       /* snap pixel */
static const int showbar            = 1;
static const int topbar             = 1;
static const int baralpha           = 200; // 0 to 255
static const int borderalpha        = OPAQUE;
static const unsigned int alphas[][3]      = {
	/*               fg      bg        border     */
	[SchemeNorm] = { OPAQUE, baralpha, borderalpha },
	[SchemeSel]  = { OPAQUE, baralpha, borderalpha },
};
static const int user_bh            = 34;        /* 0 means that dwm will calculate bar height, >= 1 means dwm will user_bh as bar height */
static const char *fonts[]          = { "TerminessTTF Nerd Font Mono:size=14" };

static const char *colors[][7]      = {
	[SchemeNorm]          = { col_gray4, degrade1[3], col_gray2 },
	[SchemeSel]           = { col_gray4, col_cyan, col_cyan },
	[SchemeStatus]        = { col_gray4, degrade1[3],  "#000000"  }, // Statusbar right {text,background,not used but cannot be empty}
	[SchemeTagsSel]       = { col_gray5, col_gray1,  "#000000"  }, // Tagbar left sel
	[SchemeTagsNorm]      = { col_gray4, degrade1[0],  "#000000"  }, // Tagbar left unsel
        [SchemeInfoSel]   = { col_gray4, degrade1[2],  "#000000"  }, // infobar middle  sel
        [SchemeInfoNorm]  = { col_gray4, degrade1[1],  "#000000"  }, // infobar middle  unsel
};

static const unsigned int ulinepad	= 6;	/* horizontal padding between the underline and tag */
static const unsigned int ulinestroke	= 3;	/* thickness / height of the underline */
static const unsigned int ulinevoffset	= 0;	/* how far above the bottom of the bar the line should appear */
static const int ulineall 		= 0;	/* 1 to show underline on all tags, 0 for just the active ones */

/* tagging */
// static const char *tags[] = {"", "", "", "", ""};
// static const char *tags1[] = {"ﭮ", "", "", "", ""};

// static const char *tags[] = {"Term", "Draw", "Book", "Music", "Brow"};
// static const char *tags1[] = {"Disc", "Tele", "Skyp", "Steam", "Lock"};

/*
 static const char *tags[]  = {
	 "1 ターミナル",
	 "2 図",
	 "3 本",
	 "4 音楽",
	 "5 ブラウザ",
	 "6 ディスコード",
	 "7 テレグラム",
	 "8 スカイプ",
	 "9 スティーム",
	 "10 パスワード"
 };
*/

static const char *tags[]  = {
    "1 - []",
    "2 - []",
    "3 - []",
    "4 - []",
    "5 - []",
    "1 - [ﭮ]",
    "2 - []",
    "3 - []",
    "4 - []",
    "5 - []"
	};

/*
static const char *tags[]  = {
    "1 - [] ターミナル",
    "2 - [] 図",
    "3 - [] 本",
    "4 - [] 音楽",
    "5 - [] ブラウザ",
    "1 - [ﭮ] ディスコード",
    "2 - [] テレグラム",
    "3 - [] スカイプ",
    "4 - [] スティーム",
    "5 - [] パスワード"};
*/
