/**
 * @file lv_persian.c
 *
 */

/*********************
 *      INCLUDES
 *********************/
#include "lv_persian.h"
#if LV_TXT_RTL

/*********************
 *      DEFINES
 *********************/

/**********************
 *      TYPEDEFS
 **********************/

/**********************
 * LOOK UP TABLE
 * *******************/
static const persian_map_t persian_lookup_table[] = {
        { .letter_code = 1570,  .alone_code = 65153, .prefix_code = 65153,
                .middle_code = 65153, .suffix_code = 65153, .connect_to_previous = 0,
                .connect_to_next = 0 }, //آ
        { .letter_code = 1575, .alone_code = 65165, .prefix_code = 65165,
                .middle_code = 65166, .suffix_code = 65166, .connect_to_previous = 1,
                .connect_to_next = 0 }, //ا
        { .letter_code = 1576, .alone_code = 65167, .prefix_code = 65169,
                .middle_code = 65170, .suffix_code = 65168, .connect_to_previous = 1,
                .connect_to_next = 1 }, //ب
        { .letter_code = 1662, .alone_code = 64342, .prefix_code = 64344,
                .middle_code = 64345, .suffix_code = 64343, .connect_to_previous = 1,
                .connect_to_next = 1 }, //پ
        { .letter_code = 1578, .alone_code = 65173, .prefix_code = 65175,
                .middle_code = 65176, .suffix_code = 65174, .connect_to_previous = 1,
                .connect_to_next = 1 }, //ت
        { .letter_code = 1579, .alone_code = 65177, .prefix_code = 65179,
                .middle_code = 65180, .suffix_code = 65178, .connect_to_previous = 1,
                .connect_to_next = 1 }, //ث
        { .letter_code = 1580, .alone_code = 65181, .prefix_code = 65183,
                .middle_code = 65184, .suffix_code = 65182, .connect_to_previous = 1,
                .connect_to_next = 1 }, //ج
        { .letter_code = 1670, .alone_code = 64378, .prefix_code = 64380,
                .middle_code = 64381, .suffix_code = 64379, .connect_to_previous = 1,
                .connect_to_next = 1 }, //چ
        { .letter_code = 1581, .alone_code = 65186, .prefix_code = 65187,
                .middle_code = 65188, .suffix_code = 65186, .connect_to_previous = 1,
                .connect_to_next = 1 }, //ح
        { .letter_code = 1582, .alone_code = 65189, .prefix_code = 65191,
                .middle_code = 65192, .suffix_code = 65190, .connect_to_previous = 1,
                .connect_to_next = 1 }, //خ
        { .letter_code = 1583, .alone_code = 65193, .prefix_code = 65193,
                .middle_code = 65193, .suffix_code = 65194, .connect_to_previous = 1,
                .connect_to_next = 0 }, //د
        { .letter_code = 1584, .alone_code = 65195, .prefix_code = 65195,
                .middle_code = 65196, .suffix_code = 65196, .connect_to_previous = 1,
                .connect_to_next = 0 }, //ذ
        { .letter_code = 1585, .alone_code = 65197, .prefix_code = 65197,
                .middle_code = 65198, .suffix_code = 65198, .connect_to_previous = 1,
                .connect_to_next = 0 }, //ر
        { .letter_code = 1586, .alone_code = 65199, .prefix_code = 65199,
                .middle_code = 65200, .suffix_code = 65200, .connect_to_previous = 1,
                .connect_to_next = 0 }, //ز
        { .letter_code = 1688, .alone_code = 64394, .prefix_code = 64394,
                .middle_code = 64395, .suffix_code = 64395, .connect_to_previous = 1,
                .connect_to_next = 0 }, //ژ
        { .letter_code = 1587, .alone_code = 65201, .prefix_code = 65203,
                .middle_code = 65204, .suffix_code = 65202, .connect_to_previous = 1,
                .connect_to_next = 1 }, //س
        { .letter_code = 1588, .alone_code = 65205, .prefix_code = 65207,
                .middle_code = 65208, .suffix_code = 65206, .connect_to_previous = 1,
                .connect_to_next = 1 }, //ش
        { .letter_code = 1589, .alone_code = 65209, .prefix_code = 65211,
                .middle_code = 65212, .suffix_code = 65210, .connect_to_previous = 1,
                .connect_to_next = 1 }, //ص
        { .letter_code = 1590, .alone_code = 65213, .prefix_code = 65215,
                .middle_code = 65216, .suffix_code = 65214, .connect_to_previous = 1,
                .connect_to_next = 1 }, //ض
        { .letter_code = 1591, .alone_code = 65217, .prefix_code = 65219,
                .middle_code = 65220, .suffix_code = 65218, .connect_to_previous = 1,
                .connect_to_next = 1 }, //ط
        { .letter_code = 1592, .alone_code = 65221, .prefix_code = 65223,
                .middle_code = 65224, .suffix_code = 65222, .connect_to_previous = 1,
                .connect_to_next = 1 }, //ظ
        { .letter_code = 1593, .alone_code = 65225, .prefix_code = 65227,
                .middle_code = 65228, .suffix_code = 65226, .connect_to_previous = 1,
                .connect_to_next = 1 }, //ع
        { .letter_code = 1594, .alone_code = 65229, .prefix_code = 65231,
                .middle_code = 65232, .suffix_code = 65230, .connect_to_previous = 1,
                .connect_to_next = 1 }, //غ
        { .letter_code = 1601, .alone_code = 65233, .prefix_code = 65235,
                .middle_code = 65236, .suffix_code = 65234, .connect_to_previous = 1,
                .connect_to_next = 1 }, //ف
        { .letter_code = 1602, .alone_code = 65237, .prefix_code = 65239,
                .middle_code = 65240, .suffix_code = 65238, .connect_to_previous = 1,
                .connect_to_next = 1 }, //ق
        { .letter_code = 1705, .alone_code = 65241, .prefix_code = 65243,
                .middle_code = 65244, .suffix_code = 65242, .connect_to_previous = 1,
                .connect_to_next = 1 }, //ک
        { .letter_code = 1711, .alone_code = 65402, .prefix_code = 64404,
                .middle_code = 64405, .suffix_code = 64403, .connect_to_previous = 1,
                .connect_to_next = 1 }, //گ
        { .letter_code = 1604, .alone_code = 65245, .prefix_code = 65247,
                .middle_code = 65248, .suffix_code = 65246, .connect_to_previous = 1,
                .connect_to_next = 1 }, //ل
        { .letter_code = 1605, .alone_code = 65249, .prefix_code = 65251,
                .middle_code = 65252, .suffix_code = 65250, .connect_to_previous = 1,
                .connect_to_next = 1 }, //م
        { .letter_code = 1606, .alone_code = 65253, .prefix_code = 65255,
                .middle_code = 65256, .suffix_code = 65254, .connect_to_previous = 1,
                .connect_to_next = 1 }, //ن
        { .letter_code = 1608, .alone_code = 65261, .prefix_code = 65261,
                .middle_code = 65262, .suffix_code = 65262, .connect_to_previous = 1,
                .connect_to_next = 0 }, //و
        { .letter_code = 1607, .alone_code = 65257, .prefix_code = 65259,
                .middle_code = 65260, .suffix_code = 65258, .connect_to_previous = 1,
                .connect_to_next = 1 }, //ه
        { .letter_code = 1740, .alone_code = 65263, .prefix_code = 65267,
                .middle_code = 65268, .suffix_code = 65264, .connect_to_previous = 1,
                .connect_to_next = 1 }, //ی
        };



/**********************
 *  STATIC PROTOTYPES
 **********************/
static persian_map_t*lv_find_persian_letter(uint32_t letterCode);

/**********************
 *  STATIC VARIABLES
 **********************/

/**********************
 *      MACROS
 **********************/

/**********************
 *   GLOBAL FUNCTIONS
 **********************/

/**
 * return an object from lookup table based on letter sent to function
 * @param letter_code the utf8 code
 * @return type of persian_map_t
 */
uint32_t lv_get_converted_persian_letter(uint32_t previous_letter, uint32_t letter,
		uint32_t next_letter) {
	persian_map_t *nextPersianLetter = NULL, *persianLetter = NULL,
			*prePersianLetter = NULL;
	if ((previous_letter > 0x600) && (previous_letter < 0x6FF)) {
		prePersianLetter = lv_find_persian_letter(previous_letter);
	}
	persianLetter = lv_find_persian_letter(letter);
	if ((next_letter > 0x600) && (next_letter < 0x6FF)) {
		nextPersianLetter = lv_find_persian_letter(next_letter);
	}
	if (persianLetter != NULL) {
		if (prePersianLetter != NULL) {
			if (nextPersianLetter != NULL) {
				if (nextPersianLetter->connect_to_next) {
					return persianLetter->middle_code;
				} else {
					if (prePersianLetter->connect_to_previous) {
						return persianLetter->prefix_code;
					} else {
						return persianLetter->alone_code;
					}
				}
			} else {
				if (prePersianLetter->connect_to_previous) {
					return persianLetter->prefix_code;
				} else {
					return persianLetter->alone_code;
				}
			}

		} else {
			if (nextPersianLetter != NULL) {
				if (nextPersianLetter->connect_to_next) {
					return persianLetter->suffix_code;
				} else {
					return persianLetter->alone_code;
				}
			} else {
				return persianLetter->alone_code;
			}
		}
	}
	return letter;
}

/**
 * return the converted letter .In some languages like farsi and arabic based on the position of a letter in
 * a word the shape of the letter will change . this function process the position of letter then return the result letter
 * @param pre_letter the previous letter in the current word
 * @param letter  current letter that shoul be processed
 * @param next_letter the next letter in the current word
 * @return the converted letter
 */
uint8_t* lv_get_reversed_buffer(uint8_t*buffer, uint16_t start, uint16_t end) {
	struct text_block_s block;
	struct text_block_s *current_block;
	struct text_block_s *last_block;
	bool contain_persian_letter = false;
	if ((end - start) < 3) {
		return buffer;
	}
	for (int i = start; i < end; i++) {
		if ((*((uint16_t*) &buffer[i]) & 0xFC) == 0xD8) {
			contain_persian_letter = true;
			break;
		}
	}
	if (!contain_persian_letter) {
		return buffer;
	}
	uint8_t* reversed_buff = lv_mem_alloc(end - start + 2);
	if(reversed_buff == NULL){
		return buffer;
	}
	*((uint32_t*)&reversed_buff[end-start-2]) = NULL;
	current_block = &block;
	block.next = NULL;
	block.start = start;
	block.end = end;
	for (int i = end - 1; i > start; i--) {
		if ((buffer[i - 1] & 0xFC) == 0xD8) {
			current_block->next = lv_mem_alloc(sizeof(struct text_block_s));
			current_block = current_block->next;
			current_block->next = NULL;
			current_block->end = i - 1;
			current_block->start = i - 1;
			current_block->utf = true;
			while (((*((uint16_t*) &buffer[current_block->start - 2]) & 0xFC)
					== 0xD8) && (i > start)) {
				current_block->start -= 2;
				i -= 2;
			}
		} else {
			current_block->next = lv_mem_alloc(sizeof(struct text_block_s));
			current_block = current_block->next;
			current_block->next = NULL;
			if (i == end - 1) {
				current_block->end = end;
			} else {
				current_block->end = i;
			}
			current_block->start = i;
			current_block->utf = false;
			while ((*((uint16_t*) &buffer[current_block->start - 2]) & 0xFC)
					!= 0xD8 && (i > start)) {
				current_block->start--;
				i--;
			}
		}
	}
	current_block = &block;
	uint16_t length = 0;
	do {
		current_block = current_block->next;
		if (current_block->utf) {
			do {
				*((uint16_t*) &reversed_buff[length]) =
						*((uint16_t*) &buffer[current_block->end]);
				current_block->end -= 2;
				length += 2;
			} while (current_block->end >= current_block->start);
		} else {
			do {
				reversed_buff[length] = buffer[current_block->start];
				current_block->start++;
				length++;
			} while (current_block->start < current_block->end);
		}
	} while (current_block->next != NULL);
	current_block = &block;
	last_block = current_block->next;
	while (block.next != NULL) {
		while (last_block->next != NULL) {
			current_block = last_block;
			last_block = last_block->next;
		}
		lv_mem_free(last_block);
		current_block->next = NULL;
		current_block = &block;
		last_block = block.next;
	}
	return reversed_buff;
}


/**********************
 *   STATIC FUNCTIONS
 **********************/

persian_map_t*lv_find_persian_letter(uint32_t letterCode) {
	for (int i = 0; i < sizeof(persian_lookup_table); i++) {
		if (persian_lookup_table[i].letter_code == letterCode) {
			return (persian_map_t*) &persian_lookup_table[i];
		}
	}
	return NULL;
}

#endif /*LV_TXT_RTL*/
