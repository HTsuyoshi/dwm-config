/* See LICENSE file for copyright and license details. */

/* appearance */
static const char col_gray1[]       = "#000000";
static const char col_gray2[]       = "#030103";
static const char col_gray3[]       = "#bbbbbb";
static const char col_gray4[]       = "#E4E4E4"; // Char color
static const char col_gray5[]       = "#FF00FF"; // Char color selected
static const char col_cyan[]        = "#FF00FF";

static const char degrade1[][9] = {
        "#131418",
        "#101013",
        "#0d0c0e",
        "#000000",
        "#222831",
        "#1f242c",
        "#1c2027",
        "#191c22",
        "#16181d",
        "#16181d",
};

static const char *degrade[][2] = {
        { col_gray4, degrade1[9] },
        { col_gray4, degrade1[8] },
        { col_gray4, degrade1[7] },
        { col_gray4, degrade1[6] },
        { col_gray4, degrade1[5] },
};
