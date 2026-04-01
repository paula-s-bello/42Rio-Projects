/*#include <stdio.h> */
unsigned char	swap_bits(unsigned char octet)
{
	return (octet >> 4 | octet << 4);
}

/*int	main(void)
{
	unsigned char	result;
	unsigned char	octet;

	octet = 0x53;
	result = swap_bits(octet);
	printf("Octeto original: 0x%X\n", octet);
	printf("Octeto com bits alterados: 0x%X\n", result);
	return (0);
}*/
