unsigned char swap_bits(unsigned char octet)
{
	return ((octet >> 4) | (octet << 4));
}

unsigned char swap(unsigned char octet)
{
	return ((octet >> 4) | (octet << 4));
}