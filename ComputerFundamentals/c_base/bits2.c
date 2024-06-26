
int bitset_size(uint_t s){
	s = (s & 0x55555555) + ((s >> 1) & 0x55555555);
	s = (s & 0x33333333) + ((s >> 2) & 0x33333333);
	s = (s & 0x0F0F0F0F) + ((s >> 4) & 0x0F0F0F0F);
	s = (s & 0x00FF00FF) + ((s >> 8) & 0x00FF00FF);
	s = (s & 0x0000FFFF) + ((s >> 16) & 0x0000FFFF);
	return s;
}
