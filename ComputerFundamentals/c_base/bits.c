
int bitset_size(uint32_t s) {
	int n;
	for (int i=0;i<32; i++) {
		n += bitset_contains(s, i);
	}
	return n;
}
