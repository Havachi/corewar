#ifndef OBJECT_H
# define OBJECT_H
# include <stdint.h>
typedef struct OBJECT_t
{
	uint8_t type;
	union
	{
		uint8_t		u8;
		int8_t		i8;
		uint32_t	u32;
		int32_t		i32;
		void		*ptr;
	};
} OBJECT;
#endif
