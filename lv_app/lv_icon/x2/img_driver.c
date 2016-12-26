#include "img_conf.h"
#include "lv_conf.h"

#if USE_IMG_DRIVER != 0 || LV_APP_USE_INTERNAL_ICONS == 2

#include <stdint.h> 
#include "misc/others/color.h"

const color_int_t img_driver [] = { /*Width = 32, Height = 29*/ 
32,	/*Width*/
29,	/*Heigth*/
16,	/*Color depth = 16*/
1,	/*Flags: Transp = 1*/
2016, 2016, 2016, 2016, 2016, 2016, 2016, 29614, 31695, 31727, 31727, 31727, 31727, 31727, 31727, 31727, 31727, 31727, 31727, 31727, 31727, 31727, 31727, 31695, 29614, 2016, 2016, 2016, 2016, 2016, 2016, 2016, 
2016, 2016, 2016, 2016, 2016, 2016, 23243, 10597, 12678, 12678, 12710, 12710, 12710, 12710, 12710, 12710, 12710, 12710, 12710, 12710, 12710, 12710, 12710, 12678, 10597, 21162, 2016, 2016, 2016, 2016, 2016, 2016, 
2016, 2016, 2016, 2016, 2016, 2016, 10597, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8484, 29614, 2016, 2016, 2016, 2016, 2016, 
2016, 2016, 2016, 2016, 2016, 23275, 4226, 0, 4226, 6371, 6339, 6339, 6339, 6339, 6339, 6339, 6339, 6339, 6339, 6339, 6339, 6339, 6371, 4226, 0, 2145, 16936, 2016, 2016, 2016, 2016, 2016, 
2016, 2016, 2016, 2016, 31727, 12678, 32, 4258, 25356, 35921, 33808, 33808, 33808, 31727, 31727, 31727, 31727, 31727, 31727, 31727, 31727, 33808, 35921, 25388, 8452, 2113, 6371, 25356, 2016, 2016, 2016, 2016, 
2016, 2016, 2016, 2016, 21162, 4258, 2145, 14823, 42260, 54938, 52825, 50744, 50744, 50744, 50744, 50744, 50744, 50744, 50744, 50744, 50744, 52825, 54938, 44373, 19017, 4258, 32, 16904, 2016, 2016, 2016, 2016, 
2016, 2016, 2016, 2016, 12678, 0, 10565, 27501, 54938, 65535, 63422, 63390, 63390, 63390, 63390, 63390, 63390, 63390, 63390, 63390, 63390, 63422, 65535, 54970, 31695, 12710, 0, 10565, 2016, 2016, 2016, 2016, 
2016, 2016, 2016, 2016, 6339, 0, 19017, 40147, 61277, 65535, 65535, 65535, 65535, 65535, 65535, 65535, 65535, 65535, 65535, 65535, 65535, 65535, 65535, 61309, 42292, 21162, 2113, 4258, 31695, 2016, 2016, 2016, 
2016, 2016, 2016, 25388, 2145, 4226, 29614, 50712, 63390, 65535, 65535, 65535, 65535, 65535, 65535, 65535, 65535, 65535, 65535, 65535, 65535, 65535, 65535, 63390, 50744, 31727, 4258, 32, 19049, 2016, 2016, 2016, 
2016, 2016, 2016, 14791, 0, 8484, 40179, 59196, 65503, 65535, 65535, 65535, 65535, 65535, 65535, 65535, 65535, 65535, 65535, 65535, 65535, 65535, 65535, 65503, 59196, 40179, 8484, 0, 8484, 27501, 2016, 2016, 
2016, 2016, 21162, 4226, 0, 14791, 48631, 65535, 65535, 65535, 65535, 65535, 65535, 65535, 65535, 65535, 65535, 65535, 65535, 65535, 65535, 65535, 65535, 65535, 65535, 48631, 12710, 0, 0, 16936, 2016, 2016, 
2016, 2016, 12710, 0, 2145, 21162, 54970, 65535, 65535, 65535, 65535, 65535, 65535, 65535, 65535, 65535, 65535, 65535, 65535, 65535, 65535, 65535, 65535, 65535, 65535, 54938, 19049, 32, 0, 10565, 2016, 2016, 
2016, 2016, 8452, 0, 12710, 31727, 57083, 65535, 65535, 65535, 65535, 65535, 65535, 65535, 65535, 65535, 65535, 65535, 65535, 65535, 65535, 65535, 65535, 65535, 65535, 57051, 29582, 8484, 0, 6371, 2016, 2016, 
2016, 29582, 4226, 2145, 25356, 44373, 61309, 65535, 65535, 65535, 65535, 65535, 65535, 65535, 65535, 65535, 65535, 65535, 65535, 65535, 65535, 65535, 65535, 65535, 65535, 61277, 38066, 19049, 2113, 2145, 23243, 2016, 
2016, 16936, 32, 6371, 38034, 57083, 65535, 65535, 65535, 65535, 65535, 65535, 65535, 65535, 65535, 65535, 65535, 65535, 65535, 65535, 65535, 65535, 65535, 65535, 65535, 65503, 50712, 29614, 6339, 0, 10597, 29614, 
27469, 6371, 0, 8452, 35953, 52857, 57051, 59164, 57083, 59196, 63422, 65535, 65535, 65535, 65535, 65535, 65535, 65535, 65535, 65535, 65535, 65503, 59196, 57083, 59164, 54970, 46518, 29614, 6371, 0, 2113, 21130, 
19017, 0, 0, 4258, 23243, 31727, 31727, 31727, 29614, 38066, 54970, 65503, 65535, 65535, 65535, 65535, 65535, 65535, 65535, 65535, 65535, 59164, 38066, 29614, 31727, 31695, 29582, 19049, 4226, 0, 0, 14791, 
14823, 0, 0, 2145, 10597, 14823, 14791, 12710, 10597, 21130, 42260, 57051, 65503, 65535, 65535, 65535, 65535, 65535, 65535, 65535, 61277, 46486, 23243, 10597, 12710, 14791, 14791, 10565, 2113, 0, 0, 10597, 
14823, 0, 0, 0, 2113, 2145, 2145, 2113, 32, 8452, 23275, 42260, 63390, 65535, 65535, 65535, 65535, 65535, 65535, 63422, 48599, 29582, 8484, 32, 2113, 2145, 2145, 2113, 0, 0, 0, 12678, 
16904, 0, 0, 0, 0, 0, 0, 0, 0, 32, 10565, 25388, 50712, 61277, 59164, 57083, 57083, 59164, 61277, 50744, 31727, 14823, 2113, 0, 0, 0, 0, 0, 0, 0, 0, 12678, 
16904, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2113, 10565, 27469, 33840, 33808, 31727, 31727, 33808, 33840, 27501, 12710, 4226, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12678, 
16904, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2113, 10597, 14823, 14791, 14791, 14791, 14791, 14823, 10597, 2145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12678, 
16904, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2113, 2145, 2145, 2145, 2145, 2145, 2145, 2113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12678, 
16904, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12678, 
16904, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12678, 
14823, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10597, 
12710, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8484, 
23243, 6371, 6371, 8452, 8452, 8452, 8452, 8452, 8452, 8452, 8452, 8452, 8452, 8452, 8452, 8452, 8452, 8452, 8452, 8452, 8452, 8452, 8452, 8452, 8452, 8452, 8452, 8452, 8452, 6371, 4226, 19017, 
2016, 31727, 33808, 33808, 33808, 33808, 33808, 33808, 33808, 33808, 33808, 33808, 33808, 33808, 33808, 33808, 33808, 33808, 33808, 33808, 33808, 33808, 33808, 33808, 33808, 33808, 33808, 33808, 33808, 31727, 31695, 2016, 
};

#endif