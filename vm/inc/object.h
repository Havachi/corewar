#ifndef OBJECT_H
# define OBJECT_H
# include <stdint.h>
typedef struct OBJECT_t
{
	uint8_t type;
	union
	{
		uint8_t		u8;	//	1 byte unsigned
		int8_t		i8;	//	1 byte 
		uint32_t	u32;	//	4 bytes unsigned
		int32_t		i32;	//	4 bytes 
		void		*ptr;
	};
} OBJECT;
#endif
